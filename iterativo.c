#include <stdio.h>

int main() {
    int n, i, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        soma += i;
    }

    printf("Soma dos %d primeiros números naturais: %d\n", n, soma);
    return 0;
}
