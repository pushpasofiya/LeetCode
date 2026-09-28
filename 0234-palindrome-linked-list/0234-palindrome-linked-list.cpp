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

        ListNode*temp=head;
        vector<int>value;
        while(temp!=NULL)
        {
            value.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        ListNode*pre=NULL;
        while(temp!=NULL)
        {
            ListNode*next=temp->next;
            temp->next=pre;
            pre=temp;
            temp=next;
        }
        int i=0;
        while(pre!=NULL)
        {
            if(value[i]!=pre->val)
            {
                return false;
            }
            i++;
            pre=pre->next;
        }
        return true;
    }
};