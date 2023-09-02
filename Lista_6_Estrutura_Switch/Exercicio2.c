#include<stdio.h>
#include<math.h>

int main(){

    // O cardapio de uma lanchonete é o seguinte:
    //100 - Cachorro quente; R$10,10
    //101 - Bauru simples; R$8,30
    //102 - Bauru c/ovo; R$8,50
    //103 - Hamburguer; R$12,50
    //104 - Cheeseburger; R$13,25
    //Escrever um algoritmo que leia o codigo do item do pedido, a quantidade e calcule o valor a ser pago por aquele lanche.
    // Considere que cada execução somente será calculado um item.

    int pedido;

    printf("Digite o numero do seu pedido no cardapio: ");
    scanf("%d", &pedido);

    switch (pedido)
    {
    case 100:
        printf("Seu pedido e um cachorro quente voce pagara : R$10,10");
        break;
    
    case 101:
        printf("Seu pedido e um bauru simples voce pagara : R$8,30");
        break;

    case 102:
        printf("Seu pedido e um bauru c/ovo voce pagara : R$8,50");
        break;

    case 103:
        printf("Seu pedido e um hamburguer voce pagara : R$12,50");
        break;

    case 104:
        printf("Seu pedido e um cheeseburguer voce pagara : R$13,25");
        break;            

    default:
        printf("Seu pedido nao foi encontrado no sistema");
        break;
    }




    return 0;
}