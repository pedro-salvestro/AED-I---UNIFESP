#include <stdio.h>

int validarSudoku(int grid[9][9]) {
    // Validação das linhas
    for (int linha = 0; linha < 9; linha++) {
        int checagemLinha[10] = {0};
        for (int coluna = 0; coluna < 9; coluna++) {
            int valor = grid[linha][coluna];
            if (valor < 1 || valor > 9 || checagemLinha[valor] == 1) {
                return 0;
            }
            checagemLinha[valor] = 1;
        }
    }

    // Validação das colunas
    for (int coluna = 0; coluna < 9; coluna++) {
        int checagemColuna[10] = {0};
        for (int linha = 0; linha < 9; linha++) {
            int valor = grid[linha][coluna];
            if (valor < 1 || valor > 9 || checagemColuna[valor] == 1) {
                return 0;
            }
            checagemColuna[valor] = 1;
        }
    }

    // Validação das regiões 3x3
    for (int regiaoLinha = 0; regiaoLinha < 3; regiaoLinha++) {
        for (int regiaoColuna = 0; regiaoColuna < 3; regiaoColuna++) {
            int checagemSubmatriz[10] = {0};
            for (int i = regiaoLinha * 3; i < (regiaoLinha + 1) * 3; i++) {
                for (int j = regiaoColuna * 3; j < (regiaoColuna + 1) * 3; j++) {
                    int valor = grid[i][j];
                    if (valor < 1 || valor > 9 || checagemSubmatriz[valor] == 1) {
                        return 0;
                    }
                    checagemSubmatriz[valor] = 1;
                }
            }
        }
    }
    return 1;
}

int main() {
    int casos, sudoku[9][9];
    scanf("%d", &casos);
    for (int caso = 0; caso < casos; caso++) {
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                scanf("%d", &sudoku[i][j]);
            }
        }
        printf("Instancia %d\n", caso + 1);
        if (validarSudoku(sudoku)) {
            printf("SIM\n");
        } else {
            printf("NAO\n");
        }
        printf("\n");
    }
    return 0;
}
