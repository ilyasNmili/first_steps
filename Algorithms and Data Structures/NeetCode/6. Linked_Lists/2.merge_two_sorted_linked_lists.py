from typing import *

# Definition for singly-linked list.
class ListNode:
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next

class Solution:
	def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
		my_list = current = ListNode()
		cur1 = list1
		cur2 = list2
		while(cur1 and cur2):
			if cur1.val < cur2.val:
				current.next = cur1
				cur1 = cur1.next
			else:
				current.next = cur2
				cur2 = cur2.next
			current = current.next
		if cur1:
			current.next = cur1
		else:
			current.next = cur2
		return my_list.next





x = ListNode(1, ListNode(2, ListNode(4)))
y = ListNode(1, ListNode(3, ListNode(5)))
x = Solution().mergeTwoLists(x, y)

while(x):
	print(x.val)
	x = x.next
