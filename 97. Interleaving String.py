def isInterleave(self, s1: str, s2: str, s3: str) -> bool:
    if len(s3) != len(s1) + len(s2):
        return False

    def checker(i, j, k):
        if (i, j) in check:
            return False
        check.add((i, j))
        if i == len(s1):
            return s2[j:] == s3[k:]
        if j == len(s2):
            return s1[i:] == s3[k:]
        if ((s1[i] == s3[k] and checker(i + 1, j, k + 1)) or
                (s2[j] == s3[k] and checker(i, j + 1, k + 1))):
            return True
        return False

    check = set()
    return checker(0, 0, 0)
