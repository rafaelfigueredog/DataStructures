#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define MAX 100

Array* create () {
	Array* arr = (Array*) malloc(sizeof(Array));
	arr->size = 0;
	arr->max = 100;
	arr->v = (int*) malloc(arr->max*sizeof(int));
	return arr; 
}

int removeElement(Array* arr, int index) {
	if (arr->size == 0) return 0; 
	if ( index < 0 || index >= arr->size) return 0; 
	arr->size--;
	for (int i = index; i < arr->size; i++) {
		arr->v[i] = arr->v[i+1]; 
	}
	return 1; 
}

void addElement(Array* arr, int data) {

	if (arr->size == 0) {
		arr->v[arr->size] = data; 
		arr->size++; 
		return;  
	}

	if (arr->size == arr->max) {
		resize(arr);
	}
	int i = arr->size; 
	arr->v[i] = data;
	arr->size++; 
}


int changeElement(Array *arr, int index, int value) { 
	if ( index < 0 || index >= arr->size ) return 0; 
	arr->v[index] = value; 
	return 1;
} // return a bolean

int size(Array* arr) {
	return arr->size;
}

int access(Array* arr, int index) {
	if (index >= 0 && index < arr->size) return arr->v[index];
	else return -1; 
}

void resize(Array* arr) { 
	arr->max *= 2; 
	arr->v = (int*) realloc(arr->v, arr->max*sizeof(int)); 
}

void printArray(Array* array) {
	printf("[ "); 
	for (int i = 0; i < array->size; i++) {
		printf("%d ", access(array, i)); 
	}
	printf("]\n"); 

} 


