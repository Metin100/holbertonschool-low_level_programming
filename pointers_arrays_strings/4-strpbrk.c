char *_strpbrk(char *s, char *accept){
	
	while (*s == '\0')
	{
		int j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
				return (s);
			j++;	
		}
		s++;
	}

		return (s);
}
