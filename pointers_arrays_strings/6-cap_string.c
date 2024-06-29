#include "main.h"

/**
*cap_string - capitalizes all words in a string
*@s: string to capitalize
*
*Return: address of s
*/


char *cap_string(char *res)
{
	int i = 0, j;
	char c[] = {" \t\n,;.!?\"(){}"};

	while (res[i])
	{
		if (res[i] >= 'a' && res[i] <= 'z')
		{
			if (i == 0)
			{
				res[i] -= 'a' - 'A';
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (c[j] == res[i - 1])
					{
						res[i] -= 'a' - 'A';
						break;
					}
				}
			}
		}
		i++;
	}

	return (res);
}
