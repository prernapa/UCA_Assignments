/* implementing deque(double ended queue) using ll
 *
 * @Prerna(1910990964)
 *
 * Assignment-6 ques 3
 *
 */

#include<stdio.h>
#include<limits.h>
#include<bool.h>
#include<stdlib.h>

//structure of node of ll 
struct node{
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* tail = NULL;

void add_at_head(int element) {
    //creating a node that will be added at the start(head)
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = element;
    temp->next = NULL;

    if(head == NULL && tail == NULL) {
	//if deque is empty then we will start the ll with temp element and head will be same as tail
    	head = temp;
	tail = temp;
    	return;
    }

    temp->next = head;
    head = temp;
}

void add_at_end(int element) {

}

int main() {

}
