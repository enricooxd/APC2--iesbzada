#include <stdio.h>

int main() {
int n1 = 3, n2 =5;
int *p1, *p2;
  p1 = &n1;
  p2 = &n2;
  printf("Antes: ");
printf("n1: %d, n2: %d\n", n1, n2);

  *p1 = *p1 + *p2;
  *p2 = *p1 - *p2;
  *p1 = *p1 - *p2;
printf("Depois: ");
  printf("n1: %d, n2: %d\n", n1, n2);
  return 0;
}