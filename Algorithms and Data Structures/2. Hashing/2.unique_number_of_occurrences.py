"""
Solution by ilyas Nmili on 23/06/25

Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.
Example:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
"""

from typing import List
from collections import Counter
class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        return len(Counter(arr).values()) == len(set(Counter(arr).values()))
    
x = Solution().uniqueOccurrences([1,2,2,1,1,3])
print(x)

"""
Att: Counter in collections module
"""