#include "linkedList.h"
#include <stdlib.h>
#include <stdio.h>

int create(List **linkedlist) {
    List *list = (List*) malloc(sizeof(List)); 
    if (!list) return 0;
    list->head = NULL;  
    *linkedlist = list; 
    return 1; 
}

int pushback(Node **head, int data) {
    Node *newNode = (Node*) malloc(sizeof(Node)); 
    if (!newNode) return 0;
    newNode->data = data; 
    newNode->next = NULL; 
    while (*head) {
        head = &((*head))->next; 
    }
    newNode->data = data; 
    newNode->next = NULL; 
    *head = newNode; 
    return 1; 
}

int pushfront(Node **head, int data) {
    Node *newNode = (Node*) malloc(sizeof(Node)); 
    if (!newNode) return 0;
    newNode->data = data; 
    newNode->next = *head;
    *head = newNode; 
    return 1;
} 

int removeback(Node **head) {
    // Lista Vazia
    if ( empty(*head) ) return 0;  

    Node* toDelete; 

    // There is just one node. 
    if ( (*head)->next == NULL ) {
        toDelete = *head; 
        *head = NULL;
        free(toDelete);  
        return 1; 
    }

    // other cases; 
    Node* it = *head;  
    while (it->next->next) it = it->next; 
    toDelete = it->next; 
    it->next = NULL; 
    free(toDelete); 
    return 1; 
}


int removefront(Node **head) {
    if ( empty(*head) ) return 0; 
    Node* toDelete = (*head);  
    *head = toDelete->next;
    free(toDelete); 
    return 1; 
} 


int size(Node *head) {
    if ( empty(head) ) return 0; 
    return 1 + size(head->next); 
}

void show(Node *head) {
    if (head) {
        printf("%d ", head->data); 
        show(head->next); 
    }
}

int empty(Node *head) {
    return head == NULL; 
}

