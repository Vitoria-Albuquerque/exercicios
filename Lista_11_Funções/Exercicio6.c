#include<stdio.h>
#include<math.h>

    // Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule
    //e retorne o IMC (Índice de Massa Corporal) dessa pessoa:

    // IMC = peso / (altura * altura)



// Função que calcula o IMC

float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}

int main() {
    float peso, altura, imc;

    printf("Informe seu peso (em quilos): ");
    scanf("%f", &peso);

    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);

    imc = calcularIMC(peso, altura);

    printf("\nO IMC da pessoa indicada e: %.2f", imc);


    return 0;
}







