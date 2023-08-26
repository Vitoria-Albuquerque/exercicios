#include<stdio.h>

int main(){

    // Avalie a relação: 10 % 5 * 2 <> 5 * 2 + 1          (<>) = diferente 

    int equacao;

    equacao = (10 % 5 *2) != (5 * 2 + 1);

    if (equacao){

        printf("E verdadeira");
    }
    else{
        printf("E falsa");
        
    }

    return 0;
}