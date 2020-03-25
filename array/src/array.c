#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define MAX 100

Array* criar () {
	Array* arr = (Array*) malloc(sizeof(Array));
	arr->size = 0;
	arr->max = 10;
	arr->v = (int*) malloc(arr->max*sizeof(int));
	return arr; 
}

int remover(Array* arr, int index) {
	if (arr->size == 0) return 0; 
	if ( index < 0 || index >= arr->size) return 0; 
	arr->size--;
	for (int i = index; i < arr->size; i++) {
		arr->v[i] = arr->v[i+1]; 
	}
	return 1; 
}

void inserir(Array* arr, int data) {
	if (arr->size == arr->max) realocar(arr);
	arr->v[arr->size] = data; 
	arr->size++;
}


int set(Array *arr, int index, int value) { 
	if ( index < 0 || index >= arr->size ) return 0; 
	arr->v[index] = value; 
	return 1;
} // return a bolean

int size(Array* arr) {
	return arr->size;
}

int get(Array* arr, int index) {
	if (index >= 0 && index < arr->size) return arr->v[index];
	else return -1; 
}

void realocar(Array* arr) { 
	arr->max *= 2; 
	arr->v = (int*) realloc(arr->v, arr->max*sizeof(int)); 
}

void mostrar(Array* array) {
	printf("[ "); 
	for (int i = 0; i < array->size; i++) {
		printf("%d ", get(array, i)); 
	}
	printf("]\n"); 
} 


