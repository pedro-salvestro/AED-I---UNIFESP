#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool buscaBinaria(int lista[11], int procurado, int *lugar){
    int esquerda = 0, direita = 10;

    while(esquerda<=direita){
        int meio = (esquerda+direita)/2;
        if(procurado == lista[meio]){
            *lugar = meio;
            return true;
        }

        if(procurado > lista[meio]){
            esquerda = meio + 1;
        }
        else{
            direita = meio - 1;
        }
    }
    return false;   
}

int main(){
    int numero, vetor[11] = {10,20,30,40,50,60,70,80,90,100,110}, posicao;

    printf("Digite o número que deseja encontrar:\n>");
    scanf("%d", &numero);
    if(buscaBinaria(vetor, numero, &posicao)){
        printf("O valor foi encontrado e está na posição %d do vetor", posicao);
    }
    else{
        printf("O valor não foi encontrado.");
    }

}