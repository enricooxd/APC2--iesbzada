#include <stdio.h>

char buffer[100] = {'5', '0', '\0'};

void exemplo1() {
    int n;
    // leitura do buffer
    sscanf(buffer, "%d", &n);
    // escrita para o buffer
    sprintf(buffer, "O número lido do buffer foi: %d\n", n);
    printf("%s", buffer);
}

int main() {
    exemplo1();
    return 0;
}