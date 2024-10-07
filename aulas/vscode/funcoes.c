#include <stdio.h>

void imprimir5x() {
    for(int i = 1; i <= 5; i++)
        printf("*");
    printf("\n");    

}

void imprimir7x() {
    for(int i = 1; i <= 7; i++)
        printf("*");
    printf("\n");    

}

void imprimirNx(int n, char ch) {
    for(int i = 1; i <= n; i++)
        printf("%c", ch);
    printf("\n");    

}

    //qual e a utilidade de um parametro em funcoes?
    //

int main(int argc, char *argv[], char *envp[]) {

    for(int i = 0; i < argc; i++){
        printf("argv[%d]: %s\n", i, argv[i]);
    }

    printf("Variaveis de ambiente em C: \n");
    while(envp !=NULL) {
        printf("%s", *envp);
        envp++;
    }

    printf("imprimirNx: %p", imprimirNx);
    imprimirNx(5, '%');
    void (*p5x)() = imprimir5x;
    void (*pNx)(int n, char ch) = imprimirNx;
    pNx(10, '$'); 


    return 0;
}

