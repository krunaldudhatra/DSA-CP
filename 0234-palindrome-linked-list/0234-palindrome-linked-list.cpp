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
    bool isPalindrome(ListNode* head) {
        vector<int> n;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            n.push_back(temp->val);
            temp=temp->next;
        }
        int s=0;
        int e=n.size()-1;
        while(s<=e)
        {
            if(n[s]!=n[e])
            {
                return false;
            }
            s++;
            e--;
            
        }
        return true;
        
    }
};