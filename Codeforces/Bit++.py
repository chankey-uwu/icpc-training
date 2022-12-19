n = int(input())
x = 0
for i in range(n):
    s = input().replace("X","")
    if s == "++":
        x+=1
    else:
        x-=1
print(x)