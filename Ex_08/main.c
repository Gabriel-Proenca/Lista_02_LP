#include <stdio.h>

int main() {
    int n, i;
    int soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Número deve ser maior que zero.\n");
        return 1;
    }

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    if (soma == n) {
        printf("%d é um número perfeito.\n", n);
    } else {
        printf("%d não é um número perfeito.\n", n);
    }

    return 0;
}
