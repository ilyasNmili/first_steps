from typing import *

class TreeNode:
	def __init__(self, val=0, left=None, right=None):
		self.val = val
		self.left = left
		self.right = right
	
class Solution:
	def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
		if not p and not q:
			return True
		if not p or not q or p.val != q.val:
			return False
		return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)
	def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
		if not root and subRoot:
			return False
		return self.isSameTree(root, subRoot) or self.isSameTree(root.right, subRoot) or self.isSameTree(root.left, subRoot)




myNode1 = TreeNode(1, 
				  TreeNode(2, 
						   TreeNode(4), 
						   TreeNode(5)), 
				  TreeNode(3, 
						   TreeNode(6), 
						   TreeNode(6)))

myNode2 = TreeNode(1, 
				  TreeNode(2, 
						   TreeNode(4), 
						   TreeNode(5)), 
				  TreeNode(3, 
						   TreeNode(6), 
						   TreeNode(7)))

res = Solution().isSubtree(myNode1, myNode2)
print(res)	