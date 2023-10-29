#include <stdio.h>
#include <stdlib.h>

    // Fazer um programa que solicita o total gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a opção 
    //desejada e imprime o valor total das prestações (se houverem).

    // a) Opção: a vista com 10% de desconto

    // b) Opção: em duas vezes (preço da etiqueta)

    // c) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00).

    // OBS: fazer uma função que imprime as opções, solicita a opção desejada e retorna a opção escolhida. No programa principal, 
    //testar a opção escolhida e ativar a função correspondente (uma função para cada opção). 


void exibe_menu() {
    printf("Opcoes de pagamento disponiveis:\n");
    printf("1. A vista com 10%% de desconto\n");
    printf("2. Em duas vezes (preco da etiqueta)\n");
    printf("3. Parcelado de 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100.00)\n");
}

int main() {
    float valor;
    int opcao;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor);

    if (valor <= 0) {
        printf("Valor invalido. O valor da compra deve ser maior que zero.\n");
        return 1;
    }

    exibe_menu();
    printf("Escolha a opcao de pagamento (1, 2 ou 3): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valor *= 0.9;
            printf("Valor a ser pago a vista com desconto: R$ %.2f\n", valor);
            break;
        case 2:
            printf("O valor sera dividido em duas parcelas de R$ %.2f cada.\n", valor / 2);
            break;
        case 3:
            if (valor > 100.00) {
                int parcelas;
                printf("Digite o numero de parcelas desejado (entre 3 e 10): ");
                scanf("%d", &parcelas);
                if (parcelas >= 3 && parcelas <= 10) {
                    float juros = valor * 0.03 * parcelas;
                    float valor_total = valor + juros;
                    float valor_parcela = valor_total / parcelas;
                    printf("Valor total a ser pago em %d parcelas de R$ %.2f cada.\n", parcelas, valor_parcela);
                } else {
                    printf("Numero de parcelas invalido.\n");
                }
            } else {
                printf("Essa opcao de parcelamento so e valida para compras acima de R$ 100.00.\n");
            }
            break;
        default:
            printf("Opcao invalida. Escolha uma opcao valida (1, 2 ou 3).\n");
            break;
    }

    return 0;
}
