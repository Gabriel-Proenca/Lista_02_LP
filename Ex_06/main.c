#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2; 

    printf("Digite os coeficientes a, b e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Raízes: %.2lf e %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Raiz única: %.2lf\n", x1);
    } else {
        printf("Essa equação não possui raízes reais.\n");
    }

    return 0;
}
