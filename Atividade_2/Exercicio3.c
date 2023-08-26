#include<stdio.h>

int main(){

    // Dados da area de uma sala

    //Inserindo as variaveis
    float largura, comprimento, area;


    // entrada de dados
    printf("Digite a largura: ");
    scanf("%f", &largura);

    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    // Calcular a area

    area = largura * comprimento;

    printf("\n A area da sala e: %.2fm2", area);

    // m2 é metros quadrados
    
    return 0;
}