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
