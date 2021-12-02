#include <stdio.h>

int main() {
    int numeroSecreto = 42, chute;
    printf("********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("********************************************\n");

    printf("Qual o seu chute?\n");
    scanf("%d", &chute);

    printf("O seu chute foi: %d\n", chute);

    if(chute == numeroSecreto){
        printf("Parabéns! Você acertou!\n");
    }else{
        if(chute < numeroSecreto){
            printf("Você errou!\n");
            printf("Seu chute foi menor que o número secreto, tente de novo!\n");
        }else{
            printf("Você errou!\n");
            printf("Seu chute foi maior que o número secreto, tente de novo!\n");
        }

    }

    return 0;
}