/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ptrA= headA, *ptrB = headB;

        //loop till ptrA matches ptrB
        while(ptrA != ptrB){  

            // If ptrA reaches the end, start from headB
            ptrA = (ptrA == NULL) ?headB: ptrA->next;

            // If ptrB reaches the end, start from headA
            ptrB = (ptrB == NULL) ? headA: ptrB->next;
        }
        return ptrA;// Can be either the intersection node or nullptr
    }
};