from typing import List
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        data = [0] * 26
        for c in s:
            data[ord(c) - ord('a')] += 1
        for c in t:
            data[ord(c) - ord('a')] -= 1
        for i in range(26):
            if data[i] != 0:
                return False
        return True