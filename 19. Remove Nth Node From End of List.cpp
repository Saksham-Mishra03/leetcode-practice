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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

    struct ListNode* current;
    current = head;
    int count = 0;
    
    while(current != NULL)
    {
        current = current->next;
        count++;
    }
    
    current = head;
    if(count==n)
        return current->next;
    
    count = count-n-1;
    while(count--)
    {
        current = current->next;
    }
    
    current->next = current->next->next;
    
    return head;
    }
};
