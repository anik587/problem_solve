# Write a function to find the longest common prefix string amongst an array of strings.
# If there is no common prefix, return an empty string "".
# Example 1:

# Input: strs = ["flower","flow","flight"]
# Output: "fl"
# Example 2:

# Input: strs = ["dog","racecar","car"]
# Output: ""
# Explanation: There is no common prefix among the input strings.
 
# Constraints:

# 1 <= strs.length <= 200
# 0 <= strs[i].length <= 200
# strs[i] consists of only lowercase English letters.

def longestCommonPrefix(strs):
    lowest_len_string_len = 201
    lowest_len_string_index= 0
    longest_prefix = ""
    for j, n in enumerate(strs):
        if lowest_len_string_len >= len(n):
            lowest_len_string_len = len(n)
            lowest_len_string_index = j
    for i, d in enumerate(strs[lowest_len_string_index]):
        for j, c in enumerate(strs):
            if c[i] == d:
                prefix_status = True
            else:
                prefix_status = False
                break
            if prefix_status == False:
                break
        if prefix_status == False:
                break
        longest_prefix = longest_prefix + d
    return longest_prefix

print(longestCommonPrefix(["dog","racecar","car"]))
print(longestCommonPrefix(["flower","flow","flight"]))
print(longestCommonPrefix(["cir","car"]))