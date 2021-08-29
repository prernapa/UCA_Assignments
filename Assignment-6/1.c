/*
 * Implementing stack using linkedlist (ll)
 *
 * @Prerna(1910990964)
 *
 * Assignment-6 LinkedList question 1
 *
 */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>

struct Node{
    int data;
    struct Node* next;
};

//initilizing emplty ll
struct Node *top ;

void initializing_stack() {
    top = NULL;
}

void push(int element) {
    //creating a new node to push new element
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node*));

    //similar to insering node at begining of ll
    temp->data = element;
    temp->next = top;
    top = temp;
}

void pop() {
    struct Node* temp;
    if(top == NULL) {
        return ;
        //means stack is empty
    }
    temp = top;
    top = top->next;
    free(temp);
    //similar to deleting element from begining of ll
}

int peek() {
    if(top == NULL) {
        return INT_MIN;
    }
    return top->data;
}

bool is_empty() {
    if(top == NULL) {
        return true;
    }
    return false;
}

int main() {
    initializing_stack();
    push (1);
    push (2);
    push (3);
    push (4);
    pop ();
    pop ();
    printf("peek element is: %d",peek());
    pop();
    if(is_empty()) {
        printf("emptystack");
    }
    else {
        printf("stacknotempty");
    }
    pop();
     if(is_empty()) {
        printf("emptystack");
    }
    else {
        printf("stacknotempty");
    }

}

