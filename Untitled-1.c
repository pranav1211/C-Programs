#include <stdio.h>
void main()
{
    int i, j,n,k;
    int a=32;
    for (i = 1; i <= 5; i++)
    {
        for(n=4;n>=i;n--)
            printf("%c",a);
            
            
        for (j = 1; j <=i; j++)
            printf("%d", j);
            
            
        for(k=j-2;k>0;k--)
            printf("%d",k);
            
            
        printf("\n");
        
    }
}