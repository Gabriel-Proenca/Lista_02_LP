#include <stdio.h>

int main() {
    int X;       
    float Y, consumoMedio;

    printf("Digite a distância total percorrida (em Km): ");
    scanf("%d", &X);
    printf("Digite o total de combustível gasto (em litros): ");
    scanf("%f", &Y);

    consumoMedio = X / Y;

    printf("Consumo médio: %.1f km/l\n", consumoMedio);

    return 0;
}
