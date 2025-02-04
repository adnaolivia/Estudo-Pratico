"""
conversão de tipos, coerção
type convertion, typecasting, coercion
converter um tipo em outro
tipos imutáveis e primitivos: str, int, float, bool
tipos imutáveis: uma vez criados, você não consegue alterar eles no programa
"""
print("-------convertendo tipos-------")
# print("1" + 1) -> TypeError
print("1", type("1")) # str
print(int("1"), type(int("1"))) # str -> int
print(int("1") + 1) # o python fez a conversão e entendeu o "1" como tipo int
print(float(9) + 6)
print(float("9") + 6)