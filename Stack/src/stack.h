typedef struct stack {
    int size;
    int max; 
    int *stack; 
} stack ; 


int create(stack **stk);

int push(stack *stk, int number); 

int pop(stack *stk, int *number); 

int top(stack *stk, int *number); 

int empty(stack *stk); 

int size(stack *stk); 

int resize(stack *stk); 

void show(stack *stk); 