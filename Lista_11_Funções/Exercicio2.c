#include<stdio.h>

    // Faça uma função que receba um número inteiro entre 1 a 12 e imprima em tela o mês e a
    // sua quantidade de dias de acordo com o número digitado pelo usuário. Exemplo:
    // Entrada = 4. Saída = abril.


int main(){

int mes,
            dias=31;

        printf("Digite o mes [1-12]: ");
        scanf("%d", &mes);

        if(mes>12 || mes<1)
            printf("Mes invalido");
        else
            switch( mes )
                {
                    // fevereiro: subtraímos 2 dias aqui e 1 dia no próximo case
                    case 2:
                        dias -=3;
                        break;

                    //meses que possuem 30 dias: só subtraímos 1 dia
                    case 4: case 6: case 9: case 11:
                        dias--;
                        break;

                }

        printf("O mes %d possui %d dias", mes, dias);


    return 0;
}