n = int(input())
res = 0
prev = 0
for i in range(1,n+1):
    if i == 1:
        print(res)
    else:
        prev += 8*(i-2)
        res = (i**2 * (i**2 - 1))/2 - prev;
        print(int(res))