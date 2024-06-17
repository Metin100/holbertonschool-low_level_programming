#include <stdio.h>

int main(void)
{
int i;
char c;
long int li;
long long int lli;
float f;
printf("Size of a char: %lu\n byte(s)",(unsigned long)sizeof(c));
printf("Size of an int: %lu\n byte(s)",(unsigned long)sizeof(i));
printf("Size of a long int: %lu\n byte(s)",(unsigned long)sizeof(li));
printf("Size of a long long int: %lu\n byte(s)",(unsigned long)sizeof(lli));
printf("Size of a float: %lu\n byte(s)",(unsigned long)sizeof(f));

return (0);
}
