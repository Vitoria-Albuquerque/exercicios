#include<stdio.h>
#include<math.h>

int main(){

   // Criar um algoritmo que informe a quantidade total de calorias de uma refeição a partir do usuario que devera informar o prato, 
   //a sobremesa e a bebida 
    //Pratos: vegetariano(180 cal), peixe(230 cal), frango(250 cal), carne(350 cal).
    //Sobremesa: abacaxi(75 cal),sorvete diet(110 cal), mouse diet(170 cal), mouse chocolate(200 cal).
    //Bebidas: chá(20 cal), suco laranja(70 cal), suco melao(100 cal), refrigerante diet(65 cal)
    //prato : 1-vegetariano, 2- peixe, 3- frango, 4- carne
    //Sobremesa: 1- abacaxi, 2- sorvete diet, 3- mouse diet, 4- mouse chocolate
    //Bebida: 1- chá, 2- suco de laranja, 3- suco de melao, 4- refrigerante diet 

    int pratos, sobremesa, bebidas, total;


    printf("Infome seu prato: ");
    scanf("%d", &pratos);

    printf("Informe sua sobremesa: ");
    scanf("%d", &sobremesa);

    printf("Informe sua bebida: ");
    scanf("%d",  &bebidas);

    printf("---------------------------------------------");

    switch (pratos)
    {
    case 1:
        pratos = 180;
        printf("\n Seu prato foi o vegetariano com 180 cal");
        break;

    case 2:
        pratos = 230;
        printf("\n Seu prato foi o peixe com 230 cal");
        break;

    case 3:
        pratos = 250;
        printf("\n Seu prato foi o frango com 250 cal");
        break;

    case 4:
        pratos= 350;
        printf("\n Seu prato foi carne com 350 cal");
        break;            
    
    default:
        printf("\n Esse prato nao foi informado");
        break;
    }

    switch (sobremesa)
    {
    case 1:
        sobremesa = 75; 
        printf("\n Sua sobremesa foi abacaxi com 75 cal");
        break;

    case 2:
        sobremesa = 110;
        printf("\n Sua sobremesa foi sorvete diet com 110 cal");
        break;

    case 3:
        sobremesa = 170;
        printf("\n Sua sobremesa foi mouse diet com 170 cal");
        break;

    case 4:
        sobremesa = 200;
        printf("\n Sua sobremesa foi mouse de chocolate com 200 cal");
        break;            
    
    default:
        printf("\n Essa sobremesa nao foi informada");
        break;
    }

    switch (bebidas)
    {
    case 1:
        bebidas = 20;
        printf("\n Sua bebida foi cha com 20 cal");
        break;
    
    case 2:
        bebidas= 70;
        printf("\n Sua bebida foi suco de laranja com 70 cal");
        break;

    case 3:
        bebidas = 100;
        printf("\n Sua bebida foi suco de melao com 100 cal");
        break;

    case 4:
        bebidas = 65;
        printf("\n Sua bebida foi refrigerante diet com 65 cal");
        break;
        
    default:
        printf("\n Essa bebida nao foi informada");
        break;
    }

    total = pratos + sobremesa + bebidas;

    printf("\n ---------------------------------------------");

    printf("\n O total de calorias consumido e: %d", total);




    return 0;
}