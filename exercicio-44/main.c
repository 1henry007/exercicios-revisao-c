#include <stdio.h>

int main() {
    int num1, num2, n;
    int contador = 0, i = 1;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite a quantidade de multiplos simultaneos que deseja: ");
    scanf("%d", &n);

    printf("Os primeiros %d multiplos simultaneos de %d e %d sao:\n", n, num1, num2);

    while (contador < n) {
        if (i % num1 == 0 && i % num2 == 0) {
            printf("%d ", i);
            contador++;
        }
        i++;
    }

    printf("\n");

    return 0;
}
