#include<stdio.h>
#include <stdlib.h>


int main(){

    // Faça um programa que leia dez conjuntos de dois valores, o primeiro representando o número do aluno e o segundo a sua 
    // altura em metros. Encontre o aluno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do mais alto, juntamente
    // com suas alturas.


    int i=1,matricula,altura,maisalto,maisbaixo,matriculaalto,matriculabaixo;

    do
    {
        printf("\n Entre com o codigo de matricula(somente numeros): ");
        scanf("%d",&matricula);

        printf("\n Qual sua altura em cm: ");
        scanf("%d",&altura);

        if(i==1)
        {
            maisalto=maisbaixo=altura;
            matriculaalto=matriculabaixo=matricula;
        }

        else if(altura>maisalto)
        {
            maisalto=altura;
            matriculaalto=matricula;
        }

        else if(altura<maisbaixo)
        {
            maisbaixo=altura;
            matriculabaixo=matricula;
        }

        i=i+1;
    }

    while(i<=10);

    printf("\n\n Aluno: %d e Mais alto: %d",matriculaalto,maisalto);
    printf("\n Aluno: %d e Mais baixo: %d",matriculabaixo,maisbaixo);






    return 0; 
}