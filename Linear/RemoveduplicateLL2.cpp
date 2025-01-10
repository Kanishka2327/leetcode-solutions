class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0); //new node dummy
        dummy->next = head; //pointing to head

        ListNode* curr = head;
        ListNode* prev = dummy;

        while(curr != NULL){

            if(curr->next != NULL && curr->val == curr->next->val){ //if curr val equal to its next then

                while(curr->next != NULL && curr->val == curr->next->val){ //run a loop and
                    curr = curr->next; //inc the val of curr until all duplicate finish
                }
                prev ->next = curr->next; //move prev also
            }
                
                else{     
                prev = prev->next; //else simply inc prev
                }
                curr = curr->next; //inc curr every time
            }
        
        return dummy->next;
    }
    
};