#include <stdio.h>

int main() {
    int n, a = 0, b = 1, count = 0, temp;
    printf("Quantos termos da Fibonacci? ");
    scanf("%d", &n);
    while (count < n) {
        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
        count++;
    }
    printf("\n");
    return 0;
}
