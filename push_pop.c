#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool listaCheia(int topo){
    if(topo == 5){
        return true;
    }
    else{
        return false;
    }
}   

bool listaVazia(int topo){
    if(topo == 0){
        return true;
    }
    else{
        return false;
    }
}

void push(int lista[5], int *topo, int numero){
    if(listaCheia(*topo)){
        printf("Lista cheia!");
    }
    else{
        lista[*topo] = numero;
        (*topo)++;
    }

}

void pop(int lista[5], int *topo){
    if(listaVazia(*topo)){
        printf("A lista está vazia!");
    }
    else{
        (*topo)--;
        printf("\nValor removido: %d\n", lista[*topo]);
        lista[*topo] = 0;
    }
}

void imprimeVetor(int lista[5]){
    for(int i = 0; i < 5; i++){
        printf(" - %d", lista[i]);
    }
    printf("\n");
}

int main(){
    int lista[5] = {0,0,0,0,0}, topo = 0, numero;
    char resposta[10];
    
    printf("Digite o número que você deseja adicionar ao topo da lista:\n>");
    scanf("%d", &numero);

    push(lista, &topo, numero);
    imprimeVetor(lista);

    printf("\nDeseja remover esse número? s/n\n>");
    scanf("\n%s", resposta);
    if(strcmp(resposta, "s") == 0|| strcmp(resposta, "S") == 0){
        pop(lista, &topo);
        imprimeVetor(lista);
    }
}