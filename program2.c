#include <stdio.h>


int main() {
  int a;
  int b;
  int c;
  printf("enter 3 numbers");
  scanf("%d%d%d", &a, &b, &c);

  if (a <= b && a <= c)
    printf("a: %d is smallest\n", a);
  else if (b <= a && b <= c)
    printf("b: %d is smallest\n", b);
  else
    printf("c: %d is smallest\n", c);
  return 0;

  return 0; 
}
 
