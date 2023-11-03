#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ENTREVISTADOS 300
#define MIN_ENTREVISTADOS 50



    // A Copa do Mundo de Futebol Feminino é a competição mais importante no futebol feminino internacional, ela é organizada
    //pela Federação Internacional de Futebol (FIFA) e está acontecendo este ano na França. Você foi contratado para desenvolver
    // um algoritmo para realizar uma pesquisa para saber qual das jogadoras listadas na tabela abaixo é considerada a melhor. 
    //Na pesquisa deverá ser solicitado o nome, idade (maior que 12 anos), sexo (masculino e feminino) da pessoa entrevistada e 
    //o voto (não pode ser diferente dos que se encontram na tabela). O número de pessoas entrevistadas não poderá ser inferior a 50
    // e não poderá ultrapassar 300, o algoritmo poderá ser finalizado a qualquer momento desde que se obedeça ao critério anterior. 

    //Após receber todos os dados dos entrevistados, deverá ser gerado os seguintes relatórios: 

    //✓ Exibir a quantidade de votos que cada jogadora recebeu.
    //✓ Exibir a jogadora mais votada (caso aconteça empate entre mais de uma jogadora, deverá mostrar todas as que empataram).
    //✓ Exibir o nome, idade e sexo de todas as pessoas que participaram da pesquisa, separando por sexo, maior de idade e menor de idade.
    //✓ Exibir o nome das pessoas maior de idade que votaram na Marta Vieira.
    //✓ Exibir a quantidade de mulheres que participaram da pesquisa.



typedef struct {
    char nome[100];
    int idade;
    char sexo;
    char voto[100];
} Entrevistado;

int main() {
    char *votosValidos[] = {"Marta Vieira", "Cristiane Rozeira", "Dzsenifer Marozsan", "Sam Kerr"};
    bool votoValido(char *voto) {
    char *votosValidos[] = {"Marta Vieira", "Cristiane Rozeira", "Dzsenifer Marozsan", "Sam Kerr"};
    for (int i = 0; i < 4; i++) {
        if (strcmp(voto, votosValidos[i]) == 0) {
            return true;
        }
    }
    return false;
}

    
    int numEntrevistados = 0;
    Entrevistado entrevistados[MAX_ENTREVISTADOS];
    int contagemVotos[4] = {0}; 

    int contagemMaiorIdade = 0;
    int contagemMenorIdade = 0;
    int contagemMulheres = 0;

    while (numEntrevistados < MAX_ENTREVISTADOS) {
        printf("Dados do Entrevistado %d:\n", numEntrevistados + 1);

        printf("Nome: ");
        scanf(" %[^\n]s", entrevistados[numEntrevistados].nome);
        printf("Idade: ");
        scanf("%d", &entrevistados[numEntrevistados].idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &entrevistados[numEntrevistados].sexo);

        if (entrevistados[numEntrevistados].idade <= 12 || (entrevistados[numEntrevistados].sexo != 'M' && entrevistados[numEntrevistados].sexo != 'F')) {
            printf("Os dados inseridos nao sao validos. Por favor, reinsira os dados.\n");
            continue;
        }

        printf("Voto (Marta Vieira, Cristiane Rozeira, Dzsenifer Marozsan, Sam Kerr): ");
        scanf(" %[^\n]s", entrevistados[numEntrevistados].voto);

        if (!votoValido(entrevistados[numEntrevistados].voto)) {
            printf("O voto inserido nao e valido. Por favor, reinsira o voto.\n");
            continue;
        }

        for (int i = 0; i < 4; i++) {
            if (strcmp(entrevistados[numEntrevistados].voto, votosValidos[i]) == 0) {
                contagemVotos[i]++;
                break;
            }
        }

        if (entrevistados[numEntrevistados].idade >= 18) {
            contagemMaiorIdade++;
        } else {
            contagemMenorIdade++;
        }

        if (entrevistados[numEntrevistados].sexo == 'F') {
            contagemMulheres++;
        }

        numEntrevistados++;

        char continuar;
        if (numEntrevistados >= MIN_ENTREVISTADOS) {
            printf("Deseja continuar entrevistando? (S/N): ");
            scanf(" %c", &continuar);
            if (continuar == 'N' || continuar == 'n') {
                break;
            }
        }
    }

    printf("\nQuantidade de votos para cada jogadora:\n");
    for (int i = 0; i < 4; i++) {
        printf("%s: %d votos\n", votosValidos[i], contagemVotos[i]);
    }

    printf("\nJogadora(s) mais votada(s):\n");
    int maxVotos = 0;
    for (int i = 0; i < 4; i++) {
        if (contagemVotos[i] > maxVotos) {
            maxVotos = contagemVotos[i];
        }
    }
    for (int i = 0; i < 4; i++) {
        if (contagemVotos[i] == maxVotos) {
            printf("%s\n", votosValidos[i]);
        }
    }

    printf("\nPessoas entrevistadas (maior de idade, menor de idade, por sexo):\n");
    for (int i = 0; i < numEntrevistados; i++) {
        if (entrevistados[i].idade >= 18) {
            printf("Maior de idade: %s (Idade: %d, Sexo: %c)\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].sexo);
        } else {
            printf("Menor de idade: %s (Idade: %d, Sexo: %c)\n", entrevistados[i].nome, entrevistados[i].idade, entrevistados[i].sexo);
        }
        if (entrevistados[i].sexo == 'F') {
            printf("Mulher: %s (Idade: %d)\n", entrevistados[i].nome, entrevistados[i].idade);
        }
    }

    printf("\nPessoas maiores de idade que votaram em Marta Vieira:\n");
    for (int i = 0; i < numEntrevistados; i++) {
        if (entrevistados[i].idade >= 18 && strcmp(entrevistados[i].voto, "Marta Vieira") == 0) {
            printf("%s (Idade: %d)\n", entrevistados[i].nome, entrevistados[i].idade);
        }
    }

    printf("\nQuantidade de mulheres que participaram da pesquisa: %d\n", contagemMulheres);

    return 0;
}
