#include <stdio.h>
#include "array.h"

int main() {
    Array* array = create(0); 
    printArray(array);
    for (int i = 0; i < 2; i++) {
        addElement(array, i+i);  
        printArray(array);
    }
    removeElement(array, 1); 
    printArray(array); 
}