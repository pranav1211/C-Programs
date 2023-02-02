#include <stdio.h>
int main()
{
    int i;
    float rae;
    printf("enter the range you want : ");
    scanf("%f",&rae);
    float sum;

    for(i=1;i<=rae;i++)
    {
        sum = sum + ((float)1/i);

    }
    printf("sum :%.2f ",sum);
}
