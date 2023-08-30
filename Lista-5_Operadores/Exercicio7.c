#include<stdio.h>
#include<math.h>

int main(){

    // Faça um algoritmo que calcule a media ponderada das notas de 3 provas. A primeira e a segunda tem peso 1 e a terceira tem peso 2.
    // Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. A nota para aprovação deve ser igual ou 
    // superior a 7 pontos.

    float primeiraNota, segundaNota, terceiraNota, media;
    int primeiroPeso, segundoPeso;

    primeiroPeso = 1;
    segundoPeso = 2;

    printf("Digite a nota da sua primeira prova: ");
    scanf("%f", &primeiraNota);
    fflush(stdin);

    printf("Digite a nota da sua segunda prova: ");
    scanf("%f", &segundaNota);

    printf("Digite a nota da sua terceira prova: ");
    scanf("%f", &terceiraNota);
    fflush(stdin);

    // Calculando a média 

    media = ((primeiraNota*primeiroPeso ) + (segundaNota*primeiroPeso ) + (terceiraNota*segundoPeso)) / (primeiroPeso + segundoPeso);

    printf("------------------------------------------------------------------ \n");
    printf("Sua media e: %.2f", media);

    if(media>=7){
        printf("\n Voce foi aprovado");
    }
    else{
        printf("\n Voce foi reprovado");
    }





    return 0;
}