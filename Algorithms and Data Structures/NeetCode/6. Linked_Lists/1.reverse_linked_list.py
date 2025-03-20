
from typing import *

# Definition for singly-linked list.
class ListNode:
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next


class Solution:
	def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
		current = head
		previous = None
		while (current):
			tmp = current.next
			current.next = previous
			previous = current
			current = tmp
			
		return previous
	

x = ListNode(1, ListNode(2, ListNode(3)))
x = Solution().reverseList(x)
while(x):
	print(x.val)
	x = x.next