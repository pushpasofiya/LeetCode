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

        int len = 0;
        ListNode* temp = head;

        while (temp != NULL)
        {
            len++;
            temp = temp->next;
        }

        // Only one node
        if (len == 1)
            return NULL;

        int avg = len / 2;

        temp = head;

        // Move to the node BEFORE the middle
        for (int i = 1; i < avg; i++)
        {
            if (temp->next != NULL)
            {
                temp = temp->next;
            }
        }

        ListNode* del = temp->next;
        temp->next = temp->next->next;

        delete(del);

        return head;
    }
};