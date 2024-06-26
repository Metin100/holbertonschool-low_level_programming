#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{       
        char *begin , *end = s;
        
        int i,len;

        for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
        {
                end++;
        }

        begin = s;
        len = i+1;

        for (i = 0; i < len/2; i++)
        {
                char tmp = *end;
                *begin = *end;
                *end = tmp;
                begin++;
                end--;
        }
}
