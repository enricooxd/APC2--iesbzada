#include <stdio.h>

int main () {
  int i = 5;
  int *p; 
  p = &i;
  printf("p = %p\n", &p);
  printf("p (&i - endereco de i): %p\n", p);
  printf("*p (i - valor de i): %d\n" , *p);
    printf("entre com o novo valor de i: ");
    int deu_certo = scanf("%d", p);
  printf("*p (i - valor de i): %d\n" , *p);
  return 0; 

  //* entra no endereço de i(entra no ponteiro)
  //& entra no endereço de p
}