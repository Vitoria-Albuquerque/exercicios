#include<stdio.h>

    // Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise
    // sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore
    // um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e
    // o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este
    // assalariado em Acima, Igual ou Abaixo do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura
    // dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a classificação por
    // extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).

    // A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e os resultados
    // solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. 

    // Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer
    // sempre a validação de todos os dados informados em sub-algoritmos específicos.   

    // Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.

    // Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a quantidade de assalariados
    // com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo


char validaSexo() {
    char sexo;
    do {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            printf("Sexo inválido. Digite M para masculino ou F para feminino (maiúsculo ou minúsculo).\n");
        }
    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');

    return (sexo == 'm' || sexo == 'M') ? 'M' : 'F';
}


float validaSalario() {
    float salario;
    do {
        printf("Informe o salario em reais: R$");
        scanf("%f", &salario);
        if (salario <= 1.00) {
            printf("Salario invalido. Deve ser maior que R$1,00.\n");
        }
    } while (salario <= 1.00);

    return salario;
}


char* classificaSalario(float salario) {
    const float salarioMinimo = 1400.00;
    
    if (salario > salarioMinimo) {
        return "Acima do salario minimo";
    } else if (salario == salarioMinimo) {
        return "Igual ao salario minimo";
    } else {
        return "Abaixo do salario minimo";
    }
}


void mostraClassifica(char sexo, float salario) {
    printf("Sexo: %s\n", (sexo == 'M') ? "Masculino" : "Feminino");
    printf("Salario: R$%.2f\n", salario);
    printf("Classificacao em relacao ao salario minimo: %s\n\n", classificaSalario(salario));
}

int main() {
    int numAssalariados;
    int abaixoDoSalarioMinimo = 0;
    int acimaDoSalarioMinimo = 0;

    printf("Informe o numero de assalariados a serem cadastrados: ");
    scanf("%d", &numAssalariados);

    for (int i = 1; i <= numAssalariados; i++) {
        printf("Dados do Assalariado %d:\n", i);

        char sexo = validaSexo();
        float salario = validaSalario();
        
        if (salario < 1400.00) {
            abaixoDoSalarioMinimo++;
        } else {
            acimaDoSalarioMinimo++;
        }

        mostraClassifica(sexo, salario);
    }

    printf("\n -----------------------RESULTADO DA PESQUISA----------------------- \n");
    printf("\n Assalariados abaixo do salario minimo: %d\n", abaixoDoSalarioMinimo);
    printf("\n Assalariados acima do salario minimo: %d\n", acimaDoSalarioMinimo);

    return 0;
}
