typedef struct stack {
    int size;
    int max; 
    int *stack; 
} stack ; 


stack* create();

void push(stack *stk, int number); 

int pop(stack *stk, int *number); 

int top(stack *stk, int *number); 

int empty(stack *stk); 

int size(stack *stk); 

void resize(stack *stk); 