#include<stdio.h>
#include<math.h>

int main(){

    //variaveis
    //PI não é uma variavel é um a constante
    double raio, area, PI=3.1415;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    //calculo da area do circulo = pi*(raio*raio)

    //area = PI * (raio * raio);
    area = PI * (pow(raio,2));

    printf(" A area do circulo e %lf: ", area);

}