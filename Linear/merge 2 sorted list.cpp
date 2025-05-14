class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* returnnode = new ListNode( INT_MIN);
            ListNode* headnode = returnnode;
            while(list1 != NULL && list2 != NULL ){
                if(list1->val <= list2->val ){
                    returnnode->next = list1;
                    list1 = list1->next;
                }
                else{
                    returnnode->next = list2;
                    list2 = list2 ->next;
                }
                returnnode = returnnode ->next;
            }
            //append the remaining list
            if(list1 == NULL){
                returnnode ->next = list2;
            }
            else if(list2 == NULL){
                returnnode->next = list1;
            }
            return headnode->next;
    }
};