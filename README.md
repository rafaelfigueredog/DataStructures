# Estrutura de Dados e Algoritmos

Para ultilizar esse repositório no linux basta seguir as instruções:

1. clone o repositório. 

~~~console
$ git clone https://github.com/rafaelfigueredog/DataStructures.git
~~~

2. Acesse o diretório da estrutura de dados desejada, 
por exemplo:

~~~console
$ cd DataStructures/DynamicArray/
~~~

3. Execute o seguinte comando apenas uma vez;  
~~~console
$ chmod u+r+x run.sh 
~~~

4. Execute o comando abaixo sempre que fizer alterações ou quiser executar o programa; 
~~~console
$ ./run.sh 
~~~


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

- SinglyLinkedList Interface

~~~C
typedef struct node Node; 
typedef struct linkedlist List; 

struct node {
    int data; 
    Node *next; 
};

struct linkedlist  {
    Node *head; 
};

List* create(); 
Node* pushback(Node *head, int data); 
Node* pushfront(Node *head, int data); 
Node* removeback(Node *head); 
Node* removefront(Node *head); 
int size(Node *head); 
int empty(Node *head); 
void show(Node *head); 
~~~
