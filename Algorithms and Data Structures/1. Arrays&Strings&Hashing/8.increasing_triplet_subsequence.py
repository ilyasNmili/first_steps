"""
Solution by ilyas Nmili on 23/06/25

Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.

Example:
Input: nums = [1,2,3,4,5]
Output: true
"""

from typing import List

class Solution:
    def increasingTriplet(self, nums: List[int]) -> bool:
        min1 = min2 = float('inf') #positive infinity
        for i in range(len(nums)):
            if nums[i] <= min1:
                min1 = nums[i]
            elif nums[i] <= min2:
                min2 = nums[i]
            else:
                return True
        return False