#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>

List* create() {
    List *list = (List*) malloc(sizeof(List)); 
    list->head = NULL;   
    return list; 
}

Node* pushback(Node *head, int data) {
    if (head == NULL) {
        Node *newNode = (Node*) malloc(sizeof(Node)); 
        newNode->data = data; 
        newNode->next = NULL; 
        head = newNode; 
    } else {
        head->next = pushback(head->next, data); 
    }
    return head; 
}

Node* pushfront(Node *head, int data) {
    Node *newNode = (Node*) malloc(sizeof(Node)); 
    newNode->data = data; 
    newNode->next = head;
    head = newNode; 
    return head;
} 

Node* removeback(Node *head) {
    
    // empty list
    if (head == NULL) return NULL; 

    // last value of list
    if (head->next == NULL) {
        free(head); 
        return NULL; 
    } 
    
    // return Null from the last value of list.
    head->next = removeback(head->next);
    return head; 
}


Node* removefront(Node* head) {
    if (head == NULL) return head; 
    else {
        Node* newHead = head->next;  
        free(head); 
        return newHead; 
    }
} 


int size(Node *head) {
    if ( empty(head) ) return 0; 
    return 1 + size(head->next); 
}

void show(Node *head) {
    if (head != NULL) {
        printf("%d ", head->data); 
        show(head->next); 
    }
}

int empty(Node *head) {
    return head == NULL; 
}

