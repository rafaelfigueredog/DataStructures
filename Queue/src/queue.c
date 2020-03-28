#include "queue.h"
#include "stdlib.h"
#include "stdio.h"


Queue* create() {
    Queue* queue = (Queue*) malloc(sizeof(Queue)); 
    queue->head = NULL; 
    queue->tail = NULL; 
    return queue; 
}

void enqueue(Queue *queue, int data) {
    
    // create a new node; 
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data; 
    newNode->next = NULL;

    // insert a node at back of linked list.
    if (queue->tail == NULL) {
        queue->head = newNode;
        queue->tail = newNode; 
    } else {
        queue->tail->next = newNode; 
        queue->tail = newNode; 
    }
      
}

int dequeue(Queue *queue, int* number) {

    if (queue->head == NULL) {
        number = NULL; 
        return 0; 
    }
    Node* nodeToDelete = queue->head; 
    *number = nodeToDelete->data;  
    queue->head = nodeToDelete->next; 
    free(nodeToDelete); 
    return 1; 
} 

int empty(Queue *queue) {
    return queue->head == NULL && queue->tail == NULL; 
}