char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		dest[n] = src[n];
		n--;
	}
	return (dest);
}
