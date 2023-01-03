# You are climbing a staircase. It takes n steps to reach the top.

# Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

 

# Example 1:

# Input: n = 2
# Output: 2
# Explanation: There are two ways to climb to the top.
# 1. 1 step + 1 step
# 2. 2 steps
# Example 2:

# Input: n = 3
# Output: 3
# Explanation: There are three ways to climb to the top.
# 1. 1 step + 1 step + 1 step
# 2. 1 step + 2 steps
# 3. 2 steps + 1 step
 
class Solution:
    def climbStairs1(self, n: int) -> int:
        preOne = 0
        preTwo = 1
        for i in range(n):
            sum = preOne + preTwo
            preOne = preTwo
            preTwo = sum
        return sum

    #def climStairs2(self, n: int) -> int:


sol = Solution()
print(sol.climbStairs(1))
print(sol.climbStairs(2))
print(sol.climbStairs(3))
print(sol.climbStairs(4))
print(sol.climbStairs(5))
print(sol.climbStairs(6))
print(sol.climbStairs(7))
print(sol.climbStairs(8))