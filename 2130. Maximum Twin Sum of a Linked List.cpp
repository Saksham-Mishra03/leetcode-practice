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
    int pairSum(ListNode* head) {

        vector<int>v;

        ListNode* temp = head;
        while(temp)
        {
            v.push_back(temp->val);
            temp = temp->next;
        }

        int l = 0;
        int r  = v.size()-1;
        int sum = 0;
        int maxi = INT_MIN;
        while(l<r)
        {
            sum  = v[l]+v[r];
            maxi = max(maxi,sum);
            l++;
            r--;
        }
        return maxi;
        
    }
};
