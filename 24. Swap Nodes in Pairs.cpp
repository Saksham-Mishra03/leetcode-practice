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

        if(head==NULL ||head->next==NULL)
        return head;

        ListNode* temp1 = head->next;
        ListNode* temp2 = head;



        while(temp1&&temp1->next)
        {
            swap(temp1->val,temp2->val);
            temp1 = temp1->next->next;
            temp2 = temp2->next->next;
        }
        if(temp1)
        swap(temp1->val,temp2->val);


        return head;




        
    }
};
