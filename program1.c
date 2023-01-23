#include <math.h>
#include <stdio.h>

int main() {
  int x1, x2, y1, y2;
  float dist;

  printf("Enter the x and y coordinates of first point\n");

  scanf("%d%d", &x1, &y1);

  printf("Enter the x and y coordinates of second point\n");

  scanf("%d%d", &x2, &y2);

  dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

  printf("The distance between given two points=%f", dist);

  return (0);
}
