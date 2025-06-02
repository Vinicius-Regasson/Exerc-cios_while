#include <stdio.h>

int main() {
    float nota, soma = 0;
    int count = 0;
    printf("Digite uma nota (0-10): ");
    scanf("%f", &nota);
    while (nota >= 0 && nota <= 10) {
        soma += nota;
        count++;
        printf("Digite uma nota (0-10): ");
        scanf("%f", &nota);
    }
    if (count > 0) {
        printf("Média = %.2f\n", soma / count);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }
    return 0;
}
