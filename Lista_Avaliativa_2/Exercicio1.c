#include <stdio.h>

#define MAX_FUNCIONARIOS 100

    // Em uma fábrica de peças, o salário base dos operários é de R$ 600,00. Além do salário base, cada operário recebe um adicional 
    //de produtividade baseado na quantidade de peças fabricadas por mês. Este adicional é pago de acordo com o seguinte critério:

    // Se o número de peças for inferior ou igual a 50, não existe adicional de produtividade;

    // Se o número de peças for superior a 50 e inferior ou igual a 80, o adicional de produtividade será de R$ 0,50 para cada peça 
    //fabricada acima de 50;

    // Se o número de peças for superior a 80, o adicional de produtividade será de R$ 0,50 para cada peça fabricada acima de
    // 50 até 80 e de R$ 0,75 por peça fabricada acima das 80.

    // Elabore um algoritmo para solicitar de cada funcionário a quantidade de peças fabricadas naquele mês e apresentar o seu salário.
    // Isto deve se repetir para todos os funcionários da empresa, onde o usuário não sabe, inicialmente, quantos funcionários existem 
    //nesta empresa, ou seja, o número de funcionários não será fornecido. 

    // Sua solução proposta deverá possuir as lógicas bem definidas que sejam necessárias a implementação separada em sub-algoritmos 
    //específicos, devendo pelo menos os seguintes sub-algoritmos:
    
    // validaQuantidade que validará o número de peças fabricadas por cada funcionário;
    // calculaSalario que efetuará o cálculo do salário total para cada funcionário.
    // O resultado final será mostrado ao usuário por meio de um procedimento (mostraFinal).




int validaQuantidade() {
    int quantidade;
    do {
        printf("\n Informe a quantidade de pecas fabricadas: ");
        scanf("%d", &quantidade);
        if (quantidade < 0) {
            printf("Quantidade invalida. Digite novamente.\n");
        }
    } while (quantidade < 0);

    return quantidade;
}


float calculaSalario(int quantidade) {
    const int salarioBase = 600;
    float adicional = 0;

    if (quantidade > 50) {
        if (quantidade <= 80) {
            adicional = (quantidade - 50) * 0.5;
        } else {
            adicional = (80 - 50) * 0.5 + (quantidade - 80) * 0.75;
        }
    }

    return salarioBase + adicional;
}


void mostraFinal(int funcionario, float salario) {
    printf(" Funcionario %d - Salario: R$ %.2f\n", funcionario, salario);
}

int main() {
    int funcionario = 1;
    float salarios[MAX_FUNCIONARIOS];
    int numFuncionarios = 0;

    while (funcionario <= MAX_FUNCIONARIOS) {
        int quantidade = validaQuantidade();
        float salario = calculaSalario(quantidade);
        salarios[numFuncionarios] = salario;
        numFuncionarios++;

        mostraFinal(funcionario, salario);

        char continuar;
        printf("\n Deseja calcular o salario para outro funcionario? (S/N): ");
        scanf(" %c", &continuar);

        if (continuar != 'S' && continuar != 's') {
            break;
        }

        funcionario++;
    }


    printf("\n ---------------RESULTADO DE TODOS OS FUNCIONARIOS----------------\n");
    for (int i = 0; i < numFuncionarios; i++) {
        mostraFinal(i + 1, salarios[i]);
    }

    return 0;
}

