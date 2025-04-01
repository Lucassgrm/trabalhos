#include <stdio.h>

// Define o número de passos para cada peça
#define TORRE_STEPS 5
#define BISPO_STEPS 5
#define RAINHA_STEPS 8

int main() {
    // Simulando o movimento da Torre usando um laço "for"
    printf("Movimento da Torre:\n");
    for(int i = 0; i < TORRE_STEPS; i++) {
        printf("Direita\n");
    }

    // Simulando o movimento do Bispo usando um laço "while"
    printf("\nMovimento do Bispo:\n");
    int steps = 0;
    while(steps < BISPO_STEPS) {
        printf("Cima, Direita\n");
        steps++;
    }

    // Simula o movimento da Rainha usando um laço "do-while"
    printf("\nMovimento da Rainha:\n");
    int rainha_steps = 0;
    do {
        printf("Esquerda\n");
        rainha_steps++;
    } while(rainha_steps < RAINHA_STEPS);

    return 0;
}