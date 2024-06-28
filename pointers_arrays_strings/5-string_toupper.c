#include "main.h"

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < 'z' && str[i] > 'a')
		{
			*str[i] = *str[i] - 32;
		}
	}
	return (str);
}
