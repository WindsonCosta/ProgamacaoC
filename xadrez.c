#include <stdio.h>

void moverTorreCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverTorreCima(casas - 1);
}

void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

void moverBispoDiagonalDireitaCima(int casas, int linha, int coluna) {
    if (casas == 0) return;
    printf("Diagonal Direita Cima (Linha %d, Coluna %d)\n", linha, coluna);
    moverBispoDiagonalDireitaCima(casas - 1, linha - 1, coluna + 1);
}

void moverRainhaCima(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    moverRainhaCima(casas - 1);
}

void moverRainhaDiagonalDireitaBaixo(int casas, int linha, int coluna) {
    if (casas == 0) return;
    printf("Diagonal Direita Baixo (Linha %d, Coluna %d)\n", linha, coluna);
    moverRainhaDiagonalDireitaBaixo(casas - 1, linha + 1, coluna + 1);
}

void moverCavaloEmL(int maxLinhas, int maxColunas) {
    for (int linha = maxLinhas; linha >= 2; linha--) {
        for (int coluna = 1; coluna <= maxColunas - 1; coluna++) {
            if (linha - 2 < 0 || coluna + 1 > maxColunas) {
                continue;
            }
            printf("Cavalo em L: (Linha %d, Coluna %d) -> (Linha %d, Coluna %d)\n",
                   linha, coluna, linha - 2, coluna + 1);
            break;
        }
    }
}

void moverBispoComLoops(int casas) {
    for (int linha = 0; linha < casas; linha++) {
        for (int coluna = 0; coluna < casas; coluna++) {
            if (linha == coluna) {
                printf("Diagonal Principal (Linha %d, Coluna %d)\n", linha, coluna);
            }
        }
    }
}

int main() {
    int casasTorre = 3;
    int casasBispo = 4;
    int casasRainha = 2;
    int maxLinhas = 8;
    int maxColunas = 8;

    printf("Movimento da Torre:\n");
    moverTorreCima(casasTorre);
    moverTorreDireita(casasTorre);
    printf("\n");

    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoDiagonalDireitaCima(casasBispo, 7, 0);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainhaCima(casasRainha);
    moverRainhaDiagonalDireitaBaixo(casasRainha, 0, 0);
    printf("\n");

    printf("Movimento do Cavalo (Loops Complexos):\n");
    moverCavaloEmL(maxLinhas, maxColunas);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(casasBispo);
    printf("\n");

    return 0;
}
