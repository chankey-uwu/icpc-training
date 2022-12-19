n,m = map(int,input().split())
am = [0]*m
for s in range(n):
    string = input()
    for i in range(m):
        if string[i] == "o":
            am[i] += 1
print(min(am))