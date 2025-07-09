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
    ListNode* findMid( ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while( fast!= NULL && fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;

    }

    //Merge function
    ListNode* merge2List(ListNode* firstNode, ListNode* lastNode){
        ListNode* l1 = firstNode;
        ListNode* l2 = lastNode;
        ListNode* dNode = new ListNode(-1);
        ListNode* temp = dNode;
        while(l1!=NULL && l2!=NULL){
            if( l1->val < l2->val){
                temp->next = l1;
                temp = l1;
                l1 = l1->next;
            }
            else{
                temp->next = l2;
                temp = l2;
                l2 = l2->next;
            }
        }
        if(l1) temp->next = l1;
        else temp->next = l2;
        return dNode->next;
        
    }

    
    ListNode* sortList(ListNode* head) {
        if ( head == NULL || head->next == NULL){
            return head;
        }
        ListNode* midd = findMid(head);
        ListNode* firstNode = head;
        ListNode* lastNode = midd->next;
        midd->next = NULL;
        firstNode = sortList( firstNode);
        lastNode = sortList( lastNode );
        return merge2List( firstNode, lastNode);
    }
};