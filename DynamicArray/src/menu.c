#include <stdio.h>
#include "array.h"


void menuArray() {

    Array *array = NULL;

    init( &array );

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
        printf("7. Capacity\n"); 
        printf("0. Exit\n");
     

        while (1) {
            printf("\nType: ");
            scanf("%d", &option);
            if (option >= 0 && option <= 7) break; 
            else  printf("\nError: Invalid Option\n");
        }
        
        switch (option) {
            
        case 0: 
            keep = 0; 
            break; 
        
        case 1: 
            printf("\nNumber: ");
            scanf("%d", &v); 
            if ( pushback(array, v) ) {
                printf("\nSuccess!\n"); 
            } else {
                printf("\nFailed!\n");
            }

            break;
        case 2: 
            printf("\nIndex and Value: ");
            scanf("%d %d", &i, &v); 
            if ( set(array, v, i) ) {
                printf("\nSuccess!\n"); 
            } else {
                printf("\nNot Found!\n");
            }
            
            break;
        case 3: 
            printf("\nIndex: ");
            scanf("%d", &i);

            if ( erase(array, i) ) {
                printf("\nSuccess!\n");
            } else {
                printf("\nFailed!\n");
            }


            break;
        case 4: 
            printf("Index: ");
            scanf("%d", &i);
            if ( get(array, &v, i)  ) {
                printf("\nSuccess!\n");
                printf("\narray[%d] = %d\n", i, v);
            } else {
                printf("\nNot Found!\n");
            }

            break;
        case 5: 
            show(array);
            break;
        case 6: 
            printf("\nSize: %d\n", getSize(array));
            break;
        case 7:
            printf("\nCapacity: %d\n", getCapacity(array));
            break; 
        
        default:
            break;
        }
        
    }

}