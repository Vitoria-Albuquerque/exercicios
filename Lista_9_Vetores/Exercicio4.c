#include<stdio.h>

int main(){

    // Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes
    // a duas posições no vetor. Ao final seu programa devrá escrever a soma dos valores encontrados nas respectivas posições X e Y.


    int vetor[8], x, y, soma = 0;

    for(int i = 0; i < 8; i++){
        printf("Digite os numeros: ");
        scanf("%d", &vetor[i]); 
    }

    do{
        printf("\n Digite os valores para x e y ( entre 0 e 7): ");
        scanf("%d %d", &x, &y);
        if((x >= 0 && x < 8) && (y >= 0 && y < 8) ){
            for(int i = 0; i < 8; i++){
                if(i == x){
                    soma += vetor[i];
                }
                if(y == i){
                    soma += vetor[i];
                }
            }
        }else{
            printf("\n Valores de x e y invalidos");
        }
    }while(x < 0 || x > 7 && y < 0 || y > 7);

    printf("\n Soma os valores das posicoes %d e %d = %d", x, y, soma);





    return 0;
}