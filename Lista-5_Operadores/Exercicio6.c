#include<stdio.h>
#include<math.h>

int main(){

    // Codifique um programa que le um numero inteiro. A seguir o programa deve imprimir uma mensagem para o usuário dizendo se o
    // numero digitado é par. Se o número não for par, o programa não deve fazer nada.

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    
    if( num%2 ==0 ){
        printf("Esse numero e par");
    }
    else{
        printf(".");
    }



    return 0;
}