# README

Este repositório contém exemplos de código para calcular o **fatorial** e realizar **decrementos** de três formas distintas: **iterativa**, **recursiva** e **usando `goto`**. O objetivo é mostrar as diferenças na estrutura interna e no controle de fluxo entre essas abordagens.

## Fatorial

São apresentadas três abordagens para calcular o fatorial de um número:

1. **Iterativo (C e Python)**: Utiliza um loop para multiplicar os valores.
2. **Com `goto` (C)**: Controla o fluxo de execução utilizando a estrutura `goto`.
3. **Recursivo (Python)**: Utiliza chamadas de função para calcular o fatorial.

### Equivalência:
- As abordagens **iterativas** (C e Python) são fortemente equivalentes, pois seguem a mesma estrutura lógica.
- A abordagem **recursiva** gera o mesmo resultado, mas o controle de fluxo é diferente, alterando a execução com chamadas e retornos de função.

## Decremento

Aqui, são mostradas três formas de realizar o decremento de um valor:

1. **Iterativo (Python)**: Utiliza um loop para decrementar o valor até zero.
2. **Com `goto` (C)**: Controla o fluxo de execução com a estrutura `goto`.
3. **Recursivo (Python)**: Realiza o decremento por meio de chamadas de função.

### Equivalência:
- As abordagens **iterativas** e **com `goto`** são fortemente equivalentes, realizando o decremento de forma sequencial.
- A abordagem **recursiva** modifica o controle de fluxo com chamadas de função, sendo estruturalmente diferente.

## Conclusão

Embora as abordagens iterativa e com `goto` sejam fortemente equivalentes em termos de fluxo de controle, a recursão altera esse fluxo de maneira significativa. Isso resulta em diferenças no traço operacional, tornando a abordagem recursiva não fortemente equivalente às demais.
