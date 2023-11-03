#include <stdio.h>
#include <ctype.h>

int main(){

    // Faça um algoritmo em para ler o nome, o sexo ( M ou m para masculino e F ou f para feminino), a altura e o peso de um
    // grupo de 10 pessoas. O programa de deve calcular e exibir: 

    //o número de homens;
    //o número de mulheres; 
    //a altura média dos homens;
    //a altura média das mulheres; a altura média do grupo;
    //o peso médio dos homens;
    //o peso médio das mulheres;
    //e o peso médio do grupo


    char nome[100];
    char sexo;
    float altura, peso;
    int numHomens = 0, numMulheres = 0;
    float somaAlturaHomens = 0, somaAlturaMulheres = 0, somaAlturaGrupo = 0;
    float somaPesoHomens = 0, somaPesoMulheres = 0, somaPesoGrupo = 0;

    for (int i = 0; i < 10; i++) {
        printf("\nDigite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]s", nome);

        printf("Digite o sexo (M/m para masculino, F/f para feminino): ");
        scanf(" %c", &sexo);

        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        printf("Digite o peso (em kg): ");
        scanf("%f", &peso);

        if (tolower(sexo) == 'm') {
            numHomens++;
            somaAlturaHomens += altura;
            somaPesoHomens += peso;
        } else if (tolower(sexo) == 'f') {
            numMulheres++;
            somaAlturaMulheres += altura;
            somaPesoMulheres += peso;
        }

        somaAlturaGrupo += altura;
        somaPesoGrupo += peso;
    }

    float alturaMediaHomens = somaAlturaHomens / numHomens;
    float alturaMediaMulheres = somaAlturaMulheres / numMulheres;
    float alturaMediaGrupo = somaAlturaGrupo / 10;
    float pesoMediaHomens = somaPesoHomens / numHomens;
    float pesoMediaMulheres = somaPesoMulheres / numMulheres;
    float pesoMediaGrupo = somaPesoGrupo / 10;

    printf("\n-------------------------ESTATISTICAS-------------------------\n");
    printf("Numero de homens: %d\n", numHomens);
    printf("Numero de mulheres: %d\n", numMulheres);
    printf("Altura media dos homens: %.2f metros\n", alturaMediaHomens);
    printf("Altura media das mulheres: %.2f metros\n", alturaMediaMulheres);
    printf("Altura edia do grupo: %.2f metros\n", alturaMediaGrupo);
    printf("Peso medio dos homens: %.2f kg\n", pesoMediaHomens);
    printf("Peso medio das mulheres: %.2f kg\n", pesoMediaMulheres);
    printf("Peso medio do grupo: %.2f kg\n", pesoMediaGrupo);

    return 0;
}
