//declaraçao de uma uniao
/*

union [nome_da_uniao] {
	tipo1 campo1;
	tipo2 campo2;
	...
	tipon campo;
};

*/  

union RGBA_Pixel {
    int pixel;
    unsigned char rgba[4];
};

#include <stdio.h>
int main(void) {
    union RGBA_Pixel pixel1;
    pixel1.pixel = 0xAAFF00CC; // vermelho

    printf("Pixel: %X\n", pixel1.pixel);
    printf("R: %d\n", pixel1.rgba[0]);
    printf("G: %d\n", pixel1.rgba[1]);
    printf("B: %d\n", pixel1.rgba[2]);
    printf("A: %d\n", pixel1.rgba[3]);
  
//Acessando atributos de união com ponteiros
  union RGBA_Pixel *ponteiro_pixel = &pixel1;

  (*ponteiro_pixel).pixel = 0x00FF0000; // vermelho

  printf("Acessando atributos de união com ponteiros: \n");
  printf("Pixel: %X\\n", (*ponteiro_pixel).pixel);
  printf("R: %d\\n", (*ponteiro_pixel).rgba[0]);
  printf("G: %d\\n", (*ponteiro_pixel).rgba[1]);
  printf("B: %d\\n", (*ponteiro_pixel).rgba[2]);
  printf("A: %d\\n", (*ponteiro_pixel).rgba[3]);

//Acessando atributos de união com ponteiros utilizando ->
  union RGBA_Pixel *ponteiro_pixel2 = &pixel1;
  ponteiro_pixel->pixel = 0x00FF0000; // vermelho
  
  printf("Acessando atributos de união com ponteiros utilizando (->): \n");
  printf("Pixel: %X\n", ponteiro_pixel->pixel);
  printf("R: %d\n", ponteiro_pixel->rgba[0]);
  printf("G: %d\n", ponteiro_pixel->rgba[1]);
  printf("B: %d\n", ponteiro_pixel->rgba[2]);
  printf("A: %d\n", ponteiro_pixel->rgba[3]);

    return 0;
}