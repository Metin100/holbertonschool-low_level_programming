char *_strchr(char *s, char c)
{
	int i = 0;
	
	for (; s[i]; i++)
	{
		if (s[i] != c)
		{
			continue;
		}
		else 
		{
			int j = 0;
			for (; s[i]; i++)
			{
				s[j] = s[i];
			}
			break;
		}
	}

	return (s);

}
