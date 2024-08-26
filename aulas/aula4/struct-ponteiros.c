#include <stdio.h>

struct Pessoa {
  char nome[100];      // 100 bytes
  int idade;           //   4 bytes
  char genero; // M, F //   1 byte
};

int main(void) {
  struct Pessoa pessoa1 = {"João", 30, 'M'};
  //struct Pessoa pessoa1 = {.nome = "João", .idade = 30, .genero = 'M'};

  struct Pessoa *p_pessoa;
  p_pessoa = &pessoa1;
  //(*p_pessoa).genero;
  printf("Acessando dados de pessoa1 com ponteiro:\n");
  printf("Nome: %s\n", pessoa1.nome);
  printf("Idade: %d\n", pessoa1.idade);
  printf("Gênero: %c\n", pessoa1.genero);

  printf("Acessando dados de pessoa1 com ponteiro utilizando ->:\n");
  printf("Nome: %s\n", p_pessoa->nome);
  printf("Idade: %d\n", p_pessoa->idade);
  printf("Gênero: %c\n", p_pessoa->genero);

  return 0;

  struct Pessoa pessoa2;
  // pessoa2 = {.nome = "Maria", .idade = 19, .genero = 'F'};
  // Obtenha do console o nome, a idade e o gênero da pessoa 2.
  // sscanf("Maria Clara\n", "%10[^\n]", pessoa2.nome);
  printf("Introduza o nome: ");
  scanf("%99[^\n]%*c", pessoa2.nome);
  // sscanf("18", "%d", &pessoa2.idade);
  // sscanf("F", "%c", &pessoa2.genero);
  printf("Introduza o gênero: ");
  scanf(" %c", &pessoa2.genero);
  printf("Introduza a idade: ");
  scanf("%d%*c", &pessoa2.idade);
  // getchar();

  // Em seguida exiba esses dados de volta pro console.
  printf("Nome: %s\n", pessoa2.nome);
  printf("Idade: %d\n", pessoa2.idade);
  printf("Gênero: %c\n", pessoa2.genero);

  return 0;
}