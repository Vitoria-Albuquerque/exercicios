#include<stdio.h>
#include<math.h>

int main(){

    // Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se aposentar. As condições para aposentadoria
    // sao: . Ter pelo menos 65 anos; . Ou ter trabalhado pelo menos 30 anos; . Ou ter pelo menos 60 anos e trabalhado pelo
    // menos 25 anos.

    int idade, tempoServico;

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);;

    printf("Digite por quanto tempo prestou servico: ");
    scanf("%d", &tempoServico);

    if(idade>=65 || tempoServico>=30){
        printf("Voce foi aprovado, pode se aposentar");
    }
    else if( idade>=60 && tempoServico>=25){
        printf("Voce foi aprovado com ressalvas");
    }
    else{
        printf("Voce foi reprovado, nao pode se aposentar");
    }








    return 0;
}