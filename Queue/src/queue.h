typedef struct node Node; 
typedef struct queue Queue; 

struct node {
    int data; 
    Node* next; 
};

struct queue {
    Node* head; 
    Node* tail; 
};


Queue* create(); 

void enqueue(Queue *queue, int data); 

int dequeue(Queue *queue, int* number); 

int empty(Queue *queue); 