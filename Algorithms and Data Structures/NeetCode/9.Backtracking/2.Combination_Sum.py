from typing import *
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
	def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
		res = []
		for x in self.subsets(candidates):
			if sum(x) == target:
				res.append(x)
		return res