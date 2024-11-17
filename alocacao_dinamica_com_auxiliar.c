#include <stdio.h>
#include <stdlib.h>

//função que retorna um ponteiro
int* alocacaoDinamica(int tamanho){
    int *aux = (int*) malloc(tamanho * sizeof(int));
    return aux;
    free(aux);
}

int main(){

    int numero, *vetor;

    printf("Digite o tamanho do vetor:\n>");
    scanf("%d", &numero);

    //definindo a posição do ponteiro vetor
    vetor = alocacaoDinamica(numero);

    for(int i = 0; i<numero;i++){
        vetor[i] = 90;
        printf("%d\n", vetor[i]);
    }
    free(vetor);
}
