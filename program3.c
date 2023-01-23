#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float root1,root2;
    float realvar,imagvar,sqt;
    
    printf("Enter coefficients:\n");
    
    printf("a:");
    scanf("%f",&a);
    
    printf("b:");
    scanf("%f",&b);
    
    printf("c:");
    scanf("%f",&c);

    sqt=(b*b)-(4*a*c);
    
    //if the roots are real and different
    if(sqt>0)
    {
        root1=(-b+sqrt(sqt))/(2*a);
        root2=(-b-sqrt(sqt))/(2*a);
        printf("Root1 = %.2f and Root2 = %.2f",root1,root2);
    }
    
    //if the roots are real and equal
    else if(sqt==0)
    {
        printf("Roots are real and equal\n");
        root1=-b/(2*a);
        root1=root2;
        printf("Root1 = %.2f and Root2 = %.2f",root1,root2);
    }
    
    // if roots are not real
    else 
    {
        realvar = -b / (2 * a);
        imagvar = sqrt(-sqt) / (2 * a);
        printf("Root1 = %.2f+%.2fi and Root2 = %.2f-%.2fi", realvar,
        imagvar, realvar, imagvar);
     }

    return 0;
}
