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

