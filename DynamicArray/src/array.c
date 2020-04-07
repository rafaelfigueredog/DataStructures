#include <stdio.h>
#include <stdlib.h>
#include "array.h"

int init(Array** array) {
    Array* arr = (Array*) malloc(sizeof(Array));
	if ( !arr ) return 0;
    arr->size = 0;
    arr->max = 1;
    arr->v = (int*) malloc(arr->max*sizeof(int));
    if (! (arr->v) ) return 0;
    *array = arr; // update the reference
	return 1; 
}

int erase(Array* arr, int index) {
	if ( !arr ) return 0;
	if (arr->size == 0) return 0; 	
	if ( index < 0 || index >= arr->size) return 0; 
	arr->size--;
	for (int i = index; i < arr->size; i++) {
		arr->v[i] = arr->v[i+1]; 
	}
	return 1; 
}

int pushback(Array* arr, int value) {
    if (!arr) return 0;
	if (arr->size == arr->max) {
		if ( resize(arr) ) {
			arr->v[arr->size] = value; 
			arr->size++;
			return 1; 
		}
		return 0; 
	}
	arr->v[arr->size++] = value;
	return 1;
}


int set(Array* arr, int value, int index ) { 
	if (!arr) return 0; 
	if ( index < 0 || index >= arr->size ) return 0; 
	arr->v[index] = value; 
	return 1;
} 

int get(Array* arr, int *value, int index) {
	if (!arr) return 0; 
	if (index >= 0 && index < arr->size) {
		*value = arr->v[index]; 
		return 1; 
	}
	value = NULL;
	return 0; 
}

int resize(Array* arr) { 
	if (!arr) return 0; 
	arr->max *= 2; //  Amortized Analysis Banker's Method
	arr->v = (int*) realloc(arr->v, arr->max*sizeof(int));
	if ( !arr->v ) return 0; 
	return 1; 
}

// for tests with amortized analysis
int getCapacity(Array* arr) { 
	if (!arr) return 0; 
	return arr->max; 
}

int getSize(Array* arr) {
	if (!arr) return 0; 
	return arr->size;
}

int show(Array* arr) {
	if (!arr) return 0; 
	printf("[ "); 
	for (int i = 0; i < arr->size; i++) {
		int v;
		get(arr, &v, i); 
		printf("%d ", v); 
	}
	printf("]\n"); 
	return 1; 
} 

