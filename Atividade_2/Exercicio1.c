#include<stdio.h>

int main(){
    //declaraçao das variaveis
    int num1, num2, soma, mult;
    float sub, div;

    // entrada de dados
    printf("\n Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("\n Digite o segundo numero: ");
    scanf("%d", &num2);

    //operações
    soma = num1 +num2;
    mult = num1 * num2;
    sub = (float)num1 - num2;
    div = (float)num1 / num2;

    //apresentação dos resultados

    printf("-------------------------------");

    printf("\n Soma: %d", soma);
    printf("\n -------------------------------");
    printf("\n Multiplicacao: %d", mult);
    printf("\n -------------------------------");
    printf("\n Subtracao: %.2f", sub);
    printf("\n -------------------------------");
    printf("\n Divisao: %.2f", div);

    return 0;
}