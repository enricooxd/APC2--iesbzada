#include <stdio.h>

// declaração de protótipos
void f1();
void f2();
void f3();

int main() {
    printf("main\n");
    f1();
    return 0;
}

// implementações
void f1() {
    printf("f1\n");
    f2();
}

void f2() {
    printf("f2\n");
    f3();
}

void f3() {
    printf("f3\n");
}
