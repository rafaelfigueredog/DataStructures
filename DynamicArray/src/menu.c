#include <stdio.h>
#include "array.h"


void menuArray() {

    Array* array = create(); 
    int option; 
    int i, keep; 
    int v; 

    keep = 1; 

    while (keep) {

        printf("\n\t\tArray\n\n"); 
        printf("1. PushBack\n");
        printf("2. Set\n");
        printf("3. Remove\n");
        printf("4. Get\n");
        printf("5. Show\n");
        printf("6. Size\n");
        printf("0. Exit\n");
     

        while (1) {
            printf("\nDigite: ");
            scanf("%d", &option);
            if (option >= 0 && option <= 6) break; 
            else  printf("\nOpção Invalida\n");
        }
        
        switch (option) {
            
        case 0: 
            keep = 0; 
            break; 
        
        case 1: 
            printf("\nNumber: ");
            scanf("%d", &v); 
            pushback(array, v); 
            
            break;
        case 2: 
            printf("\nindex and value: ");
            scanf("%d %d", &i, &v); 
            printf("\n%d\n", set(array, i, v)); 
            break;
        case 3: 
            printf("\nindex: "); 
            scanf("%d", &i); 
            pop(array, i); 
            break;
        case 4: 
            printf("index: ");
            scanf("%d", &i); 
            printf("\n%d\n", get(array, i));  
            break;
        case 5: 
            show(array); 
            break;
        case 6: 
            printf("\nSize: %d\n", size(array)); 
            break;
        
        default:
            break;
        }
        
    }

}