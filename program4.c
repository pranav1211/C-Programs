#include<stdio.h>
int main()
{
    int m,n,sum;
    printf("enter 2 numbers M and N :\n");
    printf("M:");
    scanf("%d",&m);
    printf("N:");
    scanf("%d",&n);

   while(m<=n)
    {
        if(m%2==0)
        {
            sum=sum+m;
            
        }m++;
    }
    printf("%d",sum);
    
    return 0; 
}
