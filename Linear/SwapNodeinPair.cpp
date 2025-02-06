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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* n1 = head;
        ListNode* n2 = head->next;

        while(n1 != nullptr && n2 != nullptr){
            n1 ->next = n2 ->next;
            n2 ->next = n1;
            prev ->next =n2;
            prev = n1;
            n1 = n1->next;
            if(n1 != nullptr){
                n2 = n1 ->next;
            }else{
                n2 = nullptr;
            }
            
        }
        return dummy->next;
    }
};