#include <stdio.h>
#include "linkedList.h"


void menuLinkedList() {

    List* list;  
    
    create(&list);  

    int option, keep, v;  
    
    keep = 1; 
    while (keep) {

        printf("\n\n\tLinked List\n\n\n"); 
        printf("1. PushBack\n");
        printf("2. PushFront\n");
        printf("3. RemoveBack\n");
        printf("4. RemoveFront\n");
        printf("5. Show\n");
        printf("6. Size\n");
        printf("7. Empty\n");
        printf("0. Exit\n");
     

        while (1) {
            printf("\nDigite: ");
            scanf("%d", &option);
            if (option >= 0 && option <= 7) break; 
            else  printf("\nOpção Invalida\n");
        }
        
        switch (option) {
            
        case 0: 
            keep = 0; 
            printf("\n--> exiting\n\n"); 
            break; 
        case 1: 
            printf("\nNumber: ");
            scanf("%d", &v); 
            if (pushback(&list->head, v) ) {
                printf("\nSuccess!\n");
            } else {
                printf("\nFailed!\n");
            }
            break;
        case 2: 
            printf("\nNumber: ");
            scanf("%d", &v); 
            if (pushfront(&list->head, v) ) {
                printf("\nSuccess!\n");
            } else {
                printf("\nFailed!\n");
            }
            break;
        case 3: 
            if ( removeback(&list->head)  ) { 
                printf("\nSuccess!\n");
            } else {
                printf("\nList Empty!\n");
            }
            
            break;
        case 4:
            if ( removefront(&list->head) ) printf("\nSuccess!\n");  
            else printf("\nList Empty!\n");            
            break;
        case 5: 
            printf("\n[ ");
            show(list->head); 
            printf("]\n");
            break;
        case 6: 
            printf("\n--> size: %d\n", size(list->head)); 
            break;
        case 7:
            printf("\n--> empty: %s", empty(list->head)? "True": "False"); 
        default:
            break;
        }
        
    }

}