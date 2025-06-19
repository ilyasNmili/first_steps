"""
Solution1 by: ilyas Nmili on 19/06/25

You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, 
starting with word1. If a string is longer than the other, append the additional letters onto the end 
of the merged string.
Example 1:
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
"""

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
str1 = "ab"
str2 = "pqrs"
res = Solution().mergeAlternately(str1, str2)
print(res)

""" Att:
1:
for i in range(5):
    x = 1
print(i) : 4

2:
word = 'abcd'
x = word[4:]
print(x) #Empty string
"""