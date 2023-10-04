#include<stdio.h>

int main(){

    // Faça um algoritmo que leia as três notas de 30 alunos de uma turma. Para cada aluno, calcule a média ponderada, 
    //como segue: MP = ( n1*2 + n2*4 + n3*4 ) / 10

    // Além disso, calcule a média geral da turma. Mostre a média de cada aluno e uma mensagem "Aprovado",
    // caso a média seja maior ou igual a sete, e uma mensagem "Reprovado", caso contrário. Ao final, mostre a média geral.

    int numAlunos= 30;
    float  nota1, nota2, nota3, media, mediaGeral;


    for(int i=0; i < numAlunos; i++){
        printf("\n Informe a nota 1 do aluno %d: ", i + 1);
        scanf("%f", &nota1);

        printf("\n Informe a nota 2 do aluno %d: ", i + 1);
        scanf("%f", &nota2);

        printf("\n Informe a nota 3 do aluno %d: ", i + 1);
        scanf("%f", &nota3);


        media = (nota1*2 + nota2*4 + nota3*4) / 10;
        mediaGeral += media;

        printf("\n -----------------------------------------------");
        printf("\n A media do aluno %d e %.2f das 3 provas", i + 1, media);

        if(media >= 7){
            printf("\n Voce foi Aprovado");
        }
        else{
            printf("\n Voce foi Reprovado");
        }

        printf("\n -----------------------------------------------");
    }
    
    mediaGeral /= numAlunos;

    printf("\n A media geral dos %d alunos e %.2f", numAlunos, mediaGeral); 

    return 0;
}