#include <stdio.h>
void main()
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        printf("Pass %d-", i);
        for (j = 0; j < 6; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}