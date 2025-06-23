"""
Solution by Ilyas Nmili on 19/06/25
There is a more optimized solution using GCD techniques.

For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t (i.e., t is concatenated with itself one or more times).
Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.
Example:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
"""

class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
        n1, n2 = len(str1), len(str2)
        def isvalide(k):
            if n1 % k or n2 % k:
                return False
            return str1 == str1[:k] * (n1 // k) and str2 == str1[:k] * (n2 // k)

        for i in range(min(n1, n2), 0, -1):
            if isvalide(i):
                return str1[:i]
        return ''
    
str1 = 'ABCABC'
str2 = 'ABC'
print(Solution().gcdOfStrings(str1, str2))