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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* head = NULL;
        ListNode* tail = NULL;

        int carry = 0;

        while (l1 != NULL || l2 != NULL) {

            int sum = (l1 ? l1->val : 0)
                    + (l2 ? l2->val : 0)
                    + carry;

            int digit = sum % 10;
            carry = sum / 10;

            ListNode* new_node = new ListNode(digit);

            
            if (head == NULL) {
                head = new_node;
                tail = new_node;
            }
            
            else {
                tail->next = new_node;
                tail = new_node;
            }

            
            if (l1 != NULL)
                l1 = l1->next;

            if (l2 != NULL)
                l2 = l2->next;
        }

        
        if (carry != 0) {
            ListNode* new_node = new ListNode(carry);
            tail->next = new_node;
            tail = new_node;
        }

        return head;
    }
};