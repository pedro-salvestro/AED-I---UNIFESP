#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compara(const void *a, const void *b){
    return strcmp(*(char **)a, *(char **)b);
}

int main(){
    int n, i, j, k;
    char *lista[1000], *aux;
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        char linha[1001];
        fgets(linha, 1001, stdin);
        linha[strcspn(linha, "\n")] = 0;

        j = 0;
        lista[j] = strtok(linha, " ");
        while(lista[j] != NULL){
            j++;
            lista[j] = strtok(NULL, " ");
        }

        qsort(lista, j, sizeof(char *), compara);

        k = 0;
        aux = lista[0];
        printf("%s", aux);
        for(j = 1; j < j; j++){
            if(strcmp(lista[j], aux) != 0){
                printf(" %s", lista[j]);
                aux = lista[j];
                k++;
            }
        }

        printf("\n");
    }

    return 0;
}
