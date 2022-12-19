def numSpiral(y, x):
    if y >= x:
        if y % 2 == 0: 
            return (y**2 - x + 1)
        else:
            return ((y - 1)**2 + x)
    else:
        if x % 2 == 1:
            return (x**2 - y + 1)
        else:
            return ((x - 1)**2 + y) 

t = int(input())
sol = []
for i in range(0,t):
    cords = input()
    y, x = cords.split()
    y = int(y)
    x = int(x)
    sol.append(numSpiral(y, x))
for s in sol:
    print(s)