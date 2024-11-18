#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    struct carro
    {
        char marca[10], modelo[10], placa[8], cor[10];
        int ano;
    };

    struct carro carro;

    printf("Digite a marca do carro:\n>");
    scanf("%s", carro.marca);
    printf("Digite o modelo do carro:\n>");
    scanf("%s", carro.modelo);
    printf("Digite a placa do carro:\n>");
    scanf("%s", carro.placa);
    printf("Digite a cor do carro:\n>");
    scanf("%s", carro.cor);
    printf("Digite o ano do carro:\n>");
    scanf("%d", &carro.ano);

    printf("\nSeu carro é um %s %s %s, ano %d e placa %s\n", carro.marca, carro.modelo, carro.cor, carro.ano, carro.placa);
}
