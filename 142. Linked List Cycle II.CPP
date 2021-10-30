class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(!head ){
            return NULL;
        }
        if(head->next==NULL){
            return NULL;
        }
      
        
       ListNode *slow=head;
        ListNode *fast=head;
    while(slow && fast && fast->next){
        slow=slow->next;
        fast= fast->next->next;
        if (slow==fast){
            break;
        }  
    }
       if(slow==fast){
       ListNode *temp=head;
        while(temp!=slow){
            temp=temp->next;
            slow=slow->next;
        }
        return slow;
       }
        else{
            return NULL;
        }
    }
    
};
