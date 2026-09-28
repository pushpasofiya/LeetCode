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
    ListNode* removeElements(ListNode* head, int val) {

        // Step 1: Remove matching nodes from the beginning
        while (head != NULL && head->val == val) {
            ListNode* del = head;
            head = head->next;
            delete del;
        }

        // If all nodes were removed
        if (head == NULL) {
            return NULL;
        }

        // Step 2: Handle nodes after the head
        ListNode* temp = head;

        while (temp->next != NULL) {

            if (temp->next->val == val) {

                ListNode* del = temp->next;
                temp->next = temp->next->next;
                delete del;

                // DON'T move temp
            }
            else {
                // No deletion → move forward
                temp = temp->next;
            }
        }

        return head;
    }
};