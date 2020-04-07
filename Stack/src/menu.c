#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void pause(int *c) {
    printf("\nContinue: 1 or 0: "); 
    scanf("%d", c); 
}


void menuStack() {

    stack* stk; 
    
    create(&stk); 

    int option;  
    int v;  
    int c = 1; 

    int keep = 1; 
    while (keep && c) {

        printf("\n > Stack\n\n"); 
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Top\n");
        printf("4. Size\n");
        printf("5. Show\n");
        printf("0. Exit\n");
     

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
            if ( push(stk, v) ) printf("\n --> Success\n"); 
            else printf("\nAn error occurred\n");
             
            pause(&c); 
            break;  
        case 2: 
            if (pop(stk, &v)) printf("\n%d poped!\n", v); 
            else printf("\n --> stack empty \n");
            
            pause(&c); 
            break;
        case 3: 
            if (top(stk, &v)) printf("\n%d < Top\n", v);
            else printf("\n --> stack empty\n");
              
            pause(&c);

            break;
        case 4: 
            printf("\n%d\n", size(stk));  
             
            pause(&c);
            break;
        case 5: 
            printf("\n\n\n\n\n"); 
            show(stk); 
            printf("\n\n\n\n\n"); 
            pause(&c); 
            break;
        case 0: 
            keep = 0; 
            break; 
        default:
            break;
        }
    }
}