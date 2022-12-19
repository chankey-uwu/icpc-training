def bitStrings(n):
    M = 1000000007
    sol = 2
    while n > 1:
        sol = (sol * 2) % M
        n -= 1
    return sol

n = int(input())
print(bitStrings(n))