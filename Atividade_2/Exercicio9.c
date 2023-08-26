#include<stdio.h>

int main(){

    // O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos
    // (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um
    // algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor

    //variaveis
    float custoFabrica, custoConsumidor;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &custoFabrica);

    // Calculo do preço que o consumidor vai pagar 

    custoConsumidor = custoFabrica + (custoFabrica * 28/100) + (custoFabrica * 45/100);

    printf("-------------------------------");
    printf("\n O preco para o consumidor e: %.2f", custoConsumidor);


    return 0;
}