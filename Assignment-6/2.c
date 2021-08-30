/* Queues implimentation using linked lists (ll)
 *
 * @Prerna(1910990964)
 *
 * Assignment-6 question-2
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;
struct Node* tail = NULL;
//insertion at end takes O(n) operations in normal case
//thatswhy we are declaring tail pointer to access last element in O(1) so that we can insert at end
//and deleting from begining is simply O(1).


void enqueue(int element) {
    //creating a node that we will be inserting at end of ll.
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));

    temp->data = element;
    temp->next = NULL;

    if(head == NULL && tail == NULL) {
    	//inserting in an empty queue
	head = temp;
	tail = temp;
	return;
    }

    tail->next = temp;
    tail = temp;
}

void dequeue() {
    if(head == NULL) {
    	printf("ERROR: queue is empty");
	return;
    }
    if(head == tail){
    	//means queue has only one element
	head = NULL;
	tail = NULL;
	return;
    }
    //
    head = head->next;

}

int top() {
    if(head == NULL) {
    	printf("Queue is empty");
        return INT_MIN;
    }
    return head->data;
}

bool is_empty() {
    if(head == NULL) {
    	return true;
    }
    return false;
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    printf("top : %d",top());//should print 2
    if(is_empty()) {
   	printf("Queue is empty"); 
    }
    else {
    	printf("Queue is not empty");
    }

}
