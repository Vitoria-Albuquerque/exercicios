#include<stdio.h>

    // Escreva uma função que receba por parâmetro uma temperatura em graus Fahrenheit e a
    // retorne convertida em graus Celsius. A fórmula de conversão é: C = (F – 32.0) * (5.0/9.0),
    // sendo F a temperatura em Fahrenheit e C a temperatura em Celsius

int main(){

    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32.0) * (5.0/9.0);

    printf("\n A temperatura em Celsius e: %.2f", celsius);





    return 0;
}