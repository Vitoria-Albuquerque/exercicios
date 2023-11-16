#include<stdio.h>
#include<math.h>

int main(){

    // Desenvolver um algoritmo que solicita o usuário um determinado um mês/ano, determinar e exibir o número de dias do mês/ano
    // digitado. Considerar a existência de anos bissextos: (ano % 4 = 0 e ano % 100 =/= 0) ou ano % 400 = 0. Ao final do programa 
    //deve ser impressa a seguinte mensagem: VOCÊ DESEJA OUTRAS ENTRADAS (S/?)? Se a resposta for S o programa deverá retornar ao 
    //começo, caso contrário (qualquer outro caractere) deverá encerrar a sua execução. 



    char continuar;
    do {
        int mes, ano;
        printf("Digite o mes (1-12): ");
        scanf("%d", &mes);

        if (mes < 1 || mes > 12) {
            printf("Mes invalido. Por favor, insira um valor entre 1 e 12.\n");
            continue;
        }

        printf("Digite o ano: ");
        scanf("%d", &ano);

        int diasNoMes;

        if (mes == 2) {
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
                diasNoMes = 29; 
            } else {
                diasNoMes = 28; 
            }
        } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
            diasNoMes = 30; 
        } else {
            diasNoMes = 31; 
        }

        printf("O mes %d do ano %d tem %d dias.\n", mes, ano, diasNoMes);

        printf("VOCE DESEJA OUTRAS ENTRADAS (S/?)? ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');



    return 0;
}
