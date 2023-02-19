#include <stdio.h>

void main()
{
   int arr[10][10], t[10][10];
   
   int i,j,r,c;
   
   printf("enter rows and columns : ");
    scanf("%d%d",&r,&c);
   
   printf("enter the elements of the array");
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("enter element a%d%d : ",i+1,j+1);
           scanf("%d",&arr[i][j]);
       }
   }    
   
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           printf("%d ",arr[i][j]);
       }printf("\n");
   }
   
   
   for(i=0;i<r;i++)
   {
       for(j=0;j<c;j++)
       {
           t[j][i] = arr[i][j];
       }
   }
   printf("\n\n\n");
   for(i=0;i<c;i++)
   {
       for(j=0;j<r;j++)
       {
           printf("%d ",t[i][j]);
       }printf("\n");
   }
   
   printf("\n\n\n");
   
   
   
}
