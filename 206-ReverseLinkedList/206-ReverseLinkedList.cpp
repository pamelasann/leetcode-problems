// Last submission: 11/22/2023, 1:58:28 PM
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
        ListNode* previous = NULL;
        ListNode* current = head;

        // transvers all linked list
        while(current != NULL) {
            ListNode* forward = current->next; // save forward
            current->next = previous; // change pointer of current
            previous = current; // move previous
            current = forward; // move current
        }

        return previous; //return pointerto new head
    }
};