#include<stdio.h>
#include<math.h>

int main(){

    // Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário. Imprima o enésimo termo da sequência 
    //de Fibonacci. Essa sequência começa no termo de ordem zero, e, a partir do segundo termo, seu valor é dado pela soma dos
    // dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.


    int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        int a = 0, b = 1, temp;
        for (int i = 2; i <= n; i++) {
            temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
}

int main() {
    int n;

    printf("Digite o valor de n (numero inteiro maior ou igual a zero): ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Por favor, insira um numero inteiro maior ou igual a zero.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O %d termo da sequencia de Fibonacci e: %d\n", n, resultado);
    }

    return 0;
}





