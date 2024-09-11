#include <stdio.h>

int main() {
    int Joao, Maria, soma;

    printf("Digite o número de dedos de João: ");
    scanf("%d", &Joao);
    printf("Digite o número de dedos de Maria: ");
    scanf("%d", &Maria);

    soma = Joao + Maria;

    if (soma % 2 == 0) {
        printf("par\n");
    } else {
        printf("ímpar\n");
    }

    return 0;
}
