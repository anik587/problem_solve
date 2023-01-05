# Given an integer n, return true if it is a power of two. Otherwise, return false.

# An integer n is a power of two, if there exists an integer x such that n == 2x.

 

# Example 1:

# Input: n = 1
# Output: true
# Explanation: 20 = 1
# Example 2:

# Input: n = 16
# Output: true
# Explanation: 24 = 16
# Example 3:

# Input: n = 3
# Output: false
 

# Constraints:

# -231 <= n <= 231 - 1

class Solution:
    def isPowerOfTwo(self, x: int) -> bool:
        if x < 1 or x%2 != 0:
            if x == 1:
                return True
            return False
        flag = True
        while ( x > 1 ):
            if x%2 != 0:
                flag = False
                break
            x = x/2
        return flag          

sol = Solution()

print(sol.isPowerOfTwo(0))
print(sol.isPowerOfTwo(1))
print(sol.isPowerOfTwo(2))
print(sol.isPowerOfTwo(16))
print(sol.isPowerOfTwo(3))
print(sol.isPowerOfTwo(8))