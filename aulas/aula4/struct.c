#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    int idade;
    char genero; // M, F
};



int main() {
    struct Pessoa pessoa1 = {"João", 30, 'M'};
//struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};

    printf("Pessoa 1\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);
    printf("Gênero: %c\n", pessoa1.genero);

  struct Pessoa pessoa2;
  //pessoa2 = {.nome = "Maria", .idade = 19, .genero = 'F'};
  printf("Digite o nome da pessoa 2: ");
    int deu_certo = scanf("%[^\n]s", pessoa2.nome);
  
  printf("Digite a idade da pessoa 2: ");
    scanf("%d", &pessoa2.idade);

  printf("Digite o gênero da pessoa 2 (M/F): ");
    scanf("%s", &pessoa2.genero);

  printf("Pessoa 2\n");
  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Gênero: %c\n", pessoa2.genero);

    return 0;
}
