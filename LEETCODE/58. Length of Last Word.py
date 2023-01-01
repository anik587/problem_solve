class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        # list = s.split()
        # return len(list[-1])
        return len(s.split()[-1])
    
sol = Solution()

print(sol.lengthOfLastWord('Hello World'))
print(sol.lengthOfLastWord('   fly me   to   the moon  '))
print(sol.lengthOfLastWord('luffy is still joyboy'))

