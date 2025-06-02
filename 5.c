#include <stdio.h>

int main() {
    int num, digito, pares = 0, impares = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num == 0) pares++;
    while (num != 0) {
        digito = num % 10;
        if (digito % 2 == 0)
            pares++;
        else
            impares++;
        num /= 10;
    }
    printf("%d pares, %d ímpares\n", pares, impares);
    return 0;
}
