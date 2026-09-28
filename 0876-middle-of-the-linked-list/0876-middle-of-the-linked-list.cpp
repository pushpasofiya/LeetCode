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
        ListNode*temp=head;
        ListNode*nexu=NULL;
        int len=0;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        int avg=len/2;
        temp=head;
        if(avg%2!=0)
        {
            int check=0;
            while(temp!=NULL)
            {
                if(check==avg)
                {
                    nexu=temp;
                    break;
                }
                else
                {
                    check++;
                    temp=temp->next;
                }
            }
        }
         else if(avg%2==0)
        {
            int check=0;
            while(temp!=NULL)
            {
                if(check==avg)
                {
                    nexu=temp;
                    break;
                }
                else
                {
                     check++;
                     temp=temp->next;
                }
            }
        }
        return nexu;
    }
    
};