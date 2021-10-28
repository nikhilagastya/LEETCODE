/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void inshead(ListNode* &head,int val){
        ListNode *n= new ListNode(val);
        n->next=head;
        head=n;
}
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=head;
        ListNode *n=NULL;
        while(temp!=NULL){
            
            inshead(n,temp->val);
            temp=temp->next;
}
        return n;
    }
};
