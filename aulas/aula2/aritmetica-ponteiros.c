#include <stdio.h>
int main(void){

  printf("sizeof(int): %d\n", (int)sizeof(int)); // o int ocupa 4 bytes na memoria, sendo em +4 bytes o proximo int ou -4 bytes o anterior
  printf("sizeof(char): %d\n", (int)sizeof(char)); // o char ocupa somente 1 byte na memoria, sendo +1 byte o proximo char ou -1 byte o anterior
  printf("sizeof(float): %d\n", (int)sizeof(float)); // o float ocupa 4 bytes na memoria, sendo +4 bytes o proximo float ou -4 bytes o anterior
  printf("sizeof(double): %d\n", (int)sizeof(double)); // o double ocupa 8 bytes na memoria, sendo +8 bytes o proximo double ou -8 bytes o anterior
  
  int inteiro = 100;
  printf("i: %d, i+1: %d, i+20: %d\n", inteiro, inteiro+1, inteiro+20); //+1 = +4 bytes
  printf("i: %d, i-1: %d, i-20: %d\n", inteiro, inteiro-1, inteiro-20); //-1 = -4 bytes

  int *pint = &inteiro;
  printf("pint = %ul, pint+1: %ul, pint+20: %ul\n", pint, pint+1, pint+20);  
  printf("pint = %ul, pint-1: %ul, pint-20: %ul\n", pint, pint-1, pint-20);

  char *pchar = (char *)&inteiro;
  printf("pchar = %ul, pchar+1: %ul, pchar+20: %ul\n", pchar, pchar+1, pchar+20); // + 1 byte
  printf("pchar = %ul, pchar-1: %ul, pchar-20: %ul\n", pchar, pchar-1, pchar-20); // - 1 byte

/*
binario       decimal
  000             0
  001             1
  010             2
  011             3 
  100             4
  101             5
  111             7
  1000            8
  1001            9
*/

  return 0;
}