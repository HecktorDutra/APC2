#include <stdio.h>

void incrementa(int *a) {
    (*a)++;
}

void processa(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        incrementa(&arr[i]);
    }
}

int main() {
    int dados[3] = {0, 1, 2};
    processa(dados, 3);

    int *ptr = dados + 1;
    incrementa(ptr);
 
    printf("%d %d %d\n", dados[0], dados[1], dados[2]);

    return 0;
}
