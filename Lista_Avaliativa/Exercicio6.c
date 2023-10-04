#include<stdio.h>


int main(){

    // Leia 2 valores com uma casa decimal (x e y), que devem representar as coordenadas de um ponto em um plano.
    // A seguir, determine qual o quadrante ao qual pertence o ponto, ou se está sobre um dos eixos cartesianos ou
    // na origem (x = y = 0). Se o ponto estiver na origem, escreva a mensagem “Origem”. Se o ponto estiver sobre um dos eixos
    // escreva “Eixo X” ou “Eixo Y”, conforme for a situação. 
    //  Q2 ___|___Q1
    //  Q3    |   Q4


    double x, y;

    printf("Informe o valor de x: ");
    scanf("%lf",&x);

    printf("Informe o valor de y: ");
    scanf("%lf", &y);

    if( x== 0 && y==0){
         printf("O ponto esta na Origem \n");
    }
    else if(x > 0 && y > 0){
        printf("O ponto esta em Q1 \n");
    }
    else if(x < 0 && y > 0){
        printf("O ponto esta em Q2 \n");
    }
    else if(x < 0 && y < 0){
        printf("O ponto esta Q3 \n");
    }
    else if(x > 0 && y < 0){
        printf("O ponto esta Q4 \n");
    }
    else if( x == 0){
        printf("O ponto esta no Eixo Y \n");
    }
    else if( y == 0){
        printf("O ponto esta no Eixo X \n");
    }
    else{
        
    }





    return 0;
}