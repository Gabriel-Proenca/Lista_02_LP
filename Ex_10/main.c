#include <stdio.h>
#include <math.h>

int main() {
    int num, primeiros, ultimos, soma, quadradoSoma;

    for (num = 1000; num <= 9999; num++) {
                primeiros = num / 100; 
        ultimos = num % 100;   

        soma = primeiros + ultimos;

        quadradoSoma = soma * soma;

        if (quadradoSoma == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
