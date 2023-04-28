# Given an integer n, return true if it is a power of three. Otherwise, return false.

# An integer n is a power of three, if there exists an integer x such that n == 3x.

# Example 1:

# Input: n = 27
# Output: true
# Explanation: 27 = 33
# Example 2:

# Input: n = 0
# Output: false
# Explanation: There is no x where 3x = 0.
# Example 3:

# Input: n = -1
# Output: false
# Explanation: There is no x where 3x = (-1).


class Solution:
    def isPowerOfThree(self, x: int) -> bool:
        if x < 1 or x%3 != 0:
            if x == 1:
                return True
            return False
        flag = True
        while ( x > 1 ):
            if x%3 != 0:
                flag = False
                break
            x = x/3
        return flag

    def isPowerOfThree2(self, n: int) -> bool:
        if n < 1:
            return False
        while n % 3 == 0:
            n = n // 3
        return n == 1
    
sol = Solution()
print(sol.isPowerOfThree(-1))
print(sol.isPowerOfThree(-27))
print(sol.isPowerOfThree(1))
print(sol.isPowerOfThree(0))
print(sol.isPowerOfThree(9))
print(sol.isPowerOfThree(81))
print(sol.isPowerOfThree(27))