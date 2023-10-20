class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* current = head;
        ListNode* newHead = nullptr;
        ListNode* before = nullptr;

        while(current != nullptr){
            if(current->val == val){
                if(before != nullptr){
                  before->next = current->next; 
                }
            }else {
              if(newHead == nullptr){                
                newHead = current;          
              }
                before = current;
            }
            current = current->next;           
        }
        return newHead;
    }
};
