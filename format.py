print("-------metodo format-------")

a = "AAAA"
b = "B"
c = 1.1484939
string = "a = {} b = {} c = {:.2f}"
formato = string.format(a, b, c) # a,b,c são argumentos
"""
IndexError: out of range = reclama que você está buscando algo que ja acabou
ex.: string.formato = "a ={} b ={} c ={:.2f} {}"
tudo que tem um indice inicia no 0, entao: a - indice 0, b - indice 1, c - indice 2
"""
print(formato)
print("--------------")