#include <stdio.h>

// Função recursiva para movimentar a Torre (5 casas para a direita)
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para movimentar o Bispo (5 casas na diagonal para cima e à direita)
void moverBispo(int passos, int movimentoAtual) {
    if (movimentoAtual == passos) return;

    // Loop aninhado para cada movimento diagonal
    for (int i = 0; i < 1; i++) {  // Simula um passo vertical
        for (int j = 0; j < 1; j++) {  // Simula um passo horizontal
            printf("Cima, Direita\n");
        }
    }

    moverBispo(passos, movimentoAtual + 1);
}

// Função recursiva para movimentar a Rainha (8 casas para a esquerda)
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    int i, j;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 0);

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo: 2 casas para cima e 1 para a direita
    printf("\nMovimento do Cavalo:\n");

    for (i = 0; i < 2; i++) {  // Move 2 casas para cima
        printf("Cima\n");

        if (i == 1) {  // Após o segundo movimento para cima, move para a direita
            for (j = 0; j < 1; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    break;  // Encerra o loop interno após um movimento para a direita
                }
            }
        }
    }

    return 0;
}
