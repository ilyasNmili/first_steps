"""
Solution by ilyas Nmili on 23/06/25
Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Example:
Input: s = "IceCreAm"
Output: "AceCreIm"
"""

class Solution:
    def reverseVowels(self, s: str) -> str:
        voyels = [x for x in s if x in "aeiouAEIOU"]
        ret = [x if x not in "aeiouAEIOU" else voyels.pop() for x in s]            
        return ''.join(ret)