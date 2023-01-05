# Given an integer n, return true if it is a power of four. Otherwise, return false.

# An integer n is a power of four, if there exists an integer x such that n == 4x.

 

# Example 1:

# Input: n = 16
# Output: true
# Example 2:

# Input: n = 5
# Output: false
# Example 3:

# Input: n = 1
# Output: true

class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n < 1:
            return False
        while n % 4 == 0:
            n = n // 4
        return n == 1

sol = Solution()
print(sol.isPowerOfFour(-1))
print(sol.isPowerOfFour(-27))
print(sol.isPowerOfFour(1))
print(sol.isPowerOfFour(0))
print(sol.isPowerOfFour(16))
print(sol.isPowerOfFour(4))
print(sol.isPowerOfFour(64))