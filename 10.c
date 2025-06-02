#include <stdio.h>

int main() {
    int n, binario[32], i = 0;
    printf("Digite um número decimal: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("Binário: 0\n");
        return 0;
    }
    while (n > 0) {
        binario[i++] = n % 2;
        n /= 2;
    }
    printf("Binário: ");
    while (i--) {
        printf("%d", binario[i]);
    }
    printf("\n");
    return 0;
}
