#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define MAX 100

Array* create (int size) {
	Array* arr = (Array*) malloc(sizeof(Array));
	arr->n = 0;
	arr->max = MAX;
	arr->v = (int*) malloc(arr->max*sizeof(int));
	for (int i = 0; i < size; i++) {
		arr->v[i] = 0; 
		arr->n++; 
	}
	return arr; 
}

void insert(Array* arr, int data) {

	if (arr->n == 0) {
		arr->v[arr->n] = data; 
		arr->n++; 
		return;  
	}

	if (arr->n == arr->max) {
		resize(arr);
	}
	int i = arr->n; 
	arr->v[i] = data;
	arr->n++; 
}


int changeElement(Array *arr, int index, int value) { 
	if ( index < 0 || index >= arr->n ) return 0; 
	arr->v[index] = value; 
	return 1;
} // return a bolean

int size(Array* arr) {
	return arr->n;
}

int access(Array* arr, int index) {
	if (index >= 0 && index < arr->n) return arr->v[index];
	else return -1; 
}

void resize(Array* arr) { 
	arr->max *= 2; 
	arr->v = (int*) realloc(arr->v, arr->max*sizeof(int)); 
	
}

void printArray(Array* array) {
	printf("[ "); 
	for (int i = 0; i < array->n; i++) {
		printf("%d ", access(array, i)); 
	}
	printf("]\n"); 

} 


