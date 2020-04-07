typedef struct node Node; 
typedef struct linkedlist List; 

struct node {
    int data; 
    Node *next; 
};


struct linkedlist  {
    Node *head; 
};


int create();  

int pushback(Node **head, int data); 

int pushfront(Node **head, int data); 

int removeback(Node **head); 

int removefront(Node **head); 

int size(Node *head); 

int empty(Node *head); 

void show(Node *head); 

