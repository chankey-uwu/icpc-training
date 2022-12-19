def twoSets(n):
    lado1 = ""
    lado2 = ""
    i = 1
    if n % 4 == 0:
        print("YES")
        print(int(n/2))
        while i < n:
            lado1 += str(i) + " " + str(i + 3)
            lado2 += str(i + 1) + " " + str(i + 2)
            if (n - 3) != i:
                lado1 += " " 
                lado2 += " "
            i += 4
        print(lado1)
        print(int(n/2))
        print(lado2)
    elif n % 4 == 3:
        print("YES")
        print(int(n/2 + 1))
        lado1 += "1 2 "
        lado2 += "3 "
        i += 3
        while i < n:
            lado1 += str(i) + " " + str(i + 3)
            lado2 += str(i + 1) + " " + str(i + 2)
            if (n - 3) != i:
                lado1 += " " 
                lado2 += " "
            i += 4
        print(lado1)
        print(int(n/2))
        print(lado2)
    else:
        print("NO")

n = int(input())
twoSets(n)


