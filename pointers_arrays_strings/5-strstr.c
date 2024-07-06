#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			while (needle)
			{
				if (*haystack != *needle)
				{
					break;
				}
				needle++;
			}
			if (*needle == '\0')
			{
				return (needle + haystack);
			}
		}
		haystack++;
	}
	return (NULL);
}
