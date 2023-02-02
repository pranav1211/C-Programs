#include <stdio.h>

int main()
{
    int i,n,n1;
    printf("enter 2 Numbers : ");

    scanf("%d%d",&n,&n1);
    int divis;

    if(n>=n1)
        for(i=1;i<=n1;i++)
                if(n%i==0&&n1%i==0)
                    divis=i;
                    
    if(n<=n1)
        for(i=1;i<=n1;i++)
                if(n%i==0&&n1%i==0)
                    divis=i;
          

    printf("GCD : %d",divis);

}
