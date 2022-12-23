def ceros_amount(x):
    new_ceros = 0
    while x % 5 == 0:
        x = int(x/5)
        new_ceros += 1
    return new_ceros

n = int(input())
f = 5
ceros = 0
while f <= n:
    ceros += ceros_amount(f)
    f += 5

print(ceros)