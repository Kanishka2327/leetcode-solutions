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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0); //dummy node extra 
        ListNode* res = result; //POINTER to  traverse 

        int carry =0; 

        while(l1 != nullptr || l2 != nullptr || carry != 0){ //loop continue as long as node is left
        int sum = carry; 
        //it will check all the if - if , next if , int num
        if(l1 != nullptr){ //going to l1
            sum += l1->val; //adding node into sum
            l1= l1->next; //one node inc then moving to l2
        } 
        if(l2 != nullptr){  //same for l2 and move out of if 
            sum += l2 ->val;
            l2 = l2->next;
        }

        int num = sum %10; // let us say 7 is the sum then 7%10 = 7
        carry = sum/10; // 7/10 =0
        res ->next = new ListNode(num); // putting val of num in node 
        res = res ->next; //inc res
        
        }

        return result->next;
    }
};