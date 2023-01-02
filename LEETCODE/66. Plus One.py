# You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

# Increment the large integer by one and return the resulting array of digits.

 

# Example 1:

# Input: digits = [1,2,3]
# Output: [1,2,4]
# Explanation: The array represents the integer 123.
# Incrementing by one gives 123 + 1 = 124.
# Thus, the result should be [1,2,4].
# Example 2:

# Input: digits = [4,3,2,1]
# Output: [4,3,2,2]
# Explanation: The array represents the integer 4321.
# Incrementing by one gives 4321 + 1 = 4322.
# Thus, the result should be [4,3,2,2].
# Example 3:

# Input: digits = [9]
# Output: [1,0]
# Explanation: The array represents the integer 9.
# Incrementing by one gives 9 + 1 = 10.
# Thus, the result should be [1,0].
from typing import List

class Solution:
    def plusOne1(self, digits: List[int]) -> List[int]:
        stringDigits = ''.join(str(d) for d in digits) # number list to string
        plusOneDigits = int(stringDigits) + 1
        plusOneList = []
        plusOneList[:0] = str(plusOneDigits) # split string by char to list
        return list(map(int, plusOneList)) # list casting to int into new list

    def plusOne2(self, digits: List[int]) -> List[int]:
        digits[-1] += 1
        for i in range(1, len(digits)):
            flag = digits[-i] // 10
            digits[-i] %= 10
            digits[-i - 1] += flag
        if digits[0] // 10:
            digits[0] %= 10
            digits.insert(0, 1)
        return digits
    
    def pluseOne3(self, digits: List[int]) -> List[int]:
        digits = digits[::-1]
        carry, i = 1,0

        while carry: 
            if i < len(digits):
                if digits[i] == 9:
                    digits[i] = 0
                else:
                    digits[i]+=1
                    carry = 0
            else:
                digits.append(1)
                carry = 0
            i+=1
        return digits[::-1]

sol = Solution()

print(sol.plusOne([1,2,3]))
print(sol.plusOne([4,3,2,1]))
print(sol.plusOne([9]))