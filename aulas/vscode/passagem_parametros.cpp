#include <stdio.h>

void add_valor(int n1, int n2) {
    n1 = n1 + n2;
}

void add_ref(int &n1, int n2) {
    n1 = n1 + n2;
}

void add_ponteiro(int *n1, int n2) {
    n1 = n1 + n2;
}


int main() {

    int n = 5;
    int &ref = n; //referencia a n
                  // - compartilha o mesmo end de n
    int *p = &n;  // ponteiro para n
                  // - possui enredeço proprio e aponta para end

    ref = 10;
    printf("n: %d (&n:%p, &ref: %p, &p: %p)\n", n, &n, &ref, &p);
    *p = 15;
    printf("n: %d (&n:%p, &ref: %p, &p: %p)\n", n, &n, &ref, &p);

    int x = 3, y = 5;

    add_valor(x, y);
    // int n1 = x, n2 = y;
    // n1 = n1 + n2; // n1: 8, n2: 5;
    printf("x: %d, y: %d\n", x, y); // x: 3, y: 5;

    add_ref(x, y);
    // int &n1 = x, n2 = y;
    // n1 = n1 + n2;
    printf("x: %d, y: %d\n", x, y);

    return 0;
}