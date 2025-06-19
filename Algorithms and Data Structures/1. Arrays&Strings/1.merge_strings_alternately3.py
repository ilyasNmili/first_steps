"""
Solution3 : optimising solu
In the solution2 , word1[1:] and word2[1:] create new substrings at every recursive step. This increases memory usage and slows down execution for large strings.
The helper function avoids this by passing indices (i and j) to track the current position in the strings, leaving the original strings unchanged.
"""

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        def helper(i: int, j: int) -> str:
            if i == len(word1):
                return word2[j:]  
            if j == len(word2):
                return word1[i:]  
            return word1[i] + word2[j] + helper(i + 1, j + 1)
        
        return helper(0, 0)