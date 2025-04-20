def fatorial_iterativo(n):
    resultado = 1
    while n > 0:
        resultado *= n
        n -= 1
    return resultado

print(fatorial_iterativo(5))
