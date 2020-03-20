#include <stdio.h>
#include "array.h"

int main() {
    Array* array = create(0); 
    printArray(array);
    for (int i = 0; i < 10; i++) {
        insert(array, 1);  
        printArray(array);
    }
}