#include<stdio.h>

int main(){

    // Dado três valores, A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo,
    // e se for, se é um triangulo escaleno, um triangulo equilátero ou um triangulo isósceles.

    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("-----------------------------------------------");

    if( (a + b > c) && (a + c > b) && (b + c > a)){
        printf("Os 3 lados formam um triangulo! \n");

        if(a == b && a == c){
            printf("E um triangulo Equilatero");
        }
        else{
            if( a == b  || a == c || b == c){
                printf("E um triangulo Isosceles");
            }
            else{
                printf("E um triangulo Escaleno");
            }
        }
    }
    else{
        printf("Os 3 lados nao formam um triangulo! \n");
    }




    return 0;
}