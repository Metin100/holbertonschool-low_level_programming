#include <stdio.h>

int main (void)
{
	char l = 'a' , u = 'A';
	while (l <= 'z') {
		putchar(l);
		l += 1;
	}
	putchar('\n');
     	while (l <= 'z'){
                putchar(l);
                l += 1;
        }
	return (0);
}
