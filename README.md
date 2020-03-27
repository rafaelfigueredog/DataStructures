# Data Structures 

- Dynamic Array Interface
~~~ C 
typedef struct array {
	int size;
	int max;
	int *v;
} Array;

Array* create();                            // init. array
void pushback(Array* arr, int data);        // add a value at final of aray
int erase(Array* arr, int index);           // remove a value by index
int set(Array *arr, int index, int value);  // change a value by index
int get(Array* arr, int index);             // access a value by index
int size(Array* arr);                       // return size of array
void show(Array* arr);                      // print the array
void resize(Array* arr);                    // change max size of array
~~~


- Stack (Based in Array Implementation) Interface

~~~ C 
typedef struct stack {
    int size;
    int max; 
    int *stack; 
} stack ; 

stack* create();                    // init. stack
void push(stack *stk, int number);  // add a value 
int pop(stack *stk, int *number);   // remove the top of stack
int top(stack *stk, int *number);   // return the top of stack
int empty(stack *stk);              // return a bool
int size(stack *stk);               // return size of stack
void resize(stack *stk);            // change max size of stack
~~~
