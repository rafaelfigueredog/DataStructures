#include <stdio.h>
#include "stack.h"


void menuStack() {

    stack* stk = create(); 

    int option;  
    int v; 


    int keep = 1; 
    while (keep) {

        printf("\n\t\t Stack Interface\n\n"); 
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Top\n");
        printf("4. Size\n");
        printf("5. Exit\n");
     

        while (1) {
            printf("\nType: ");
            scanf("%d", &option);
            if (option >= 0 && option <= 6) break; 
            else  printf("\nInvalid!\n");
        }
        
        switch (option) {
        
        case 1: 
            printf("\nNumber: ");
            scanf("%d", &v); 
            push(stk, v);
            break;  
        case 2: 
            if (pop(stk, &v)) printf("\n%d\n", v); 
            else fprintf(stderr,"\n --> stack empty \n");
            break;
        case 3: 
            if (top(stk, &v)) printf("\n%d\n", v);
            else fprintf(stderr,"\n --> stack empty\n"); 
            break;
        case 4: 
            printf("\n%d\n", size(stk));  
            break;
        case 5: 
            keep = 0; 
            break; 
        
        
        default:
            break;
        }
        
    }
    
}