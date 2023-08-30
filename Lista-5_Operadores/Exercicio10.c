#include<stdio.h>
#include<math.h>

int main(){

    // Calcule as raízes da equação de 2º grau. Lembrando que: A varável a tem que ser diferente de zero. 
    //Caso seja igual, imprima a mensagem “Não e equação de segundo grau”. 
    //• Se ∆ < 0, não existe real. Imprima a mensagem: Não existe raiz. 
    //• Se ∆ = 0, existe uma raiz real. Imprima a raiz e a mensagem Raiz  única.
    //• Se ∆ ≥ 0, imprima as duas raízes reais. 

    // sqrt é raiz quadrada

    float a, b, c, raiz1, raiz2, delta;

    printf("Informe o valor de A: ");
    scanf("%f", &a);
    fflush(stdin);

    printf("Informe o valor de B: ");
    scanf("%f", &b);

    printf("Informe o valor de C: ");
    scanf("%f", &c);

    // calculo

    delta = (b*b) - (4*a*c);

    if(delta<0){
        printf("Seu delta nao existe, portanto nao tem raizes reais.");
    }
    else if(delta==0){

        raiz1 = (-b + sqrt(delta) ) / (2*a);
        raiz2 = (-b - sqrt(delta) ) / (2*a);

        printf("Sua equacao so possui duas raizes iguais, que sao: %.2f e %.2f", raiz1, raiz2);
    }
    else if(delta>=0){

        raiz1 = (-b + sqrt(delta) ) / (2*a);
        raiz2 = (-b - sqrt(delta) ) / (2*a);

        printf("Sua equacao so possui duas raizes distintas, que sao: %.2f e %.2f", raiz1, raiz2);
    }



    return 0;
}