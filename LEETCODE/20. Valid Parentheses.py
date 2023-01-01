# Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

# An input string is valid if:

# Open brackets must be closed by the same type of brackets.
# Open brackets must be closed in the correct order.
# Every close bracket has a corresponding open bracket of the same type.

# Example 1:

# Input: s = "()"
# Output: true
# Example 2:

# Input: s = "()[]{}"
# Output: true
# Example 3:

# Input: s = "(]"
# Output: false
 

# Constraints:

# 1 <= s.length <= 104
# s consists of parentheses only '()[]{}'.

class Solution:
    def isValid(self, s: str) -> bool:
        status = False
        openingTag = ['(', '{', '[']
        closingingTag = [')', '}', ']']
        stack = [] 
        arr = list(s)
        for i  in arr:
            if i in openingTag:
                stack.append(i)
                continue
            if i in closingingTag:
                if len(stack) >0 and openingTag.index(stack[-1]) == closingingTag.index(i):
                    stack.pop(-1)
                    status = True
                else:
                    status = False
                    break
        if len(stack) >0:
            return False
        return status

solution = Solution()

print(solution.isValid(")"))
print(solution.isValid("()"))
print(solution.isValid("()[]{}"))
print(solution.isValid("(]"))
print(solution.isValid("(){[({})]}"))
print(solution.isValid("(){[({}){]}"))
