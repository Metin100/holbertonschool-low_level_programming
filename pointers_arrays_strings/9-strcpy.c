#include "main.h"

char *_strcpy(char *dest, char *src)
{
	  int length = 0, i;
    while (src[length] != '\0')
    {
        length++;
    }
    
    for (i = 0; i < length; i++)
    {
        dest[i] = src[i];
    }
    
    return dest;
}
