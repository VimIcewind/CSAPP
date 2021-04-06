#include "csapp.h"

void echo(int connfd);

void sigchld_handler(int sig)
{
	while (waitpid(-1, 0, WNOHANG) > 0)
		;
	return;
}

int main(int argc, char **argv)
{
	int listenfd, connfd;
	socklen_t clientlen;
	struct sockaddr_storage clientaddr;  /* Enough space for any address */
	char client_hostname[MAXLINE], client_port[MAXLINE];

	if (argc != 2) {
		fprintf(stderr, "usage: %s <port>\n", argv[0]);
		exit(0);
	}

	Signal(SIGCHLD, sigchld_handler);
	listenfd = Open_listenfd(argv[1]);
	while (1) {
		clientlen = sizeof(struct sockaddr_storage);
		connfd = Accept(listenfd, (SA *)&clientaddr, &clientlen);
		if (Fork() == 0) {
			Close(listenfd); /* Child closes its listening socket */
			echo(connfd);	 /* Child service client */
			Close(connfd);	 /* Child closes connection with client */
			exit(0);	 /* Child exits */
		}
		Close(connfd);  /* Parent closes connected socket (important!) */
	}

	exit(0);
}
