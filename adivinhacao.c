#include <stdio.h>

int main() {
    int numeroSecreto = 42, chute, tentativas = 1;
    printf("********************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("********************************************\n");

    while(1) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute?\n");

        scanf("%d", &chute);
        printf("O seu chute foi: %d\n", chute);

        if(chute < 0){
            printf("Você não pode chutar números negativos!");

            continue;
        }

        int acertou = (chute == numeroSecreto);
        int maior = chute > numeroSecreto;

        if(acertou) {
            printf("Parabéns! Você acertou!\n");

            break;
        }
        else if(maior) {
            printf("Seu chute foi maior que o número secreto, tente de novo!\n");
        }
        else {
            printf("Seu chute foi menor que o número secreto, tente de novo!\n");
        }

        tentativas++;
    }
    printf("Fim de Jogo!\n");
    printf("Você acertou em %d tentativas!", tentativas);
    return 0;
}