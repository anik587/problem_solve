# Rotate Array
# Medium
# 13.9K
# 1.6K
# Companies
# Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

# Example 1:

# Input: nums = [1,2,3,4,5,6,7], k = 3
# Output: [5,6,7,1,2,3,4]
# Explanation:
# rotate 1 steps to the right: [7,1,2,3,4,5,6]
# rotate 2 steps to the right: [6,7,1,2,3,4,5]
# rotate 3 steps to the right: [5,6,7,1,2,3,4]
# Example 2:

# Input: nums = [-1,-100,3,99], k = 2
# Output: [3,99,-1,-100]
# Explanation: 
# rotate 1 steps to the right: [99,-1,-100,3]
# rotate 2 steps to the right: [3,99,-1,-100]
 

# Constraints:

# 1 <= nums.length <= 105
# -231 <= nums[i] <= 231 - 1
# 0 <= k <= 105
 

# Follow up:

# Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
# Could you do it in-place with O(1) extra space?

from ast import List


class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if len(nums)<k:
            for i in range(k):
                nums[:]=[nums[-1]]+nums[0:-1]
        else:
            nums[:]=nums[-k:]+nums[0:-k]
        print(nums)

    def rotate2(self, nums: List[int], k: int) -> None:
        for i in range(k):
            nums.insert(0, nums.pop())
        print(nums)
    
    def rotate(self, nums: List[int], k: int) -> None:
        if len(nums)<k:
            size = k
        else:
            size = k%len(nums)
        for i in range(size):
            nums.insert(0, nums.pop())
        print(nums)
