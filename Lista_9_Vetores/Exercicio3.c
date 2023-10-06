#include<stdio.h>

int main(){

    // Ler um conjuto de números reais, armazenando-o em vetor e calcular o quadrado dos componentes deste vetor, 
    // armazenando o resultado em outro vetor. Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos.

    int a[10], b[10];

     for(int i = 0; i < 10; i++){
        printf("Digite os numeros");
        scanf("%d", &a[i]); 

        b[i] = a[i] * a[i];
    }

    for(int i = 0; i < 10; i++){

        printf("\n A[%d] = %d. B[%d] = %d", i, a[i], i, b[i]);
    }






    return 0;
}