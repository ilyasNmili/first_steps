"""
Solutions by: ilyas Nmili on 19/06/25

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, 
starting with word1. If a string is longer than the other, append the additional letters onto the end 
of the merged string.

Example:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
"""

#Solution1:

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        res = ''
        n1, n2 = len(word1), len(word2)
        for i in range(min(n1, n2)):
            res += word1[i] + word2[i]
        if n1 > n2:
            res += word1[i + 1:]
        elif n1 < n2:
            res += word2[i + 1:]

        return res

#Solution2 using recursivity (The iterative approach is the best)

class Solution:    
    def mergeAlternately(self, word1: str, word2: str) -> str:
        if len(word1) == 1 and len(word2) == 1:
            return word1 + word2
        if len(word1) == 1:
            return word1[0] + word2
        if len(word2) == 1:
            return word1[0] + word2[0] + word1[1:]
        return word1[0] + word2[0] + self.mergeAlternately(word1[1:], word2[1:])


#Solution3 : optimising recur
"""
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

str1 = "ab"
str2 = "pqrs"
res = Solution().mergeAlternately(str1, str2)
print(res)

"""
Att:
1:
for i in range(5):
    x = 1
print(i) : 4

2:
word = 'abcd'
x = word[4:]
print(x) #Empty string
"""