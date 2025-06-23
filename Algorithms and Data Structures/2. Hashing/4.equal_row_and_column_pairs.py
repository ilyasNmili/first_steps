"""
Solution by ilyas Nmili on 23/06/25

Given a 0-indexed n x n integer matrix grid, return the number of pairs (ri, cj) such that row ri and column cj are equal.
A row and column pair is considered equal if they contain the same elements in the same order (i.e., an equal array).

Example:

Input: grid = [[3,2,1],[1,7,6],[2,7,7]]
Output: 1
Explanation: There is 1 equal row and column pair:
- (Row 2, Column 1): [2,7,7]
"""

from typing import List
from collections import Counter

class Solution:
    def equalPairs(self, grid: List[List[int]]) -> int:
        n = len(grid)
        my_dict = Counter([tuple(grid[i]) for i in range(n)])
 
        s = 0
        for i in range(len(grid)):
            col = [grid[j][i] for j in range(len(grid))]
            if tuple(col) in my_dict:
                s += my_dict[tuple(col)]
        return s