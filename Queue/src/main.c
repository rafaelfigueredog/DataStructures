#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main () {

    Queue* queue = create(); 

    int v[5] = {};    
    
    enqueue(queue, 1); 
    enqueue(queue, 2); 
    enqueue(queue, 3); 
    enqueue(queue, 4); 
    enqueue(queue, 5); 

    // dequeue and store the v[i] value dequeued;

    for (int i = 0; i < 5; i++) {
        dequeue(queue, &v[i]);
        printf("%d ", v[i]); 
    }
    printf("\n"); 
    
    return 0; 
}