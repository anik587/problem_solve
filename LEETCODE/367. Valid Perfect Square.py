# Given a positive integer num, return true if num is a perfect square or false otherwise.

# A perfect square is an integer that is the square of an integer. In other words, it is the product of some integer with itself.

# You must not use any built-in library function, such as sqrt.

 

# Example 1:

# Input: num = 16
# Output: true
# Explanation: We return true because 4 * 4 = 16 and 4 is an integer.
# Example 2:

# Input: num = 14
# Output: false
# Explanation: We return false because 3.742 * 3.742 = 14 and 3.742 is not an integer.
 

# Constraints:

# 1 <= num <= 231 - 1


class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        temp:float = 0.0
        sqrt:float = 0.0
        sqrt = num/2
        while (temp != sqrt):
            temp = sqrt
            sqrt = ((num / temp) + temp) / 2
        return sqrt.is_integer()

    def isPerfectSquare2(self, num: int) -> bool:
        if num**0.5 == round(num**0.5): return True
        else: False

sol = Solution()
print(sol.isPerfectSquare(4))
print(sol.isPerfectSquare(166))
print(sol.isPerfectSquare(200))
print(sol.isPerfectSquare(144))