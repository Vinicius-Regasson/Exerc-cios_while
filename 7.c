#include <stdio.h>

int main() {
    int n, i = 1, soma = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    while (i < n) {
        if (n % i == 0) soma += i;
        i++;
    }
    if (soma == n)
        printf("%d é perfeito\n", n);
    else
        printf("%d não é perfeito\n", n);
    return 0;
}
