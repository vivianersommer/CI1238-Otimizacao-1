#include<stdio.h>
#include <stdlib.h>

void parcial(int numero_itens,int numero_pares,int capacidade,int *itens,int **pares){
    int i = 0;
    printf("numero_itens : %d \n", numero_itens);
    printf("numero_pares : %d \n", numero_pares);
    printf("capacidade : %d \n", capacidade);

    for (i = 0; i < numero_itens; i++){
        printf("itens[%d] = %d \n", i, itens[i]);
    }

    for (i = 0; i < numero_pares; i++){
        printf("pares[%d][0] = %d ", i, pares[i][0]);
        printf("pares[%d][1] = %d \n", i, pares[i][1]);
    }
}

int main(int argc, char **argv) {

    int numero_itens, numero_pares, capacidade, i, j;

    // Leitura dos dados --------------------------------------------------------------

    scanf("%d", &numero_itens);
    scanf("%d", &numero_pares);
    scanf("%d", &capacidade);

    int *itens = malloc(numero_itens * sizeof(int*));
    for (i = 0; i < numero_itens; i++){
        scanf("%d", &itens[i]);
    }

    int **pares =  malloc(numero_pares * sizeof(int*));
    for ( j=0; j< numero_pares; j++){
      pares[j] = malloc(2 * sizeof(int));
    }

    for (i = 0; i < numero_pares; i++){
        scanf("%d", &pares[i][0]);
        scanf("%d", &pares[i][1]);
    }

    // --------------------------------------------------------------------------------

    // Função parcial -----------------------------------------------------------------

    parcial(numero_itens, numero_pares, capacidade, itens, pares);

    // --------------------------------------------------------------------------------

    // Liberar variáveis --------------------------------------------------------------

    free(itens);
    for(j=0; j< numero_pares; j++){
      free(pares[j]);
    }
    free(pares);

    // --------------------------------------------------------------------------------


    return 0;
}