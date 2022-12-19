lista = input().split("+")
lista.sort()
f = ""
for i in range(len(lista)-1):
    f += lista[i] + "+"
f += lista[len(lista)-1]
print(f)