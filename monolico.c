#include <stdio.h>

int main() {
    int n = 5, resultado = 1;

inicio:
    if (n == 0) goto fim;
    resultado *= n;
    n--;
    goto inicio;

fim:
    printf("Fatorial: %d\n", resultado);
    return 0;
}
