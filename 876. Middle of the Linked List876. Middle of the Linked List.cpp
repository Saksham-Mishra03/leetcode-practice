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
    ListNode* middleNode(ListNode* head) {
        int count =1; 
        ListNode* temp = head;
        while(temp->next!=NULL)
        {
            count++;
            temp = temp->next;
        }
        int i = 0;
        while(i!=count/2)
        {
            head = head->next;
            i++;
        }
        return head;

        
        
    }
};
