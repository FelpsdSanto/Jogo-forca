#include <stdio.h>
#include <string.h>

#define MAX_TENTATIVAS 6 // Limite de tentativas erradas

void exibirPalavra(char palavra[], char acertou[]) {
    for (int i = 0; i < strlen(palavra); i++) {
        if (acertou[i] == 1)
            printf("%c ", palavra[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int verificarAcerto(char palavra[], char letra) {
    int acerto = 0;
    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == letra)
            acerto = 1;
    }
    return acerto;
}

int main() {
    char palavra[] = "programacao"; // Palavra secreta
    char acertou[strlen(palavra)];
    for (int i = 0; i < strlen(palavra); i++) {
        acertou[i] = 0; // Inicializa com '0', ou seja, as letras ainda não foram acertadas
    }

    int tentativas = 0;
    char letra;
    int jogoAtivo = 1;

    printf("Bem-vindo ao jogo da Forca!\n");

    while (jogoAtivo) {
        printf("\nTentativa %d de %d\n", tentativas + 1, MAX_TENTATIVAS);
        exibirPalavra(palavra, acertou);

        printf("Digite uma letra: ");
        scanf(" %c", &letra); // O espaço antes de %c ignora qualquer caractere de nova linha

        if (verificarAcerto(palavra, letra)) {
            printf("Boa! A letra '%c' está na palavra.\n", letra);
            for (int i = 0; i < strlen(palavra); i++) {
                if (palavra[i] == letra)
                    acertou[i] = 1;
            }
        } else {
            tentativas++;
            printf("Ops! A letra '%c' não está na palavra.\n", letra);
        }

        // Verifica se o jogador acertou toda a palavra
        int palavraCompleta = 1;
        for (int i = 0; i < strlen(palavra); i++) {
            if (acertou[i] == 0) {
                palavraCompleta = 0;
                break;
            }
        }

        if (palavraCompleta) {
            printf("\nParabéns! Você acertou a palavra: %s\n", palavra);
            jogoAtivo = 0; // O jogo termina
        } else if (tentativas >= MAX_TENTATIVAS) {
            printf("\nVocê perdeu! A palavra era: %s\n", palavra);
            jogoAtivo = 0; // O jogo termina
        }
    }

    return 0;
}
