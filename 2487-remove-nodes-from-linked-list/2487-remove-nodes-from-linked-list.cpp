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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {

        head = reverseList(head);

        int maxNode = -1;
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {

            maxNode = max(maxNode, curr->val);

            if (curr->val < maxNode) {
                prev->next = curr->next;

                ListNode* temp = curr;
                curr = curr->next;
                
            }
            else {
                prev = curr;
                curr = curr->next;
            }
        }

        return reverseList(head);
    }
};