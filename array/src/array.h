typedef struct array {
	int size;
	int max;
	int *v;
} Array;


Array* criar(); 

int remover(Array* arr, int index); 

int atualizar(Array *arr, int index, int value);

void inserir(Array* arr, int data); 

int get(Array* arr, int index);

int size(Array* arr); 

void mostrar(Array* arr); 

void realocar(Array* arr); 

