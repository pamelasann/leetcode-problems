// Last submission: 11/22/2023, 6:09:34 PM
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
        // best case in palindrome
        if(head->next == nullptr)
            return true;

        ListNode* forward = head;
        ListNode* current = head;
        ListNode* previous = NULL;
        // find mid of linked list
        // using 2 pointer approach
        while(forward && forward->next != NULL) {
            head = head->next;
            forward = forward->next->next;
            current->next = previous;
            previous = current; // update previous
            current = head; // update current
        }
        // in case length linked list is odd
        if(forward != NULL) {
            head = head->next;
        }
        // check for palindrome
        while(head != nullptr) {
            if(head->val != previous->val)
                return false;
            head = head ->next;
            previous = previous->next;
        }
        return true;
    }
};