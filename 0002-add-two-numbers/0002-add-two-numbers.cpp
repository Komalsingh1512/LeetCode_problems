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
       ListNode *temp = new ListNode(0);
       ListNode *curr= temp;
       int carr=0;
       while(l1 !=NULL || l2 !=NULL){
        int sum = carr;
        if(l1){
            sum +=l1->val;
            l1= l1->next;
        }
        if(l2){
            sum +=l2->val;
            l2= l2->next;
        }
        // here both l1 and l2 will add one-one values 
        carr= sum /10; //it will give 7/10=0
        curr->next = new ListNode(sum%10); // it will give 7
        curr=curr->next;//now curr =7, so sum will be o to 7 now
       }
       if(carr){
            curr->next = new ListNode(carr); // aagar carry backta hai to usko curr ke next me add kar do 
        }
       return temp->next;
    }
};