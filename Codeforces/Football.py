s = input()
c1 = 0
c0 = 0
flag = False
for i in s:
    if i == "1":
        c1 += 1
        c0 = 0
    else:
        c0 += 1
        c1 = 0
    if c1 == 7 or c0 == 7:
        flag = True

if flag:
    print("YES")
else:
    print("NO")