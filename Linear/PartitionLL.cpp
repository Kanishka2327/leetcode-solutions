class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* small = new ListNode(0); //make two diff LL
        ListNode* large = new ListNode(0); //small LL for smaller no. & same for large LL

        ListNode* smallptr = small; //make two pointers to traverse in repective LL
        ListNode* largeptr = large;

        while(head != NULL){
            if(head->val < x){ //if smaller 
                smallptr ->next =head;
                smallptr = smallptr->next;
            }
            else{               // if larger 
                largeptr->next = head;
                largeptr = largeptr->next;
            }
            head = head->next;
        }
        //merging both LL
        smallptr ->next = large->next;
        largeptr ->next = NULL;
        
        return small->next;
    }
};