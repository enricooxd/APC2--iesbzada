#include <stdio.h> // prinf / scanf
#include <stdlib.h> // malloc / free / realloc

int *criar_vetor(int n_elementos, int inicializacao) {
        int *vet = malloc(sizeoff(int) * n_elementos);
        if(vet ! = NULL) {
            //logica de inicializaçao do vetor
        }
        return vet;
    }


 void exibir_vetor(int n_elementos, int *vet) {

    }

int main(){
    int *dynamic_num;
    int *dynamic_vet;
    int num;
    printf("&dynamic_num: %p\n", &dynamic_num);
    printf("&dynamic_vet: %p\n", &dynamic_vet);
    printf("&num: %p\n", &num);

    dynamic_num = (int *)malloc(sizeof(int));
    *dynamic_num = 5;
    printf("dynamic_num = %d (end: %p)\n", *dynamic_num, dynamic_num);
    dynamic_vet = (int *)malloc(3*sizeof(int));  //a locaçao dinamica nao faz a locaçao sequencial
    dynamic_vet[0] = 1;
    dynamic_vet[1] = 2;
    dynamic_vet[2] = 3;
    printf("dynamic[0] = %d (end: %p)\n", dynamic_vet[0],dynamic_vet[0]);
    printf("dynamic[1] = %d (end: %p)\n", dynamic_vet[1],dynamic_vet[1]);
    printf("dynamic[2] = %d (end: %p)\n", dynamic_vet[2],dynamic_vet[2]);

    dynamic_vet = (int *)realloc(dynamic_vet, 5*sizeof(int));

return 0;
}