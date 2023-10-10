#include<stdio.h>


int main(){

    // Ler dois conjuntos de números reais, armazenando-os em vetores e calcular o produto escalar entre eles.
    // Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o produto escalar, sendo que o produto é dado
    // por: x1*y1 + x2*y2 + ... + xn*yn.


    int i;
    float x[5], y[5];
    float produto_escalar = 0.0;

    printf("\n Informe os numeros do vetor x (5 elementos):\n");

    for (i = 0; i < 5; i++) {
        scanf("%f", &x[i]);
    }

    printf("\n Informe os numeros do vetor y (5 elementos):\n");

    for (i = 0; i < 5; i++) {
        scanf("%f", &y[i]);
    }

    printf("\n Numeros do vetor x:\n");

    for (i = 0; i < 5; i++) {
        printf("%.2f ", x[i]);
    }

    printf("\n Numeros do vetor y:\n");

    for (i = 0; i < 5; i++) {
        printf("%.2f ", y[i]);
    }

    // Calcular o produto escalar
    for (i = 0; i < 5; i++) {
        produto_escalar += x[i] * y[i];
    }

    printf("\n Produto escalar: %.2f\n", produto_escalar);

 

    return 0; 
}