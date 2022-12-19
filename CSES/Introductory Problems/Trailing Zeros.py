x = int(input())
x = x - (x%5)
x //= 5
y = 5
i = 2
dict = {}
while y < x:
    dict[y] = i
    y *= 5
    i += 1
res = 0 
for i in range(1,x+1):
    

print(res)
