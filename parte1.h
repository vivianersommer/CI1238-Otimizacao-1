#include <stdio.h>
#include <stdlib.h>

typedef struct { 
    int numero_itens; 
    int numero_pares;
    int capacidade;
    int *itens;
    int **pares;
    float **matriz_viagem;
}parcial;