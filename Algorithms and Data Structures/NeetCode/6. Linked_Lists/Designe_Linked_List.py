class ListNode:
    def __init__(self, val = 0, next = None):
        self.val = val
        self.next = next

class MyLinkedList:

    def __init__(self):
        self.head = None
        self.size = 0

    def get(self, index: int) -> int:
        if (index < 0 or index >= self.size):
            return -1
        curr = self.head
        for i in range(index):
            curr = curr.next
        return curr.val
        

    def addAtHead(self, val: int) -> None:
        new = ListNode(val)
        new.next = self.head
        self.head = new
        self.size += 1

    def addAtTail(self, val: int) -> None:
        self.addAtIndex(self.size, val)

    def addAtIndex(self, index: int, val: int) -> None:
        if (index < 0 or index > self.size):
            return
        if index == 0:
            self.head = ListNode(val, self.head)
        curr = self.head
        for i in range(index - 1):
            curr = curr.next
        new = ListNode(val)
        new.next = curr.next
        curr.next = new
        self.size += 1
            
    def deleteAtIndex(self, index: int) -> None:
        if (index < 0 or index >= self.size):
            return
        if (index == 0):
            self.head = self.head.next
            self.size -= 1
            return 
        curr = self.head
        for i in range(index - 1):
            curr = curr.next
        curr.next = curr.next.next
        self.size -= 1