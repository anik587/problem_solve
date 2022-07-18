def isPalindrome(x):
    print(x)
    i = 0
    temp = str(x)
    temp_len = len(temp)
    while i < int(temp_len / 2):
        # while i <= int(len(str(x))) / 2:
        #
        # print(i)
        # print(temp_len-1-i)
        if temp[i] != temp[temp_len - 1 - i]:
            return False
        i += 1
    return True


def isPalindrome2(x):
    if x < 0:
        return False

    stack = []
    num = x
    while num >= 10:
        stack.append(num % 10)
        num //= 10
    stack.append(num)

    return stack == list(reversed(stack))


def isPalindrome3(x):
    toStr = str(x)
    return toStr == toStr[::-1]


print(isPalindrome2(12221))
print('-----------------------')
print(isPalindrome2(122221))
print('-----------------------')
print(isPalindrome2(1122221))
print('-----------------------')
print(isPalindrome2(-122221))
print('-----------------------')
print(isPalindrome2(1222210))
print('-----------------------')
print(isPalindrome2(10222201))
print('-----------------------')
print(isPalindrome2(12200221))
print('-----------------------')
print(isPalindrome2(7712222155))
print('-----------------------')
