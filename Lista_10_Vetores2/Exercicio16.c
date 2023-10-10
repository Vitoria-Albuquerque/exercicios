#include<stdio.h>


int main(){

    // Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código inteiro. Se o código zero, 
    // finalize o programa; se for1, mostre o vetor na ordem direta; sefor 2, mostre o vetor na ordem inversa. Caso, 
    // o código for diferente de 1 e 2 escreva uma mensagem informando que o código é inválido.


    const int n = 5;
    double vet[n];
    int codigo, i;

   
    for (i = 0; i < n; i++) {
        printf("Digite um elemento: ");
        scanf("%lf", &vet[i]);
    }

    printf("\n Digite o código (0, 1 ou 2): ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        printf("Elementos do vetor em ordem direta:\n");

        for (i = 0; i < n; i++) {
            printf("%lf ", vet[i]);
        }
        
    } 
    else if (codigo == 2) {
        printf("Elementos do vetor em ordem inversa:\n");

        for (i = n - 1; i >= 0; i--) {
            printf("%lf ", vet[i]);
        }

        printf("\n");
    }
     else if (codigo != 0) {
        printf("Código inválido\n");
    }



    return 0; 
}