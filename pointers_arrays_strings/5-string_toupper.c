#include "main.h"

/**
*string_toupper - changes all lowercase letters to uppercase
*@str: string to be changed
*
*Return: address to the string
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			str[i] -= 32;

		i++;
	}
	return (str);
}
