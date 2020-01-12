class Node:
    def __init__(self,data):
        self.val=data
        self.next=None
class SLL:
    def __init__(self):
        self.head=None
    def print_LL(self):
        current_node=self.head
        while (current_node is not None):
            print (current_node.val,end=' ')
            current_node=current_node.next

class Solution:
    # @param A : head node of linked list
    # @param B : head node of linked list
    # @return the head node in the linked list
    def getLength(self, head):
        count=0 # assuming non emopty LL
        current_node=head
        while(current_node is not None):
            count=count+1
            current_node=current_node.next
        return count
    def getIntersectionNode(self, A, B):
        if A is None or B is None:
            return None
        # get lengths of 2 linked lists first
        length_A, length_B=self.getLength(A), self.getLength(B)
        lenDiff=length_A-length_B
        if lenDiff>0:
            while(lenDiff!=0):
                A=A.next
                lenDiff=lenDiff-1
        else:
            while(lenDiff!=0):
                B=B.next
                lenDiff=lenDiff+1
        while(A and B):
            if A==B:
                return A
            else:
                A=A.next
                B=B.next
        return None


LL_obj=SLL()
LL_obj.head=Node(1)
n2=Node(2)
LL_obj.head.next=n2
n3=Node(4)
n2.next=n3
n4=Node(5)
n3.next=n4
n5=Node(6)
n4.next=n5
n6=Node(7)
n5.next=n6
LL_obj.print_LL()
LL_obj2=SLL()
LL_obj2.head=Node(1)
m2=Node(2)
LL_obj2.head.next=m2
m3=Node(3)
m2.next=m3
m4=Node(4)
m3.next=m4
m5=Node(100)
m4.next=m5
m6=Node(101)
m5.next=m6
m7=Node(102)
m6.next=m7
m7.next=n3
print ("\n")
LL_obj2.print_LL()
obj_sol=Solution()
intersect=obj_sol.getIntersectionNode(LL_obj2.head,LL_obj.head)
print ('\n')
print (intersect.val)

'''
Runtime: 148 ms, faster than 99.30% of Python3 online submissions for Intersection of Two Linked Lists.
Memory Usage: 27.9 MB, less than 100.00% of Python3 online submissions for Intersection of Two Linked Lists.
'''
