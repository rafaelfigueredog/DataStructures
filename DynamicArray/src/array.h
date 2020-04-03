typedef struct array {
	int size;
	int max;
	int *v;
} Array;


int init(Array** arr);

int pushback(Array* arr, int value); 

int erase(Array* arr, int index); 

int set(Array* arr, int value, int index);

int get(Array* arr, int *value, int index);

int size(Array* arr); 

int resize(Array* arr); 

int show(Array* arr); 