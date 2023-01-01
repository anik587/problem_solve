def decodeMessage(key, message):
    tempKey = list(dict.fromkeys(key.replace(" ", "")))
    outputStr = ''
    list1 = []
    list1[:0] = tempKey
    mainKey = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
               'v', 'w', 'x', 'y', 'z']
    for x in message:
        if x == " ":
            outputStr = outputStr + x
        else:
            outputStr = outputStr + mainKey[tempKey.index(x)]
    return outputStr


def decodeMessage2(self, key: str, message: str) -> str:
    m = {' ': ' '}
    start = 'a'
    for c in key:
        if c not in m:
            m[c] = start
            start = chr(ord(start) + 1)
    return "".join([m[x] for x in message])


print(decodeMessage('the quick brown fox jumps over the lazy dog', 'vkbs bs t suepuv'))
