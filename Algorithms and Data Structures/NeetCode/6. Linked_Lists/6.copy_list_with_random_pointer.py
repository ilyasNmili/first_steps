from typing import *

# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random


class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        my_dict = {}
        curr = head
        #1: create new nodes and assigned it to the original one.
        if not head:
            return None
        while(curr):
            my_dict[curr] = Node(curr.val)
            curr = curr.next
        
        curr = head
        while(curr):
            if(curr.next):
                my_dict[curr].next = my_dict[curr.next]
            if(curr.random):
                my_dict[curr].random = my_dict[curr.random]
            curr = curr.next
        return my_dict[head]
        