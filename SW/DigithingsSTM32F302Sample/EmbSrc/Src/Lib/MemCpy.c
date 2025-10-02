void * memcpy(void *dest, const void *src, unsigned int len) {
	char *d = dest;
	const char *s = src;
	while (len--) {
		*d++ = *s++;
	}
	return dest;
}
