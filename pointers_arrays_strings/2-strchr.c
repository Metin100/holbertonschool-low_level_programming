char *_strchr(char *s, char c)
{
	int i = 0, j = 0;
	
	for (; s[i] != c; i++)
		;

	for (; s[i]; i++)
	{
		return (s[i]);
	}	
}
