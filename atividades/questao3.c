#include <stdio.h>

void calcular(int *a, int *b) {
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

int main() {
    int x = 4, y = 6;
    calcular(&x, &y);
    printf("%d %d", x, y);

    calcular(&y, &x);
    printf(" %d %d", x, y);

    return 0;
}
