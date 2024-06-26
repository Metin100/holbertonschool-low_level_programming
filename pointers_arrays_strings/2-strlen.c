#include "main.h"
#include <string.h>

int _strlen(char *s)
{
	int index;

	for(index = 0; s[index] != '\0'; index++)
		;

	return (index);	
}
