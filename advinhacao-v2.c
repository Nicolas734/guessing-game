#include <stdio.h>


int main(){
    printf("-------------------------------\n");
    printf("Bem vindo ao jogo de advinhacao\n");
    printf("-------------------------------\n");

    int numero_secreto = 42;
    int chute;
    int tentativa = 1;

    while(1){
        printf("Tentativa %d\n", tentativa);
        printf("Qual eh o seu chute? ");
        scanf("%d", &chute);
        printf("seu chute foi %d\n", chute);

        if(chute < 0){
            printf("\nValor invalido, Por favor forneca um numero positivo\n");
            continue;
        }

        int acertou = (chute == numero_secreto);
        int maior = (chute > numero_secreto);

        if(acertou){
            printf("\nParabens! Voce acertou! \n");
            break;
        }

        else if(maior){
            printf("\nSeu chute foi maior do que o numero secreto\n");
            tentativa ++;
        } 
        else{
            printf("\nSeu chute foi menor do que o numero secreto\n");
            tentativa ++;
        }
    }

    printf("\nFim de jogo!\n");
    printf("Voce acertou em %d tentaivas", tentativa);
}