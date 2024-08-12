#include <stdio.h>

int main(void){
  int n = 1025;
  int i = 5;
  int *p;
  p = &n;
  //*p = 10;
  char *p_c;
  p_c = (char*)&n;
   printf("n: %d, *p_c: %d\n", n, *p_c);
  p_c++;
  printf("*p_c: %d\n", *p_c);
  p_c++;
  printf("*p_c: %d\n", *p_c);

  return 0;
}