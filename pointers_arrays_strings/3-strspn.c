/**
*_strspn - search the number of bytes in the initial
*segment of s which consist only of bytes from accept
*@s:reference bytes container
*@accept: reference bytes container
*
*Return: returns the number of bytes in the initial
*segment of s which consist only of bytes from accept
*/

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

	return (i);
}
