import math
q = int(input())
limits = [0]
numbers = [0]
for i in range(1,18):
    ap_num = 9*i*(10**(i-1))
    limits.append(limits[i-1] + ap_num)
    numbers.append(numbers[i-1]*10 + 9)

while q > 0:
    k = int(input())
    flag = True
    i = 1
    while flag:
        if k <= limits[i]:
            num = str(math.ceil((k - limits[i-1])/i) + numbers[i-1])
            print(num[((k-limits[i-1])%i)-1])
            flag = False
        else:
            i += 1
    q-=1