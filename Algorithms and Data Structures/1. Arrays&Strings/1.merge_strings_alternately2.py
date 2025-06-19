"""
Solution2 using recursivity (The iterative approach is the best)
"""

class Solution:
    
    def mergeAlternately(self, word1: str, word2: str) -> str:
        if len(word1) == 1 and len(word2) == 1:
            return word1 + word2
        if len(word1) == 1:
            return word1[0] + word2
        if len(word2) == 1:
            return word1[0] + word2[0] + word1[1:]
        return word1[0] + word2[0] + self.mergeAlternately(word1[1:], word2[1:])

str1 = "ab"
str2 = "pqrs"
res = Solution().mergeAlternately(str1, str2)
print(res)
