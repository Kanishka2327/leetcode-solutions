class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head; 
        int cnt =0;

        if(head == NULL || head ->next == NULL){ //handle edge case
            return head;
        }
        while(temp->next != NULL){ //traverse whole LL
            temp = temp ->next;
            cnt ++; //compute the count
        }
        cnt ++; //inc to LL length 
        k = k%cnt; //compute k if k is very big 

        temp ->next = head; //condition 1 , point tails next to head
        for(int i=0; i<cnt -k;i++){ //loop till the new tail
            temp = temp->next;
        }
        ListNode* res = temp->next; // res node is next of temp(new tail node)
        temp->next = NULL; //disconnect new tail point to NULL

        return res;
    }
};