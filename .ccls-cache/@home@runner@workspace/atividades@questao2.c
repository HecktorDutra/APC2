#include <stdio.h>

void manipular(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        arr[i] *= 2; // Multiplica cada elemento por 2
    }
}

int main() {
    int valores[5] = {1, 2, 3, 4, 5};
    manipular(valores, 5);
    printf("%d", valores[1]);

    valores[2] += valores[0]; // Modificando um elemento
    manipular(valores, 5);
    printf("%d\n", valores[2]);

    return 0;
}
