/*
 * Leetcode-19 Remove Nth Node From End of List
 *
 * @Prerna(1910990964)
 *
 * converted this problem to remove nth element from start
 *
 * Assignment-6 ques-6
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    // finding the length of ll
    int length = 0;
    struct ListNode* temp = head;
    while(temp != NULL) {
        length ++;
        temp = temp->next;
    }

    //length - n + 1 would be the element from the beggining which we want to delete
    n = length - n + 1;
    struct ListNode* previous = head;
    struct ListNode* current = head->next;
    if(n == 1) {
        head = head->next;
        return head;
    }
    int curr_is_at = 2;
    while(current != NULL) {
        if(curr_is_at == n) {
            previous->next = current->next;
            return head;
        }
        previous = previous->next;
        current = current->next;
        curr_is_at++;
    }
    return head;

}
