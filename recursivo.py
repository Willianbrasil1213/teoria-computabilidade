def soma_n(n):
    if n == 0:
        return 0
    return n + soma_n(n - 1)

n = int(input("Digite um número: "))
print("Soma dos", n, "primeiros números naturais:", soma_n(n))
