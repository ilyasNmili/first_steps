from typing import *

# Definition for singly-linked list.
class ListNode:
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next
#Solution1: Using set
class Solution:
	def hasCycle_set(self, head: Optional[ListNode]) -> bool:
		my_set = set()
		current = head 
		while(current):
			if current not in my_set:
				my_set.add(current)
			else:
				return True
			current = current.next
		return False
	
#Solution2: Using fast&low pointer
'''
How It Works
Two Pointers:

A slow pointer moves one step at a time.
A fast pointer moves two steps at a time.
Purpose:

If there’s a cycle in the data structure, the fast pointer will eventually meet the slow pointer.
If there’s no cycle, the fast pointer will reach the end of the data structure first.
This difference in speed is key to detecting patterns efficiently.
'''
class Solution:
	def hasCycle(self, head: Optional[ListNode]) -> bool:
		slow = fast = head
		while (fast and fast.next):
			slow = slow.next
			fast = fast.next.next
			if slow == fast:
				return True
		return False
		 





z = ListNode(4)
x = ListNode(1, ListNode(2, ListNode(3, z)))
z.next= x
s = Solution().hasCycle(x)

print(s)
# while(x):
# 	print(x.val)
# 	x = x.next