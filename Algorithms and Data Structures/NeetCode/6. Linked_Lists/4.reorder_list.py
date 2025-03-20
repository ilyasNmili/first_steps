from typing import *

# Definition for singly-linked list.
class ListNode:
	def __init__(self, val=0, next=None):
		self.val = val
		self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        if head == None:
            return None
        #find the middle:
        slow, fast = head, head
        while(fast and fast.next):
            slow = slow.next
            fast = fast.next.next
        #reverse the second part:
        curr, prev = slow, None
        while(curr):
            tmp = curr.next
            curr.next = prev
            prev = curr
            curr = tmp
        #Merging:
        first, second = head, prev
        while (second.next):
            tmp1, tmp2 = first.next, second.next
            first.next = second
            second.next = tmp1
            first, second = tmp1, tmp2
        

        