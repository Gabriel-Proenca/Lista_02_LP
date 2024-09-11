#include <stdio.h>

int main() {
    int numeros[20];
    int i;
    int pares = 0, impares = 0;
    float pPar, pImpar;

    printf("Digite 20 números inteiros:\n");
    for (i = 0; i < 20; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 20; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    pPar = (pares / 20.0) * 100;
    pImpar = (impares / 20.0) * 100;

    printf("Quantidade de números pares: %d\n", pares);
    printf("Percentual de números pares: %.2f%%\n", pPar);
    printf("Quantidade de números ímpares: %d\n", impares);
    printf("Percentual de números ímpares: %.2f%%\n", pImpar);

    return 0;
}
