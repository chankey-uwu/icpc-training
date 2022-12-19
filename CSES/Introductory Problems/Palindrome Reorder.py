def notPalindrome(dic):
    odds = 0
    for i in dic:
        if dic[i] % 2 == 1:
            last_odd = i
            odds += 1
    if odds > 1:
        return -1
    elif odds == 1:
        return last_odd
    else:
        return 0


string = input()
dic = {}
last = None
palindrome = ""
for i in string:
    if i in dic:
        dic[i] += 1
    else:
        dic[i] = 1

odds = notPalindrome(dic)
if odds == -1:
    print("NO SOLUTION")
else:
    if odds != 0:
        last = odds
        dic[last] -= 1

    for i in dic:
        while dic[i] > 0:
            palindrome = palindrome[0:len(palindrome)//2] + i*2 + palindrome[len(palindrome)//2:]
            dic[i] -= 2

    if last is not None:
        palindrome = palindrome[0:len(palindrome)//2] + last + palindrome[len(palindrome)//2:]

    print(palindrome)
    
    
