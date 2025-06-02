#include <stdio.h>

int main() {
    int num, max, min;
    printf("Digite um número (0 para parar): ");
    scanf("%d", &num);
    if (num == 0) {
        printf("Nenhum número foi inserido.\n");
        return 0;
    }
    max = min = num;
    while (num != 0) {
        if (num > max) max = num;
        if (num < min) min = num;
        printf("Digite um número (0 para parar): ");
        scanf("%d", &num);
    }
    printf("Máximo = %d\n", max);
    printf("Mínimo = %d\n", min);
    return 0;
}
