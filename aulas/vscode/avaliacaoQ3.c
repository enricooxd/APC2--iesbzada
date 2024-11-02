#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// a) Função para criar um array de inteiros alocado dinamicamente na Heap
// Recebe o tamanho do array e aloca memória para armazenar inteiros
// Retorna o ponteiro para o array alocado
int *build_int_array(unsigned int size) {
    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Erro ao alocar memória.\n");
        return NULL;
    }
    return array;
}

// b) Função para calcular a média das notas de cada aluno
// Recebe o número de alunos (m), o número de notas por aluno (n) e a matriz das notas
// Retorna um array alocado dinamicamente contendo a média de notas de cada aluno
float *medias_das_notas(int m, int n, float matriz[m][n]) {
    float *medias = (float *)malloc(m * sizeof(float));
    if (medias == NULL) {
        printf("Erro ao alocar memória.\n");
        return NULL;
    }
    for (int i = 0; i < m; i++) {
        float soma = 0;
        for (int j = 0; j < n; j++) {
            soma += matriz[i][j];
        }
        medias[i] = soma / n;  // Calcula a média de notas do aluno i
    }
    return medias;
}

// c) Função que repete uma string n vezes
// Recebe uma string de entrada (str) e um número n
// Retorna uma nova string alocada dinamicamente com n repetições de str
char *repete_string(char str[], int n) {
    int len = strlen(str);
    char *result = (char *)malloc((len * n + 1) * sizeof(char));
    if (result == NULL) {
        printf("Erro ao alocar memória.\n");
        return NULL;
    }
    result[0] = '\0';  // Inicializa a string com uma string vazia
    for (int i = 0; i < n; i++) {
        strcat(result, str);  // Concatena str no result n vezes
    }
    return result;
}

int main() {
    // Teste para build_int_array
    unsigned int size = 5;
    int *array = build_int_array(size);
    if (array != NULL) {
        for (unsigned int i = 0; i < size; i++) {
            array[i] = i + 1;  // Preenche o array com valores 1, 2, 3, ...
            printf("%d ", array[i]);
        }
        printf("\n");
        free(array);  // Libera a memória alocada
    }

    // Teste para medias_das_notas
    int m = 3, n = 2;
    float matriz[3][2] = {
        {5, 7},
        {8, 7},
        {6, 10}
    };
    float *medias = medias_das_notas(m, n, matriz);
    if (medias != NULL) {
        for (int i = 0; i < m; i++) {
            printf("Média do aluno %d: %.1f\n", i, medias[i]);
        }
        free(medias);  // Libera a memória alocada
    }

    // Teste para repete_string
    char str[] = "Ana";
    int repeticoes = 3;
    char *resultado = repete_string(str, repeticoes);
    if (resultado != NULL) {
        printf("String repetida: %s\n", resultado);
        free(resultado);  // Libera a memória alocada
    }

    return 0;
}
