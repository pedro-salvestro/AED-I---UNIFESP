#include <stdio.h>
#include <stdlib.h>

int main(){
    int *alocacaoDinamica;
    /*alocando espaço para 5 inteiros*/
    alocacaoDinamica = (int*)malloc(5 * sizeof(int));

    /*armazeando os 5 inteiros no espaço alocado*/
    for(int i = 0 ; i < 5; i++){
        printf("Entre com n[%d]: ", i+1);
        scanf("%d", &alocacaoDinamica[i]);
    }
    /*mostrando os 5 inteiros*/
    for(int i = 0 ; i < 5; i++){
        printf("%d  ", alocacaoDinamica[i]);
    }
    /*desalocando o espaço utilizado anteriormente*/
    free(alocacaoDinamica);
    return 0;
}
