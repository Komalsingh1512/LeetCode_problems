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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev= NULL;
        ListNode *curr= head;
        while(curr !=NULL){
            ListNode *temp = curr->next;// after stroring curr then it sill store null
            curr->next= prev;// it will firstly store null 
            prev= curr; // it will store curr value 
            curr=temp; //it will store what temp will store 
        }
        return prev; //it will give all the values not only 40 beacuse every node is linked to each other and prev is stroing the address not the single value 
    }
};