/* Leetcode-142 LinkedList Cycle II
 * 
 * @Prerna(1910990964)
 *
 * Assignment-6 ques 10 
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL)
        return NULL;
    
    struct ListNode* slow  = head;
    struct ListNode* fast  = head;
    struct ListNode* temp = head;
    
    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {                      
            while(slow != temp) {               
                slow  = slow->next;
                temp = temp->next;
            }
            return temp;
        }
    }
    return NULL;                                 
}
