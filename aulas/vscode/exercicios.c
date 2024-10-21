#include <stdio.h>

int main(){

    int abs(int n);
        //entrada de dados
        int modulo = abs(-5);

        //saida de dados
        printf("modulo -5: %d\n", modulo);

        //entrada: n, pertence Z (inteiro)
        //         -5    0   -5
        //<---------|----|----|----------->   
        //          |<-->|<-->|
        //            5     5


    int mod(int n) {
    return(n < 0) ? -n : n;
}

    int is_digit(char c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

    void exibir_horas(int ms){
    int horas = ms / 3600000;
    ms %= 3600000;
    int minutos = ms / 60000;
    ms %= 60000;
    int segundos= ms / 1000;
    ms %= 1000;

    printf("%02d:%02d:%02d:%03d\n", horas, minutos, segundos, ms);

}

    //retornar modulo do numero
    printf("modulo de -5 = %d\n", mod(-5));
    printf("modulo de 3 = %d\n", mod(3));

    //testando se é um digito ou nao
    printf("8 eh digito? %d\n", is_digit('8'));
    printf("eh digito? %d\n", is_digit('%'));

    //exibindo horas

    printf("em milissegundos: 36610000\n");
    printf("em horas: ");
    exibir_horas(36610000);

return 0;
}


