#include <stdio.h>

int main() {
    int n, i = 1, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

inicio:
    if (i > n) goto fim;
    soma = soma + i;
    i = i + 1;
    goto inicio;

fim:
    printf("Soma dos %d primeiros números naturais: %d\n", n, soma);
    return 0;
}
