#include "main.h"
#include <stdio.h>

/**
 * main - prints _putchar, followed by a new line
 * Return: Always 0 (Succcess)
 */

int main(void)
{
    char str[] = "_putchar";
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');

    return 0;
}

