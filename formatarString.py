print("-------formatacao de string-------")

nome = "adna"
altura = 1.65
peso = 63.5
imc =  23.32415059687787

linha = f"{nome} tem {altura} de altura e {peso} quilos"
linha1 = f"{nome} tem {imc} de imc"
linha2 = f"{nome} tem {imc:.2f} de imc"
"""
f - chama a formatacao da str, onde o nome da variavel esta entre chaves, assim o interpretador vai diferenciar a variavel da str.
:.2f - formatacao das casas decimais, neste caso, são 2 casas apos o ponto.
"""
print(linha)
print(linha1)
print(linha2)
print("--------------")