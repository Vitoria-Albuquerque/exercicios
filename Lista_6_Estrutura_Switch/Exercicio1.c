#include<stdio.h>
#include<math.h>

int main(){

    // usando o comenado switch, faça um algoritmo quer leia o numero de DDD e informe a qual cidade pertence,
   // considerando só os seguintes valores: 61-Brasilia; 71-Salvador; 11-São Paulo; 21-Rio de Janeiro; 32-Juiz de fora; 19-Campinas; 
   //27-Vitória; 31-Belo Horizonte
   //qualquer outro - uma cidade do Brasil sem identificação

    int DDD;

    printf("Informe o seu DDD: ");
    scanf("%d", &DDD);

    switch (DDD)
    {
    case 61:
        printf("Seu DDD e de Brasilia");
        break;

    case 71:
        printf("Seu DDD e de Salvador");
        break;

    case 11:
        printf("Seu DDD e de Sao Paulo");
        break;

    case 21:
        printf("Seu DDD e de Rio de Janeiro");
        break;

    case 32:
        printf("Seu DDD e de Juiz de fora");
        break;

    case 19:
        printf("Seu DDD e de Campinas");
        break;

    case 27:
        printf("Seu DDD e de Vitoria");
        break;

    case 31:
        printf("Seu DDD e de Belo Horizonte");
        break;                         
    
    default:
        printf("Seu DDD e de uma cidade do Brasil sem identificacao");
        break;
    }




    return 0;
}