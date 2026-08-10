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
    // here we are dividing left and right
    //here we are performing mege sort for everiny lists element , lists 0, list 1 ans list 2
    ListNode* Merge(ListNode* left, ListNode* right){
        ListNode *temp = new ListNode(0);
        ListNode* curr=temp;
        while(left && right){
            if(left->val <= right->val){
                curr->next= left;
                left= left->next;
            }else{
                curr->next = right;
                right= right->next;
            }
            curr= curr->next;
        }
        if(left != NULL){
            curr->next=left;
        }
        if(right != NULL){
            curr->next= right;
        }
        return temp->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
    ListNode* ans= lists[0];// firstly ans is storing 1,4,5
    for(int i =1; i<lists.size(); i++){
        ans = Merge(ans, lists[i]);// after performing the merge sort we are adding the lists 2 element in ans 
    }
    return ans;
    }

    //basically ham add karne se pehle sare element ko merge sort ki help se sort kar rahe hai uske baad usko ans me store karte ja rahe hai 
};