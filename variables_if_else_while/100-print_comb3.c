#include <stdio.h>

int main() {
    char a[10] = {"0123456789"};
    char b[10] = {"0123456789"};
    
    long unsigned int i,j;
    for (i = 0; i < sizeof(a); i++)
    {
        
        for (j = i; j < sizeof(b); j++)
        {

            if (a[i] != b[j])
	    {
		putchar(a[i]);
		putchar(b[j]);
		if (i < 8)
		{
			putchar(',');
			putchar(' ');
		}
	    }
	   
	}
    }
    putchar('\n');
    return 0;
}
