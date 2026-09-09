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
    bool hasCycle(ListNode *head) {
        //sare node aapne previous node ke address ko store karte hai, to hame check karna hai kya last node kisi bich ke node ko store kar rahi aagar kar rahi to cycle ban jayega, 

        //ListNode* slow = head; jab v slow or fast lete hai uske matlab ye hota hai ki slow ek step chalegi or fast do step 
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) { // we will do next next till the time we get fast = slow
                return true;
            }
        }

        return false;
    }
};