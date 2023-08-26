#include<stdio.h>

int main(){

    // variaveis
    float custo, frete , despesa, valorBruto, valorVenda, lucro;

    printf("\n Digite o custo do produto: ");
    scanf("%f", &custo);

    printf("Digite o frete do produto: ");
    scanf("%f", frete);

    printf("Digite a despesa do produto: ");
    scanf("%f", &despesa);
    
    // calcular o valor bruto do produto 
    
    valorBruto = custo + frete + despesa;

    //Informar o valor bruto para o usuario

    printf("\n O valor bruto do produto e: R$%.2f \n Digite o valor da venda: ", valorBruto);
    scanf("%f", &valorVenda);

    //calculo do lucro

    lucro = ((valorVenda - valorBruto)*100)/valorBruto;

    //apresentação do lucro 

    printf("-------------------------------");
    printf("\n Sua porcentagem de lucro e: %.2f", lucro);



    return 0;
}