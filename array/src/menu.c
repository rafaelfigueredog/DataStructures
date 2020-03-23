#include <stdio.h>
#include "array.h"


void menuArray() {

    Array* array = NULL; 
    int option; 
    int i, keep; 
    int v; 

    keep = 1; 

    while (keep) {

        printf("\n\t\t Menu Array\n\n"); 
        printf("1. Criar Array\n");
        printf("2. Inserir Elemento\n");
        printf("3. Remover Elemento\n");
        printf("4. Consultar Elemento\n");
        printf("5. Mostrar Array\n");
        printf("6. Tamanho do Array\n");
        printf("0. Sair\n");
     

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
            if (array == NULL) array = criar(); 
            break;
        case 2: 
            printf("\nElemento: ");
            scanf("%d", &v); 
            inserir(array, v); 
            
            break;
        case 3: 
            printf("\nindex: "); 
            scanf("%d", &i); 
            remover(array, i); 
            break;
        case 4: 
            printf("index: ");
            scanf("%d", &i); 
            printf("\n%d\n", get(array, i));  
            break;
        case 5: 
            mostrar(array); 
            break;
        case 6: 
            printf("\nSize: %d\n", size(array)); 
            break;
        
        
        default:
            break;
        }
        
    }

}