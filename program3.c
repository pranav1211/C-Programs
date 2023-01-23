#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    float root1,root2;
    float realvar,imagvar,sqt;
    
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);


    sqt=(b*b)-(4*a*c);
    
    //if the roots are real and different
    if(sqt>0)
    {
        printf("Roots are real and distinct\n");
        root1=(-b+sqrt(sqt))/(2*a);
        root2=(-b-sqrt(sqt))/(2*a);
        printf("Root1 = %.2f and Root2 = %.2f",root1,root2);
    }
    
    //if the roots are real and equal
    else if(sqt==0)
    {
        printf("Roots are real and equal\n");
        root1=-b/(2*a);
        root2=root1;
        printf("Root1 = %.2f and Root2 = %.2f",root1,root2);
    }
    
    // if roots are not real
    else 
    {
        printf("Roots are imaginary\n");
        realvar = -b / (2 * a);
        imagvar = sqrt(-sqt) / (2 * a);
        printf("Root1 = %.2f+%.2fi and Root2 = %.2f-%.2fi", realvar,
        imagvar, realvar, imagvar);
     }

    return 0;
}
