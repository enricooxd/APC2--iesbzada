//RELAÇÃO DE PONTEIRO E VETOR E COMO A MANIPULAÇÃO É POSSÍVEL EM AMBOS GERANDO RESULTADOS IGUAIS
#include <stdio.h>

int main(void){
  int vet[10] = {3,5,6,2,8,9,1,5,0,7};
  int mat [5][5];
  printf("Representação do vetor: \n");
  printf("&vet[0]: %p, vet: %d\n", &vet[0], vet[0]);
  printf("&vet[0]: %p, vet: %d\n", &vet[1], vet[1]);
  printf("&vet[0]: %p, vet: %d\n", &vet[2], vet[2]);

  printf("\nRepresentação de ponteiro: \n");
  printf("vet: %p,  *vet: %d\n", vet, *vet);
  printf("vet+1: %p,  *(vet+1): %d\n", vet+1, *(vet+1));
  printf("vet+2: %p,  *(vet+2): %d\n", vet+2, *(vet+2));

  return 0;
}
/*
  Diferença de *vet+1 para *(vet+1):
O primeiro ele chega ao endereço e depois soma, no exemplo acima o resultado seria 4, já o  *(vet+1) pularia o endereço e depois é lido, no exemplo acima seria o valor 5 no vetor

Situação 1:

  int *p = vet; // p = &vet[0];
    printf("Representação de vetor: \n");
    printf("&p[0]: %p, p[0]: %d\n", &p[0], p[0]);
    printf("&p[1]: %p, p[1]: %d\n", &p[1], p[1]);
    printf("&p[2]: %p, p[2]: %d\n", &p[2], p[2]);
  printf("Representação de ponteiro:\n");
    printf("p: %p, *p: %d\n", p, *p); // vet[0]
    printf("p+1: %p, *(p+1): %d\n", p+1, *(p+1)); //   vet[1]
    printf("p+2: %p, *(p+2): %d\n", p, *(p+2)); //      vet[2]

R: Nesta situação, foi criado um ponteiro que aponta para os índices do vetor, a partir do índice 0. Então neste caso os valores apontados são dos índices 0, 1 e 2, que são respectivamente 3, 5 e 6.

Situação 2:

 int *p2 = &vet[5];
  printf("Representação de vetor: \n");
  printf("&p2[0]: %p, p2[0]: %d\n", &p2[0], p2[0]);
  printf("&p2[1]: %p, p2[1]: %d\n", &p2[1], p2[1]);
  printf("&p2[2]: %p, p2[2]: %d\n", &p2[2], p2[2]);
  printf("Representação de ponteiro:\n");
  printf("p2: %p, *p: %d\n", p2, *p2);
  printf("p2+1: %p, *(p2+1): %d\n", p2+1, *(p2+1));
  printf("p2+2: %p, *(p2+2): %d\n", p2, *(p2+2));

R: Neste caso, foi criado um ponteiro que aponta para os índices do vetor novamente, porém a partir do 5º índice. Então os índices apontados são o 5º, 6º e 7º, que são respectivamente: 9, 1 e 5.

*/