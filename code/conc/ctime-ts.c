char *ctime_ts(const time_t *timep, char *privatep)
{
	char *sharedp;

	P(&mutex);
	sharedp = ctime(timep);
	strcpy(privatep, sharedp); /* Copy string from shared to private */
	V(&mutex);
	return privatep;
}
