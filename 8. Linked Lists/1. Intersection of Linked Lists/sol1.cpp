/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int getLength(ListNode* head){
    int count=0;
    ListNode* current_node=head;
    while (current_node !=NULL){
        count=count+1;
        current_node=current_node->next;
    }
    return count;
}
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    if(!A || !B) return NULL;
    int lenA=getLength(A);
    int lenB=getLength(B);
    int lenDiff = lenA - lenB;
    if(lenDiff > 0) {
        while(lenDiff != 0) {
            A = A->next;
            lenDiff--;
        }
    }
    else if(lenDiff < 0) {
        while(lenDiff != 0) {
            B = B->next;
            lenDiff++;
        }
    }
    while(A && B) {
        if(A == B)
            return A;
        A = A->next;
        B = B->next;
    }
    return NULL;
}
