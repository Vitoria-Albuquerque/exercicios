#include<stdio.h>

int main(){

    //Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma comissão também fixa para 
    //cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um algoritmo que leia o número de carros por ele 
    //vendidos, o valor total de suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.


    //variaveis
    float carroVendido, salarioFixo, comissao, comissaoTotal, vendas, salarioFinal;


    printf("\n Digite o seu salario: ");
    scanf("%f", &salarioFixo);

    printf("\n Digite quantos carros foram vendidos: ");
    scanf("%f", &carroVendido);

    printf("\n Digite o valor da sua comissao por carro vendido: ");
    scanf("%f", &comissao);

    printf("\n Digite o seu total de vendas: ");
    scanf("%f", &vendas);
    fflush(stdin);

    //calculo da comissao total e do salario final 
    comissaoTotal = carroVendido * comissao;
    comissaoTotal = comissao * (vendas * 5/100);

    salarioFinal = comissaoTotal + salarioFixo;

    printf("--------------------------------------");
    printf("\n O seu salario final e:  %.2f", salarioFinal);

    return 0;
}