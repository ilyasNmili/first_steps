"""
Solution by ilyas Nmili on 23/06/25

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.

Example:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]
"""
from typing import List
#Solution1: two arrays
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        arr1 = [0] * len(nums)
        arr2 = [0] * len(nums) #diff m3a ila jm3thoum
        arr1[0] = nums[0]
        arr2[-1] = nums[-1]
        for i in range(1, len(nums)):
            arr1[i] = arr1[i - 1] * nums[i]
            arr2[-1 - i] = arr2[-i] * nums[-1 - i]
        return [arr1[i - 1] * arr2[i + 1] if i not in (0, len(nums) - 1) else arr2[i + 1] if not i else arr1[i - 1] for i in range(len(nums))]

#Solution2: 
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        p = 1
        zeros = 0
        for i in range(len(nums)):
            if nums[i] != 0:
                p *= nums[i]
            else:
                zeros += 1
        for i in range(len(nums)):
            if nums[i] != 0 and zeros == 0:
                nums[i] = p // nums[i]
            elif nums[i] != 0 and zeros >= 0:
                nums[i] = 0
            elif nums[i] == 0 and zeros == 1:
                nums[i] = p
        return nums