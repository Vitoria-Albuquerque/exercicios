#include<stdio.h>

int main(){

    // Dado um valor em reais e a cotação do dolar, converta esse valor para dolar

    //Inserindo as variaveis
    float reais, cotacaoDolar, valorDolar;

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    printf("Digite o valor em dolar: ");
    scanf("%f", &cotacaoDolar);

    valorDolar = reais / cotacaoDolar;

    printf("\n O valor em dolar e: %.2f", valorDolar);
    




    return 0;

}