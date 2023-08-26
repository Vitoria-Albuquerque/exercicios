#include<stdio.h>

int main(){

    //variaveis
    float salarioAtual, porcentagemReajuste, novoSalario, reajusteFinal;

    printf("Digite o salario atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite a porcentagem de reajuste: ");
    scanf("%f", &porcentagemReajuste);

    reajusteFinal = porcentagemReajuste / 100;

    //calcular o novo salario

    novoSalario = (salarioAtual * reajusteFinal) + salarioAtual;

    printf("-------------------------------");
    printf("\n Novo salario: %.2f", novoSalario);
}