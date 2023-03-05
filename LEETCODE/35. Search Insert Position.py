# Given a sorted array of distinct integers and a target value, return the index if the target is found.
#  If not, return the index where it would be if it were inserted in order.

# You must write an algorithm with O(log n) runtime complexity.

# Example 1:

# Input: nums = [1,3,5,6], target = 5
# Output: 2
# Example 2:

# Input: nums = [1,3,5,6], target = 2
# Output: 1
# Example 3:

# Input: nums = [1,3,5,6], target = 7
# Output: 4
 

# Constraints:

# 1 <= nums.length <= 104
# -104 <= nums[i] <= 104
# nums contains distinct values sorted in ascending order.
# -104 <= target <= 104
from typing import List
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        if target < nums[0]:
            return 0
        if target > nums[-1]:
            return len(nums)
        index = -1
        for idx, x  in enumerate(nums):
            if(x < target):
                continue
            else:
                return idx
        #return index if index != -1 else  len(nums)
    def searchInsert2(self, input_array: List[int], value: int) -> int:
        low = 0
        high = len(input_array)
        while low <= high:
            if low == high:
                return mid if value > input_array[low] else low
            mid = int((high + low)/2)
            if value == input_array[mid]:
                return mid
            if value > input_array[mid]:
                low = mid+1
            else:
                high = mid-1
        return mid
sol = Solution()

print(sol.searchInsert([1,3,5,6], 5))
print(sol.searchInsert([1,3,5,6], 2))
print(sol.searchInsert([1,3,5,6], 7))

