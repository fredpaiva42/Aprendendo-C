#include <stdio.h>

int main() {
    int numeroSecreto = 42, chute;
    printf("********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("********************************************\n");

    printf("Qual o seu chute? ");
    scanf("%d", &chute);

    printf("O seu chute foi: %d", chute);

    return 0;
}