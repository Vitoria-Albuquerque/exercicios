#include<stdio.h>

int main(){

    // A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos.
    // A prefeitura deseja saber:  

    // a) média do salário da população;
    // b) média do número de filhos;
    // c) maior salário;
    // d) percentual de pessoas com salário até R$100,00.
    // O final da leitura de dados se dará com a entrada de um salário negativo. (Use o comando do - while) .

    float salario, mediaSalario, maiorSalario, porcentagemSalario100, mediaFilhos;
    int numeroFilhos, numeroPessoas, pessoasSalario100;


    while(1){

        printf("Informe o numero de filhos. (Digite -1 se desejar terminar): ");
        scanf("%d", &numeroFilhos);

        if(numeroFilhos == -1){
            break;
        }
        printf("Informe o salario: ");
        scanf("%f", &salario);
        numeroPessoas++; 

        if(salario > maiorSalario){
            maiorSalario = salario;
        }
        if(salario <= 100){
            pessoasSalario100++;
            mediaSalario += salario;
            mediaFilhos += numeroFilhos;
        }
    }

    if(numeroPessoas){
        mediaSalario = mediaSalario /numeroPessoas;
        mediaFilhos = mediaFilhos / numeroPessoas;
        porcentagemSalario100 = pessoasSalario100 / (float)numeroPessoas*100;
        }

    printf("\n --------------------------------------------------- \n");

    printf("\n A media do salario da populacao e %.2f", mediaSalario);
    printf("\n A media do numero de filhor e %.2f",mediaFilhos);
    printf("\n O maior salario e %.2f", maiorSalario);
    printf("\n O percentual de pessoas com salario ate RS100,00 e %.2f", porcentagemSalario100);







    
    return 0;
}