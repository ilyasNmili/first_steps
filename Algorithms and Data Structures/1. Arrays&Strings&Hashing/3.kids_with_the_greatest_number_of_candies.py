"""
Solution by ilyas Nmili on 23/06/25

There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.
Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Example:
Input: candies = [2,3,5,1,3], extraCandies = 3
Output: [true,true,true,false,true] 
"""

from typing import List
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        return [False if candies[i] + extraCandies < max(candies) else True for i in range(len(candies))]