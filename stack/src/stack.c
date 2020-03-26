#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#define MAX 100

stack* create() {
    stack *stk = (stack*) malloc(sizeof(stack)); 
    stk->max = MAX; 
    stk->size = 0; 
    stk->stack = (int*) malloc(stk->max*sizeof(int)); 
    return stk;
}

void push(stack *stk, int number) {
    if (stk->size == stk->max) resize(stk);
    stk->stack[stk->size] = number;
    stk->size++;  
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

void resize(stack* stk) { 
    stk->max *= 2; 
    stk->stack = (int*) realloc(stk->stack, stk->max*sizeof(int)); 
}

