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
    ListNode* deleteMiddle(ListNode* head) {

        ListNode* temp = head;
        ListNode* temp1 = head;
        ListNode* temp2 = head;

            if (head -> next == nullptr)
            return nullptr;

        int count = 1;
        while(temp->next!=NULL)
        {
            count++;
            temp = temp->next;
        }
        int x;
        
        x = count/2;
        for(int i = 0;i<x-1;++i)
        {
            temp1 = temp1->next;
        }

      
        temp2 = temp1->next;
        temp1->next = temp1->next->next;
        
        
        return head;


    }
};
