class Node:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


# Please do not change code above.


def deleteLast(list: Node) -> Node:
    # Write your code here
    t=Node()
    t=list
    t1=Node()
    t1=t
    while t.next!=None:
        t1=t
        t=t.next
    t1.next=None
    return list
    pass
