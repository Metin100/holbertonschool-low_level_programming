#include "main.h"

char *leet(char *tmp)
{
	int i = 0, j;

	char c[] = {"aeotl"};

	while (tmp[i])
	{
		for (j = 0; j < sizeof(c); j++){
		
			if (j == 0 && (tmp[i] == c[j] || tmp[i] == (c[j] -= 'a' - 'A')))
			{
				tmp[i] = '4';
			}
			else if (j == 1 && (tmp[i] == c[j] || tmp[i] == (c[j] -= 'a' - 'A')))
                        {
                                tmp[i] = '3';
                        }
			else if (j == 2 && (tmp[i] == c[j] || tmp[i] == (c[j] -= 'a' - 'A')))
                        {
                                tmp[i] = '0';
                        }
			else if (j == 3 && (tmp[i] == c[j] || tmp[i] == (c[j] -= 'a' - 'A')))
                        {
                                tmp[i] = '7';
                        }
			else if (j == 4 && (tmp[i] == c[j] || tmp[i] == (c[j] -= 'a' - 'A')))
                        {
                                tmp[i] = '1';
                        }
		}
		i++:
	}

	return (tmp);
}
