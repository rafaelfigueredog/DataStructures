#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int create(stack **stk) {
    stack *s = (stack*) malloc(sizeof(stack)); 
    if (!s) return 0; 
    s->max = 1; 
    s->size = 0; 
    s->stack = (int*) malloc(s->max*sizeof(int)); 
    *stk = s; 
    return 1; 
}

int push(stack *stk, int number) {
    if (stk->size == stk->max) {
        if ( !resize(stk) ) return 0;  
    }
    stk->stack[stk->size] = number;
    stk->size++; 
    return 1;      
} 

int pop(stack *stk, int* number) {
    if ( empty(stk) ) {
        number = NULL; 
        return 0; 
    } 
    *number = stk->stack[--stk->size];
    return 1; 
} 

int empty(stack *stk) {
    return stk->size == 0;  
}

int top(stack *stk, int *number) {
    if ( empty(stk) ) {
        number = NULL; 
        return 0; 
    }
    *number = stk->stack[stk->size-1];
    return 1;
}

int size(stack *stk) {
    return stk->size; 
}

int resize(stack *stk) { 
    stk->max *= 2; 
    stk->stack = (int*) realloc(stk->stack, stk->max*sizeof(int)); 
    if ( !(stk->stack) ) return 0; 
    return 1; 
}


void show(stack *stk) {
    if (!stk) return; 
    if ( empty(stk) ) {
        printf("\nEmpty\n");
        return; 
    } 
    for (int i = stk->size-1; i >= 0; i--) {
        if (i == stk->size-1) printf(" %d < Top\n", stk->stack[i]); 
        else printf(" %d\t\n", stk->stack[i]); 
    }
}
