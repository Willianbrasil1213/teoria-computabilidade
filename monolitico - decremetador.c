#include <stdio.h>

int main() {
    int n = 5;

inicio:
    if (n == 0) goto fim;
    n--;
    goto inicio;

fim:
    printf("Finalizou em %d", n);
    return 0;
}
