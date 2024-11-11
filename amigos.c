#include <stdio.h>
#include <string.h>

int main() {
  char lista_atual[1000], nova_lista[1000], indicacao[100], amigos[1000];
  char *token;

  // Le a lista de amigos atual
  fgets(lista_atual, 1000, stdin);
  lista_atual[strcspn(lista_atual, "\n")] = 0;

  // Le a nova lista de amigos
  fgets(nova_lista, 1000, stdin);
  nova_lista[strcspn(nova_lista, "\n")] = 0;

  // Le o nome do amigo que receberá a indicação
  fgets(indicacao, 100, stdin);
  indicacao[strcspn(indicacao, "\n")] = 0;

  // Se houver indicação, insere a nova lista antes do amigo indicado
  if (strcmp(indicacao, "nao") != 0) {
    // Copia a lista atual para a lista final
    strcpy(amigos, lista_atual);

    // Encontra o amigo indicado na lista final
    token = strtok(amigos, " ");
    while (token != NULL) {
      if (strcmp(token, indicacao) == 0) {
        // Insere a nova lista antes do amigo indicado
        strcat(amigos, " ");
        strcat(amigos, nova_lista);
        break;
      }
      token = strtok(NULL, " ");
    }
  } else {
    // Se não houver indicação, insere a nova lista no final
    strcpy(amigos, lista_atual);
    strcat(amigos, " ");
    strcat(amigos, nova_lista);
  }

  // Imprime a lista final
  printf("%s\n", amigos);

  return 0;
}
