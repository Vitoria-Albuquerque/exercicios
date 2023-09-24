#include<stdio.h>
#include<math.h>

int main(){

    // Um cinema possui capacidade de 100 lugares e está sempre com ocupação total. Certo dia, cada espectador respondeu 
    //a um questionário, no qual constava:

    //- sua idade;

    //- sua opinião em relação ao filme, segundo as seguintes notas:

    //Nota        Significado
    // A              Ótimo
    // B              Bom
    // C             Regular
    // D             Ruim
    // E              Péssimo
    //Elabore um algoritmo que, lendo estes dados, calcule e imprima:

    //a quantidade de respostas ótimo;
    //a diferença percentual entre respostas bom e regular;
    //a média de idade das pessoas que responderam ruim;
    //a percentagem de respostas péssimo e a maior idade que utilizou esta opção;
    //a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu ruim.

    char nota;
    int idade;
    int otimo = 0, maiorOtimo = 0, bom = 0, regular = 0, maiorRuim = 0, pessimo = 0, maiorPessimo = 0;
    float somaIdadeRuim = 0, ruim = 0;

    printf("\n -----------------QUESTIONARIO CINEMA-----------------------\n");

    printf("Nota - Significado");
    printf("\n a - Otimo");
    printf("\n b - Bom");
    printf("\n c - Regular");
    printf("\n d - Ruim");
    printf("\n e - Pessimo \n");

    for (int i = 1; i <= 100; i++) {
        printf("\n Informe sua idade %d (ou digite 's' para sair): ", i);
        scanf("%d", &idade);

        if (idade < 0) {
            printf("Idade inválida. Por favor, insira uma idade válida.\n");
            i--; // Decrementa o contador para repetir a pergunta para o mesmo espectador.
            continue;
        }

        if (idade == 0) {
            break; // Sai do loop se a idade for 0.
        }

        do {
            fflush(stdin);
            printf("Informe a nota %d: ", i);
            scanf(" %c", &nota);
        } while (nota != 'a' && nota != 'b' && nota != 'c' && nota != 'd' && nota != 'e');

        if (nota == 'a') {
            otimo++;
            if (idade >= maiorOtimo)
                maiorOtimo = idade;
        } else if (nota == 'b') {
            bom++;
        } else if (nota == 'c') {
            regular++;
        } else if (nota == 'd') {
            ruim++;
            somaIdadeRuim = somaIdadeRuim + idade;
            if (idade >= maiorRuim)
                maiorRuim = idade;
        } else {
            pessimo++;
            if (idade >= maiorPessimo)
                maiorPessimo = idade;
        }
    }

    printf("\n -----------------RESPOSTAS QUESTIONARIO CINEMA-----------------------\n");


    printf("\n\n Quantidade de respostas otimo: %d", otimo);
    printf("\n Diferenca  entre respostas bom e regular: %.2f%%", ((bom - regular) / (float)bom) * 100);

    if (ruim > 0) {
        printf("\n Media de idade das pessoas que responderam ruim: %.2f", (somaIdadeRuim / ruim));
    } else {
        printf("\n Nenhuma pessoa respondeu ruim.");
    }

    printf("\n Percentagem de respostas pessimo: %.2f%%", (pessimo / 100.0) * 100);
    printf("\n Maior idade que respondeu pessimo: %d", maiorPessimo);
    printf("\n\n Diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim: %d", (maiorOtimo - maiorRuim));

    return 0;
}




    




