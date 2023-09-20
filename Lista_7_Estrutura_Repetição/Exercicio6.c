#include<stdio.h>
#include<math.h>

int main(){

    // Elabore um algoritmo que permita ao usuário realizar a compra de frutas. Assim, apresente a lista de frutas disponíveis, 
    // abaixo, com seus respectivos valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas vezes quiser,
    // e solicitar a quantidade de frutas. Ao final, apresente o valor total da compra. 

    char frutas[][20] = {"Macas", "Bananas", "Laranjas", "Uvas"};
    float precos[] = {2.0, 1.5, 2.3, 3.0};
    
    int escolha;
    float total = 0.0;
    
    printf("\n Bem-vindo a loja de frutas!\n");
    
    do {
        printf("\n Menu de frutas:\n");
        for (int i = 0; i < 4; i++) {
            printf("%d. %s - R$%.2f \n", i + 1, frutas[i], precos[i]);
        }
        
        printf("\n Escolha uma fruta (1 a 4) ou 0 para sair: \n");
        scanf("%d", &escolha);
        
        if (escolha >= 1 && escolha <= 4) {
            int quantidade;
            printf("Quantas %s deseja comprar? ", frutas[escolha - 1]);
            scanf("%d", &quantidade);
            
            if (quantidade > 0) {
                total += precos[escolha - 1] * quantidade;
                printf("%d %ss adicionadas ao carrinho.\n", quantidade, frutas[escolha - 1]);
            }
        } else if (escolha != 0) {
            printf("Escolha invalida!\n");
        }   
        
    } while (escolha != 0);

    printf("------------- VALOR FINAL-----------------\n\n"); 
    
    printf("O valor total da compra e: R$ %.2f \n", total);



    return 0;
}