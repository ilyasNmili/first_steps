from typing import *

# Definition for singly-linked list.
class ListNode:
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next

class Solution:
	def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
		size = 0
		current = head
		while(current):
			size += 1
			current = current.next
		if size ==  1:
			return None
		if n == size:
			return head.next
		last = size - n
		current = head
		for i in range(last - 1):
			current = current.next
		current.next = current.next.next
		return head
	
x = ListNode(1, ListNode(2))
x = Solution().removeNthFromEnd(x, 1)
while(x):
	print(x.val)
	x = x.next