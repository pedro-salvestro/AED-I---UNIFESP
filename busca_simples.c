#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool busca_simples(int vetor[5], int busca, int *posicao){
    for(int i = 0; i<5; i++){
        if(vetor[i] == busca){
            *posicao = i+1;
            return true;
        }
    }
    return false;
}

int main(){
    int vetor[5] = {1,45,26,14,9}, numero, localizacao;
    printf("Digite o número que você deseja procurar na lista:\n>");
    scanf("%d", &numero);
    
    if(busca_simples(vetor, numero, &localizacao) == true){
        printf("Número encontrado na posição %d.\n", localizacao);
    } else{
        printf("Número não encontrado.\n");
    }
}