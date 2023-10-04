#include<stdio.h>
#include<stdlib.h>

int main(){

    // Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
    // Construa um algoritmo que calcule e imprima quantos anos serão necessários para que Zé seja maior que Chico.


    float chico= 1.5, ze= 1.1;
    int ano=0;

    while( chico>= ze){
        chico += 0.02;
        ze += 0.03;
        ano++;

        printf("Chico: %.2f \n Ze: %.2f \n Ano: %d \n", chico, ze, ano);
    }

    printf("\n Sao necessarios %d anos!\n \n", ano);



    return 0;
}