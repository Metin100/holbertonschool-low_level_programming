unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;

	for (; s[i]; i++)
	{
		j = 0;
		for (; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}

	return (j);
}
