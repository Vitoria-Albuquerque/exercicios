#include<stdio.h>
#include<math.h>


    //Escreva uma função para o cálculo do volume de uma esfera
    // V = 4 / 3π * r³

    //em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.



int main(){

    float raio, volume;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    volume = 4.0 / 3.0 * 3.1414592 * (pow(raio,3));

    printf("o volume da esfera e: %.2f", volume);





    return 0;
}