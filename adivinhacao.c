#include <stdio.h>

int main() {
    int numeroSecreto = 42, chute, i;
    printf("********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("********************************************\n");

    for(i=1; i<= 3; i++) {
        printf("Tentativa %d de 3\n", i);
        printf("Qual o seu chute?\n");
        scanf("%d", &chute);

        printf("O seu chute foi: %d\n", chute);

        int acertou = (chute == numeroSecreto);

        if (acertou) {
            printf("Parabéns! Você acertou!\n");
        } else {

            int maior = chute > numeroSecreto;
            if (maior) {
                printf("Seu chute foi maior que o número secreto, tente de novo!\n");
            } else {
                printf("Seu chute foi menor que o número secreto, tente de novo!\n");
            }
        }
    }
    printf("Fim de Jogo!\n");
    return 0;
}