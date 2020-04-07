#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

#define MAX 20

int main () {

    Queue* queue = create(); 

    int v[MAX] = {};    
    
    
    for (int i = 0; i < MAX; i++) {
        enqueue(queue, i+1); 
    }
    
    // dequeue and store the v[i] value dequeued;

    for (int i = 0; i < MAX; i++) {
        dequeue(queue, &v[i]);
        printf("%d ", v[i]); 
    }
    printf("\n"); 
    
    return 0; 
}