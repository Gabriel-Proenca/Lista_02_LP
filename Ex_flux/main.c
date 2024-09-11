#include <stdio.h>

int main() {
    int N;
    float resultado;

    printf("Digite um número: ");
    scanf("%d", &N);

    if (N > 100) {
        resultado = N / 2.0;
        printf("A metade do número é: %.2f\n", resultado);
    } else {
        resultado = N * 2.0;
        printf("O dobro do número é: %.2f\n", resultado);
    }

    return 0;
}
