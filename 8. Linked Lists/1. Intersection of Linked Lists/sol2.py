# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

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
        # get lengths of 2 linked lists first
        length_A=self.getLength(A)
        length_B=self.getLength(B)
        longer_list=A if length_A>length_B else B
        shorter_list=B if length_A>length_B else A
        shorter_list_length=length_B if length_A>length_B else length_A
        delta=abs(length_A-length_B)
        for j in range(delta):
            longer_list=longer_list.next
        list_a=longer_list
        list_b=shorter_list
        for j in range(shorter_list_length):
            if (list_a==list_b):
                return list_a
            else:
                list_a=list_a.next
                list_b=list_b.next
