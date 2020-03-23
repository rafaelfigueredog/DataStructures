typedef struct array {
	int size;
	int max;
	int *v;
} Array;


Array* create(); 

int removeElement(Array* arr, int index); 

void addElement(Array* arr, int data); 

int size(Array* arr); 

int access(Array* arr, int index);

void printArray(Array* arr); 

void resize(Array* arr); 

int changeElement(Array *arr, int index, int value);