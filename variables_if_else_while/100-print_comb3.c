#include <stdio.h>

int main() {
    int a[10] = {0,1,2,3,4,5,6,7,8,9};
    int b[10] = {0,1,2,3,4,5,6,7,8,9};
    
    long unsigned int i,j;
    for (i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        
        for (j = i; j < sizeof(b) / sizeof(int); j++)
        {
            if (a[i] != b[j])
            printf("%d%d, ",a[i],b[j]);
        }
    }
    return 0;
}
