#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *listaAtual, *listaNova, *indicacao;
    char buffer[1000]; // Buffer temporário para leitura

    // Ler a lista atual de amigos
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Remove o \n do final
    listaAtual = malloc(strlen(buffer) + 1); // Aloca memória suficiente
    strcpy(listaAtual, buffer); // Copia o conteúdo para listaAtual

    // Ler a nova lista de amigos
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Remove o \n do final
    listaNova = malloc(strlen(buffer) + 1); // Aloca memória suficiente
    strcpy(listaNova, buffer); // Copia o conteúdo para listaNova

    // Ler a indicação (amigo de referência ou "não")
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // Remove o \n do final
    indicacao = malloc(strlen(buffer) + 1); // Aloca memória suficiente
    strcpy(indicacao, buffer); // Copia o conteúdo para indicacao

    // Atualizar a lista
    if (strcmp(indicacao, "nao") == 0 || strcmp(indicacao, "não") == 0) {
        // Adiciona ao final
        listaAtual = realloc(listaAtual, strlen(listaAtual) + strlen(listaNova) + 2);
        strcat(listaAtual, " "); // Adiciona espaço antes da nova lista
        strcat(listaAtual, listaNova);
    } else {
        // Adiciona antes do amigo indicado
        char *pos = strstr(listaAtual, indicacao); // Encontra o amigo de referência
        if (pos) {
            // Divide a lista em antes e depois do amigo indicado
            size_t tamanhoAntes = pos - listaAtual; // Tamanho antes do amigo
            char *novaListaCompleta = malloc(strlen(listaAtual) + strlen(listaNova) + 2);

            strncpy(novaListaCompleta, listaAtual, tamanhoAntes); // Copia o começo
            novaListaCompleta[tamanhoAntes] = '\0'; // Finaliza a string temporariamente
            strcat(novaListaCompleta, listaNova); // Adiciona os novos amigos
            strcat(novaListaCompleta, " "); // Espaço entre as listas
            strcat(novaListaCompleta, listaAtual + tamanhoAntes); // Adiciona o resto da lista

            free(listaAtual); // Libera a memória antiga
            listaAtual = novaListaCompleta; // Atualiza a listaAtual
        } else {
            // Amigo não encontrado, adiciona ao final
            listaAtual = realloc(listaAtual, strlen(listaAtual) + strlen(listaNova) + 2);
            strcat(listaAtual, " "); // Adiciona espaço
            strcat(listaAtual, listaNova);
        }
    }

    // Imprimir a lista atualizada
    printf("%s\n", listaAtual);

    // Liberar a memória
    free(listaAtual);
    free(listaNova);
    free(indicacao);

    return 0;
}
