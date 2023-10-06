#include<stdio.h>

int main(){

    // Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram o maior e o menor valor.

    int maior, menor, posmaior, posmenor, valor;

    for (int i = 1; i <= 5; ++i) { // Conta de 1 a 5, sendo i o contador
        printf("Digite o valor %d: ", i);
        scanf("%d", &valor);

        if (i == 1) { // Se for o primeiro valor digitado
            maior = valor;
            posmaior = i;
            menor = valor;
            posmenor = i;
        } else {
            if (valor < menor) { // Se o valor for menor que o menor atual
                menor = valor;
                posmenor = i;
            } 
            if (valor > maior) { // Se o valor for maior que o maior atual
                maior = valor;
                posmaior = i;
            }
        }
    }

    printf("Posicao onde se encontra o maior valor %d: %d\n", maior, posmaior);
    printf("Posicao onde se encontra o menor valor %d: %d\n", menor, posmenor);

    return 0;
}
