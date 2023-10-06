#include<stdio.h>

int main(){

    // Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.


    int notas[15], i,total=0, media;

    for(i=0; i < 15; i++){
    scanf("%d", &notas[i]);
    }

    for(i=0;i<15;i++){
    total = total + notas[i];
    }

    media = (total/15);

    printf("\n A media geral e: %d", media);





    return 0;
}