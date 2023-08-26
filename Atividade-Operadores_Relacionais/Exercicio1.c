#include<stdio.h>

int main(){

    // Leia a idade e imprima se a pessoa é maior de idade

    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    // estrutura condicional ou de selecao

    if(idade>=18){
        //verdadeiro
        printf("E maior de idade");
    }
    else{
        // se nao 
        printf("E menor de idade");

    }


}