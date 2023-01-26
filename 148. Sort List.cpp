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
    ListNode* sortList(ListNode* head) {

        if((head==NULL)||(head->next==NULL))
            return head;


            ListNode* temp = head;
       vector<int>v;

       while(temp->next!=NULL)
       {
           v.push_back(temp->val);
           temp = temp->next;

       }

           v.push_back(temp->val);


       sort(v.begin(),v.end());

            ListNode* temp1 = head;

            int i =0;
            while(temp1->next!=NULL)
            {
                temp1->val = v[i];
                i++;
                temp1 = temp1->next;

                
            }
                temp1->val = v[i];


            return head;

        
    }
};
