//declaração de estruturas
/*  struct [nome_da_estrutura] {
    tipo1$ campo1, campo2;
    ...
    tipon campo;
  };
*/

//fragmentação de memoria
struct Pessoa {
  char nome[100];       // 100 bytes
  int idade;            //   4 bytes
  char genero; // M, F  //   1 byte
  char byte1, byte2;    //   2 bytes
  char byte3, byte4;    //   2 bytes
};                      // 109 bytes


#include <stdio.h> 
int main(void){
  printf("sizeof(struct Pessoa): %d\n",(int)sizeof(struct Pessoa));
  
  return 0;
}