/* IP address structure */
struct in_addr {
	uint32_t s_addr; /* Address in network byte order (big-endian) */
};

/* IP socket address structure */
struct sockaddr_in {
	uint16_t	sin_family;	/* Protocol family (always AF_INET) */
	uint16_t	sin_port;	/* Port number in network byte order */
	struct in_addr	sin_addr;	/* IP address in network byte order */
	unsigned char	sin_zero[8];	/* Pad to sizeof(struct sockaddr) */
};

/* Generic socket address structure (for connect, bind, and accept) */
struct sockaddr {
	uint16_t  sa_family;	/* Protocol family */
	char      sa_date[14];	/* Address data */
};

struct addrinfo {
	int		ai_flags;	/* Hints argument flags */
	int		ai_family;	/* First arg to socket function */
	int		ai_socktype;	/* Second arg to socket function */
	int		ai_protocol;	/* Third arg to socket function */
	char		*ai_canonname;	/* Canonical hostname */
	size_t		ai_addrlen;	/* Size of ai_addr struct */
	struct sockaddr *ai_addr;	/* Ptr to socket address structure */
	struct addrinfo *ai_next;	/* Ptr to next item in linked list */
};
