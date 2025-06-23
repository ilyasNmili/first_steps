"""
Solution by ilyas Nmili on 23/06/25

Given an array of characters chars, compress it using the following algorithm:
Begin with an empty string s. For each group of consecutive repeating characters in chars:
If the group's length is 1, append the character to s.
Otherwise, append the character followed by the group's length.
The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.
After you are done modifying the input array, return the new length of the array.
You must write an algorithm that uses only constant extra space.

Example:
Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
"""

from typing import List

#Solution1: O(n) space
class Solution:
    def compress(self, chars: List[str]) -> int:
        s = chars[0]
        l = 1
        for x in chars[1:]:
            if x == s[-1]:
                l += 1
            elif l > 1:
                s += (str(l) + x)
                l = 1
            else:
                s += x
                l = 1
        if l > 1:
            s += str(l)
        chars[:] = s 
        return len(s)

#Solution2 : O(1) space