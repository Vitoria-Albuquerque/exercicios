#include<stdio.h>

int main(){

    //  Dados três valores A, B e C, construa um algoritmo para verificar se estes valores podem ser valores dos lados de um triângulo, 
    // e se for classificá-los (imprimi-los) segundo os ângulos. (Triângulo Retângulo = 90º, Triângulo Obtusângulo > 90º, 
    // Triângulo Acutângulo < 90º)

    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    printf("\n \n ----------------------------------------------- \n \n");

    if( (a + b > c) && (a + c > b) && (b + c > a)){
        printf("Os 3 lados formam um triangulo ! \n");

        if(a == b && a == c){
            printf("E um triangulo Equilatero \n");
        }
        else{
            if( a == b  || a == c || b == c){
                printf("E um triangulo Isosceles \n");
            }
            else{
                printf("E um triangulo Escaleno \n");
            }
        }
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
                printf(" E tambem um triangulo Retangulo \n");
            } 
        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b) {
                printf("E tambem um triangulo Obtusangulo \n");
            } 
        else {
                printf("E tambem um triangulo Acutangulo \n");
            }
    }
    else{
        printf("Os 3 lados nao formam um triangulo ! \n");
    }


    return 0;
}