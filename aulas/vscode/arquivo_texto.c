#include <stdio.h>

void exemplo1_escrita() {
    FILE *out;
    out = fopen("./data/texto.txt", "w");
    if(out == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // escrita no console:
    fprintf(out, "Imprime uma linha no arquivo.\n");
    fprintf(out, "Imprime a segunda linha.\n");

    fclose(out);
}

void exemplo2_escrita() {
    FILE *out;
    out = fopen("./data/texto.txt", "w");
    if(out == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    FILE *tmp = stdout;
    stdout = out;
    // escrita no console:
    printf("Imprime uma linha no arquivo.\n");
    printf("Imprime a segunda linha.\n");

    fclose(out);
    stdout = tmp;
}

void exemplo3_leitura() {
    FILE *in;
    in = fopen("./data/texto.txt", "r");
    if(in == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // logica de leitura
    int n;
    // algoritmo, ler dado do arquivo e exibir no console.
    int i = 1;
    while(!feof(in)) {
        fscanf(in, "%d\n", &n);
        printf("linha %d: %d\n", i, n);
        i++;
    }

    fclose(in);
}

void padrao_de_escrita_de_arquivos() {
    // abertura
    FILE *fp = fopen("./caminho_abertura", "r|w");
    if(fp == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo!\n");
        return;
    }
    // fazer operações de leitura (w) / escrita (r)

    // fecha arquivo
    fclose(fp);
}

int main() {
    exemplo3_leitura();
    return 0;
}