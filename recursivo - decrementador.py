def decrementar(n):
    if n == 0:
        print(f"Finalizou em {n}")
    else:
        decrementar(n - 1)
      
decrementar(5)
