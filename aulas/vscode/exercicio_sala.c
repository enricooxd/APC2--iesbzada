#include <stdio.h>

// leitura
void exemplo1() {
    FILE *input;
    char nome[50];  // Para armazenar o nome do aluno
    float nota1, nota2, media;

    // Abertura do arquivo para leitura
    input = fopen("./data/notas.txt", "r");
    if (!input) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }

    // Leitura do arquivo e cálculo da média das notas de cada aluno
    while (fscanf(input, "%s %f %f", nome, &nota1, &nota2) == 3) {
        media = (nota1 + nota2) / 2.0;  // Calcula a média
        printf("Aluno: %s | Nota 1: %.2f | Nota 2: %.2f | Média: %.2f\n", nome, nota1, nota2, media);
    }

    // Fechando o arquivo
    fclose(input);
}

// escrita
void exemplo2(int m, int n, float notas[m][n]) {
    FILE *out;

    // Abertura do arquivo para escrita
    out = fopen("./data/file.txt", "w");
    if (!out) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }

    // Escrevendo as notas no arquivo
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            fprintf(out, "%.2f", notas[i][j]);  // Escreve a nota
            if (j < n - 1)  // Se não for a última nota, insere uma tabulação
                fprintf(out, "\t");
        }
        fprintf(out, "\n");  // Nova linha após cada aluno
    }

    // Fechando o arquivo
    fclose(out);
}

int main() {
    // Matriz de notas (4 alunos com 2 notas cada)
    float notas[4][2] = {
        {7, 8},
        {4, 3},
        {9, 9.5},
        {3, 7}
    };

    // Chama a função para salvar as notas no arquivo
    exemplo2(4, 2, notas);

    // Chama a função de leitura para exibir as médias
    exemplo1();

    return 0;
}
