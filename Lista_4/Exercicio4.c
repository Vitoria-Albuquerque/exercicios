#include<stdio.h>
#include<math.h>

int main(){

    // Dados três valores A, B e C, construa um algoritmo, que imprima os valores de forma descendente (do maior para o menor).

    float numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    fflush(stdin);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
    fflush(stdin);

    printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);
    fflush(stdin);

    printf("------------------------------------");

    if(numero1>numero2){

        if(numero2>numero3)
        printf("\n A ordem e: %.2f e %.2f e %.2f", numero1, numero2, numero3);

        else 
            if(numero1>numero3 )
            printf("\n A ordem e: %.2f e %.2f e %.2f", numero1, numero3, numero2);

            else 
            printf("\n A ordem e: %.2f e %.2f e %.2f", numero3, numero1, numero2);
    }
    else if(numero2>numero3){
        if(numero1>numero3)
        printf("\n A ordem e: %.2f e %.2f e %.2f",numero2, numero1, numero3);

        else
        printf("\n A ordem e: %.2f e %.2f e %.2f", numero2, numero3, numero1);

    }
    else{
        printf("\n A ordem e: %.2f e %.2f e %.2f", numero3, numero2, numero1);
    }





    return 0;
}