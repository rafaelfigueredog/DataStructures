#include <stdio.h>
#include "linkedList.h"


void menuLinkedList() {

    List* list = create(); 
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
            list->head = pushback(list->head, v); 
            break;
        case 2: 
            /* printf("\nNumber: "); */
            scanf("%d", &v); 
            list->head = pushfront(list->head, v); 
            break;
        case 3: 
            list->head = removeback(list->head); 
            break;
        case 4:
            list->head = removefront(list->head);               
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