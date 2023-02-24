#include <stdio.h>

void main() {
    int book[] = {123,153,189,199,206,254,298,356,399,400,5063,6548,10034};
   
    int mid,sta,end,num;
    int found = -1;
   
    printf("enter id to be searched : ");
    scanf("%d",&num);
   
    int a = (sizeof(book))/4;
   
    sta = 0;
    end = a-1;
   
    while(sta<=end)
    {
        mid = (sta+end)/2;
        if (book[mid]==num)
        {
            printf("the book of id = %d ,has been found at %d position",book[mid],mid+1);
            found = 1;
            break;
        }
        if(book[mid]>num)
            end=mid-1;
        else
            sta=mid+1;
    }
   
    if(found==-1)
        {
            printf(" the book of id %d has not been found",num);
        }
} 
