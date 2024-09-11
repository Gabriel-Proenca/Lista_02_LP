#include <stdio.h>
#include <math.h> 

int main() {
    float c1, c2, h;

    // Entrada dos valores dos catetos
    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &c1);
    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &c2);

    h = sqrt((c1 * c1) + (c2 * c2));

    printf("O valor da hipotenusa é: %.2f\n", h);

    return 0;
}
