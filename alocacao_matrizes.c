#include <stdio.h>
#include <stdlib.h>

int main(){
    int linha = 10, coluna = 5;
    int **matriz;


    //alocando o espaço na memoria para cada linha
    matriz = (int**) malloc(linha * sizeof(int*));

    //como cada linha recebe um vetor correspondente às colunas, alocando espaço para o numero de colunas
    for(int i = 0; i<linha; i++){
        matriz[i] = (int*) malloc(coluna * sizeof(int));
    }

    for(int i = 0; i<linha; i++){
        printf("\n");
        for(int j = 0; j<coluna; j++){
            matriz[i][j] = 88;
            printf("%d ", matriz[i][j]);
        }
        if(i == linha-1){printf("\n");} //quebra de linha na ultima linha
    }
    free(matriz);
}
