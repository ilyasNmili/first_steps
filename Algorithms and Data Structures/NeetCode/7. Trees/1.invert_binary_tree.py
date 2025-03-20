from typing import *

class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
class Solution:
    def invertTree(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        if not root:
            return None
        root.left, root.right = root.right, root.left
        self.invertTree(root.left)
        self.invertTree(root.right)
        return root
    

myNode = TreeNode(1, 
				  TreeNode(2, 
						   TreeNode(4), 
						   TreeNode(5)), 
				  TreeNode(3, 
						   TreeNode(6), 
						   TreeNode(7)))

inverted_tree = Solution().invertTree(myNode)


def tree_to_list(root: Optional[TreeNode]) -> List[List[int]]:
	if not root:
		return []
	result, current_level = [], [root]
	while current_level:
		level_values, next_level = [], []
		for node in current_level:
			level_values.append(node.val)
			if node.left:
				next_level.append(node.left)
			if node.right:
				next_level.append(node.right)
		result.append(level_values)
		current_level = next_level
	return result

print(tree_to_list(inverted_tree))
    