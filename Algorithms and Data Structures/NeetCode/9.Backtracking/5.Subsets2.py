from typing import *
class Solution:
	def subsetsWithDup(self, nums: List[int]) -> List[List[int]]:
		res = []
		subsets = []
		nums.sort()
		def dfs(i):
			if i >= len(nums):
				res.append(subsets[:])
				return
			dfs(i + 1)
			subsets.append(nums[i])
			if (i >= 0 and  i < len(nums) and  nums[i] == nums[i - 1]):
				subsets[:] = []
				return
			dfs(i + 1)
			if subsets:
				subsets.pop()
		dfs(0)
		return res
nums = [1, 2, 2]
x = Solution().subsetsWithDup(nums)
print(x)