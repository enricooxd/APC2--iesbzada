#include <stdio.h>
#include <ctype.h>
#include <math.h>

// a) Função que devolve o valor absoluto de um número
// Retorna o valor absoluto de x. Se x for negativo, retorna -x; caso contrário, retorna x.
int abs(int x) {
    return x < 0 ? -x : x;
}

// b) Função que verifica se um caractere é uma vogal (maiúscula ou minúscula)
// Converte o caractere para minúscula e verifica se é uma das vogais 'a', 'e', 'i', 'o' ou 'u'.
// Retorna 1 se for vogal, 0 caso contrário.
int eVogal(char ch) {
    ch = tolower(ch);  // Converte para minúscula para simplificar a verificação
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

// c) Função que verifica se x é o quadrado de y
// Compara x com y ao quadrado. Retorna 1 se x for igual a y^2, 0 caso contrário.
int eQuadrado(int x, int y) {
    return x == y * y;
}

// d) Função que converte horas para segundos
// Multiplica o número de horas por 3600 para obter o equivalente em segundos.
double obterSegundos(double horas) {
    return horas * 3600.0;
}

// e) Função que converte horas para o formato especificado ('h', 'm', 's')
// 'h' ou 'H' retorna o valor em horas, 'm' ou 'M' converte horas para minutos, e 's' ou 'S' para segundos.
// Retorna -1 para formato inválido.
double converterHoras(double horas, char formato) {
    switch (formato) {
        case 'h': case 'H':  // Retorna o valor em horas
            return horas;
        case 'm': case 'M':  // Converte horas para minutos
            return horas * 60.0;
        case 's': case 'S':  // Converte horas para segundos
            return horas * 3600.0;
        default:
            return -1.0;  // Retorna -1 para formato inválido
    }
}

// f) Função que calcula e exibe a média de um vetor
// Soma todos os elementos de vet e divide pelo número de elementos n para calcular a média.
void exibirMedia(int n, int *vet) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += vet[i];
    }
    double media = (double)soma / n;
    printf("Média: %.1f\n", media);
}

// g) Função que busca um valor em um vetor e retorna seu índice
// Percorre o vetor procurando o valor busca. Retorna o índice onde o valor foi encontrado, ou -1 se não encontrado.
int buscarValor(int n, int *vetor, int busca) {
    for (int i = 0; i < n; i++) {
        if (vetor[i] == busca) {
            return i;
        }
    }
    return -1;  // Retorna -1 se o valor não foi encontrado
}

// h) Função que eleva o valor apontado por x à potência y
// Calcula (*x)^y através de multiplicações sucessivas e armazena o resultado em *x.
void potencia(int *x, int y) {
    int resultado = 1;
    for (int i = 0; i < y; i++) {
        resultado *= *x;
    }
    *x = resultado;
}

// i) Função que preenche uma matriz m x n com valores fornecidos pelo usuário
// Pede ao usuário para inserir valores para cada posição da matriz.
void preencherMatriz(int m, int n, int matriz[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// j) Função que troca dois números utilizando seus endereços
// Armazena o valor de *a em uma variável temporária, depois atribui *b a *a e o valor temporário a *b.
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Testes para cada função

    // Teste para função abs
    printf("abs(-5) = %d\n", abs(-5));
    printf("abs(5) = %d\n", abs(5));

    // Teste para função eVogal
    printf("eVogal('o') = %d\n", eVogal('o'));  // Deve retornar 1
    printf("eVogal('L') = %d\n", eVogal('L'));  // Deve retornar 0

    // Teste para função eQuadrado
    printf("eQuadrado(9, 3) = %d\n", eQuadrado(9, 3));  // Deve retornar 1
    printf("eQuadrado(3, 9) = %d\n", eQuadrado(3, 9));  // Deve retornar 0

    // Teste para função obterSegundos
    printf("obterSegundos(0) = %.0f\n", obterSegundos(0));    // Deve retornar 0
    printf("obterSegundos(1) = %.0f\n", obterSegundos(1));    // Deve retornar 3600
    printf("obterSegundos(2) = %.0f\n", obterSegundos(2));    // Deve retornar 7200

    // Teste para função converterHoras
    printf("converterHoras(3, 'H') = %.0f\n", converterHoras(3, 'H'));  // Deve retornar 3
    printf("converterHoras(3, 'm') = %.0f\n", converterHoras(3, 'm'));  // Deve retornar 180
    printf("converterHoras(3, 'S') = %.0f\n", converterHoras(3, 'S'));  // Deve retornar 10800
    printf("converterHoras(3, 'x') = %.0f\n", converterHoras(3, 'x'));  // Deve retornar -1

    // Teste para função exibirMedia
    int vet[] = {5, 7, 9};
    exibirMedia(3, vet);  // Deve exibir "Média: 7.0"

    // Teste para função buscarValor
    int index = buscarValor(3, vet, 7);  // Deve retornar 1, pois 7 está na posição 1 do vetor
    printf("Índice do valor 7: %d\n", index);

    // Teste para função potencia
    int num = 5;
    potencia(&num, 2);  // Deve elevar 5 ao quadrado e fazer num igual a 25
    printf("5 ao quadrado é: %d\n", num);

    // Teste para função preencherMatriz
    int matriz[2][2];
    preencherMatriz(2, 2, matriz);  // Preenche uma matriz 2x2 com valores fornecidos pelo usuário

    // Teste para função trocar
    int a = 10, b = 20;
    trocar(&a, &b);  // Deve trocar os valores de a e b
    printf("Após troca, a = %d, b = %d\n", a, b);

    return 0;
}
