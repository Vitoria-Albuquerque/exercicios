#include<stdio.h>
#include<math.h>

int main(){

    // Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salario atual e o tempo
    // de serviço de cada funcionário. Os funcionários com menor salario terão um aumento proporcionalmente maior do que os funcionários
    //  com um salario maior, e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário.

    float salarioAtual, tempoServico, salarioFinal;

    printf("Digite o seu salario atual: ");
    scanf("%f", &salarioAtual);
    fflush(stdin);

    printf("Digite a quanto tempo trabalha na empresa: ");
    scanf("%f", &tempoServico);

    if(salarioAtual<=500 && tempoServico<1){

        salarioFinal = salarioAtual + salarioAtual*(25/100) ;

        printf("Seu salario reajustado e: %.2f", salarioFinal);
    }
    else if(salarioAtual<=1000 && tempoServico>=1 && tempoServico<=3){

        salarioFinal = salarioAtual + salarioAtual*(20/100) + 100 ;

        printf("Seu salario reajustado e: %.2f", salarioFinal);
    }
    else if(salarioAtual<=1500 && tempoServico>=4 && tempoServico<=6){

        salarioFinal =  salarioAtual + salarioAtual*(15/100) + 200;

        printf("Seu salario reajustado e: %.2f", salarioFinal);
    }
    else if(salarioAtual<=2000 && tempoServico>=7 && tempoServico<=10){

        salarioFinal = salarioAtual + salarioAtual*(10/100) + 300;

        printf("Seu salario reajustado e: %.2f", salarioFinal);
    }
    else if(salarioAtual>2000 && tempoServico>10){

        salarioFinal = salarioAtual + 500;

        printf("Seu salario reajustado e: %.2f", salarioFinal);
    }
    else{
        printf("Voce nao recebera reajuste no seu salario");
    }



    return 0;
}