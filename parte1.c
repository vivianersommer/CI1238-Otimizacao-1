#include <stdio.h>
#include <stdlib.h>
#include "parte1.h"

void parcial(parcial *dado_parcial)
{

    dado_parcial->matriz_viagem = malloc(dado_parcial->numero_itens * sizeof(float *));
    for ( j=0; j< dado_parcial->numero_itens; j++){
        dado_parcial->matriz_viagem[j] = malloc(dado_parcial->numero_itens * sizeof(float));
    }

    


    // int i = 0;
    // printf("numero_itens : %d \n", dado_parcial->numero_itens);
    // printf("numero_pares : %d \n", dado_parcial->numero_pares);
    // printf("capacidade : %d \n", dado_parcial->capacidade);

    // for (i = 0; i < dado_parcial->numero_itens; i++){
    //     printf("itens[%d] = %d \n", i, dado_parcial->itens[i]);
    // }

    // for (i = 0; i < dado_parcial->numero_pares; i++)
    // {
    //     printf("pares[%d][0] = %d ", i, dado_parcial->pares[i][0]);
    //     printf("pares[%d][1] = %d \n", i, dado_parcial->pares[i][1]);
    // }
}

int main(int argc, char **argv) {

    int numero_itens, numero_pares, capacidade, i, j;
    parcial *dado_parcial = malloc(sizeof(parcial));

    // Leitura dos dados --------------------------------------------------------------

    scanf("%d", &dado_parcial->numero_itens);
    scanf("%d", &dado_parcial->numero_pares);
    scanf("%d", &dado_parcial->capacidade);

    dado_parcial->itens = malloc(dado_parcial->numero_itens * sizeof(int *));
    for (i = 0; i < dado_parcial->numero_itens; i++)
    {
        scanf("%d", &dado_parcial->itens[i]);
    }

    dado_parcial->pares = malloc(dado_parcial->numero_pares * sizeof(int *));
    for ( j=0; j< dado_parcial->numero_pares; j++){
        dado_parcial->pares[j] = malloc(2 * sizeof(int));
    }

    for (i = 0; i < dado_parcial->numero_pares; i++){
        scanf("%d", &dado_parcial->pares[i][0]);
        scanf("%d", &dado_parcial->pares[i][1]);
    }

    // --------------------------------------------------------------------------------

    // Função parcial -----------------------------------------------------------------

    parcial(dado_parcial);

    // --------------------------------------------------------------------------------

    // Liberar variáveis --------------------------------------------------------------

    free(dado_parcial->itens);
    for (j = 0; j < dado_parcial->numero_pares; j++)
    {
        free(dado_parcial->pares[j]);
    }
    free(dado_parcial->pares);
    free(dado_parcial);

    // --------------------------------------------------------------------------------

    return 0;
}