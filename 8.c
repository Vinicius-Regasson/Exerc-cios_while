#include <stdio.h>

int main() {
    int num, invertido = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);
    while (num > 0) {
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    printf("Invertido: %d\n", invertido);
    return 0;
}
