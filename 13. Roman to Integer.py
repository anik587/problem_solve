# Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
#
# Symbol       Value
# I             1
# V             5
# X             10
# L             50
# C             100
# D             500
# M             1000
# For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.
#
# Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:
#
# I can be placed before V (5) and X (10) to make 4 and 9.
# X can be placed before L (50) and C (100) to make 40 and 90.
# C can be placed before D (500) and M (1000) to make 400 and 900.
# Given a roman numeral, convert it to an integer.

# Example 1:

# Input: s = "III"
# Output: 3
# Explanation: III = 3.
# Example 2:

# Input: s = "LVIII"
# Output: 58
# Explanation: L = 50, V= 5, III = 3.
# Example 3:

# Input: s = "MCMXCIV"
# Output: 1994
# Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
 

# Constraints:

# 1 <= s.length <= 15
# s contains only the characters ('I', 'V', 'X', 'L', 'C', 'D', 'M').
# It is guaranteed that s is a valid roman numeral in the range [1, 3999].


class Solution:
    def romanToInt_solution1(self, s: str) -> int:
        previous_val = 0
        integer_value = 0
        replacable = {'I': ['V', 'X'], 'X': ['L', 'C'], 'C': ['D', 'M']}
        newDict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        for i, d in enumerate(list(s)):
            if d in replacable :
                if i+1 < len(s) and list(s)[i+1] in replacable[d]:
                    previous_val = -abs(newDict[d])
                else:
                    integer_value += previous_val + newDict[d]
                    previous_val = 0
            else:
                integer_value += previous_val + newDict[d]
                previous_val = 0

        return integer_value

    def romanToInt_solution2(self, s: str) -> int:
        val = 0
        index = len(s)-1
        newDict = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        for i in range(index, -1, -1):
            if i+1 <= index:
                if newDict[s[i]] < newDict[s[i+1]]:
                    val-= newDict[s[i]]
                else:
                     val+= newDict[s[i]]
            else:
                val+= newDict[s[i]]
        return val



sol = Solution()
print(sol.romanToInt('IV'))
print(sol.romanToInt('III'))
print(sol.romanToInt('LVIII'))
print(sol.romanToInt('MCMXCIV'))
print(sol.romanToInt('MMMCMXCIX'))

