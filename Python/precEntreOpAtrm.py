print("-------precedencia entre operadores aritmeticos-------")
"""
1. (n + n) - primeira operacao a ser realizada; ordem: de dentro pra fora
2. ** - depois, a exponenciacao
3. * / // % - multiplicacao, divisao, divisao inteira, e resto
4. + - - por ultimo, adicao e subtracao
"""
conta1 = 1 + 1 ** 5 + 5 # = 7
conta2 = (1 + 1) ** (5 + 5) # = 1024
conta3 = (1 + int(0.5 + 0.5)) ** (5 + 5) # = 1024
print(conta1)
print(conta2)
print(conta3)
print("--------------")