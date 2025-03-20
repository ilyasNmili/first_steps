from typing import List
class Solution:
	def subsets(self, nums: List[int]) -> List[List[int]]:
		res = []
		subsets = []
		def dfs(i):
			if i == len(nums):
				res.append(subsets[:])
				return
			dfs(i + 1)
			subsets.append(nums[i])
			dfs(i + 1)
			subsets.pop()
		dfs(0)
		return res
	
nums = [1, 2, 3]
x = Solution().subsets(nums)
print(x)

	
