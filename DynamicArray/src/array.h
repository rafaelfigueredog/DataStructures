typedef struct array {
	int size;
	int max;
	int *v;
} Array;


Array* create(); 

void pushback(Array* arr, int data); 

int pop(Array* arr, int index); 

int set(Array *arr, int index, int value);

int get(Array* arr, int index);

int size(Array* arr); 

void show(Array* arr); 

void resize(Array* arr); 

