/*
 * Leetcode-234 . Palindrome Linked List
 *
 * @Prerna(1910990964)
 *
 * Learned how to reverse linked list in this question
 *
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


bool isPalindrome(struct ListNode* head){

    struct ListNode* slow = head;
    struct ListNode* fast = head;

    //finding middle of linked list
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    //reversing the second half of linkedlist
    struct ListNode* previous = NULL;
    struct ListNode* next;
    struct ListNode* current = slow;
    while(current != NULL) {
        next = current -> next;
        current -> next = previous;
        previous = current;
        current = next;
    }
    fast = head;
    while(previous != NULL) {
        if(fast->val != previous->val) {
            return false;
        }
        fast = fast->next;
        previous = previous->next;
    }
    return true;
}
