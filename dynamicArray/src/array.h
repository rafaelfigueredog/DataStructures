typedef struct array {
	int size;
	int max;
	int *v;
} Array;


Array* criar(); 

int remover(Array* arr, int index); 

void inserir(Array* arr, int data); 

int set(Array *arr, int index, int value);

int get(Array* arr, int index);

int size(Array* arr); 

void mostrar(Array* arr); 

void realocar(Array* arr); 

