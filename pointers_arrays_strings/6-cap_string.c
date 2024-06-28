#include "main.h"

char *cap_string(char *res)
{
	int i = 0;

	while (res[i])
	{
		if ((res[i] > '9' || res[i] < '0') && (res[i] < 'a' || res[i] > 'z') && (res[i] < 'A' || res[i] > 'Z'))
		{
			if ((res[i + 1] > 'a' && res[i + 1] < 'z'))
			{
				res[i + 1] -= 32;
			}
		}
	}

	return (res);
}
