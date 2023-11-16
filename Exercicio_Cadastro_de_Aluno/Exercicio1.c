#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define TAM 1000

//Implemente um algoritmo que:

// Inclua até 1000 usuários;
// Edite um usuário;
// Exclua um usuário;
// Busque um usuário pelo e-mail;
// Imprima todos os usuários cadastrados;

// Obrigatório uso de struct, vetor e função. 
// Obrigatório uso de switch case com char para escolha da opção desejada.

// Dados do usuário:

// Id (int) => preenchido automaticamente por números randômicos e não podem ser repetir.
// Nome completo (string)
// Email (string) => validação do campo: verificar se o caractere "@" aparece
// Sexo (string) => validação do campo: aceitar somente as palavras Feminino, Masculino e Indiferente.
// Endereço (string)
// Altura (double) => validação do campo: aceitar valores entre 1 e 2 m.
// Vacina (int) => validação de 1 para sim e 0 para não 
// Individual

typedef struct{
    char nome[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
    int id;
    int status;
} Usuario;

int gerarId() {
    return rand() % 1000 + 1;
}

void cadastrar(Usuario usuarios[], int *totalCadastro){
    if (*totalCadastro < TAM) {
        int indice = *totalCadastro;
        Usuario novoUsuario;

        novoUsuario.id = gerarId();
        novoUsuario.status = 1; 

        printf("Digite o nome completo: ");
        fflush(stdin);
        fgets(novoUsuario.nome, sizeof(novoUsuario.nome), stdin);

        printf("Digite o e-mail: ");
        fgets(novoUsuario.email, sizeof(novoUsuario.email), stdin);

        printf("Digite o sexo (Feminino, Masculino ou Indiferente): ");
        fgets(novoUsuario.sexo, sizeof(novoUsuario.sexo), stdin);

        printf("Digite o endereco: ");
        fgets(novoUsuario.endereco, sizeof(novoUsuario.endereco), stdin);

        printf("Digite a altura (entre 1 e 2 metros): ");
        scanf("%lf", &novoUsuario.altura);

        printf("Usuario vacinado? (1 para sim, 0 para nao): ");
        scanf("%d", &novoUsuario.vacina);

        usuarios[indice] = novoUsuario;
        (*totalCadastro)++;

        printf("\nUsuario cadastrado com sucesso!\n");
    } else {
        printf("\nLimite de usuarios atingido!\n");
    }
}

void imprimir(Usuario usuarios[], int totalCadastro){
    if(totalCadastro == 0){
        printf("\nNao existem usuarios cadastrados.\n");
    }
    else{
        for(int i = 0; i < totalCadastro; i++){
            printf("\n--------------------USUARIO CADASTRADO--------------------------\n");
            printf("\nId: %d", usuarios[i].id);
            printf("\nNome: %s", usuarios[i].nome);
            printf("\nE-mail: %s", usuarios[i].email);
            printf("\nSexo: %s", usuarios[i].sexo);
            printf("\nEndereco: %s", usuarios[i].endereco);
            printf("\nAltura: %.2lf", usuarios[i].altura);
            printf("\nVacinado: %s", usuarios[i].vacina == 1 ? "Sim" : "Nao");
            printf("\nStatus: %s", usuarios[i].status == 1 ? "Ativo" : "Inativo");
            printf("\n------------------------------------------\n");
        }
    }
}

void buscarUsuario(Usuario usuarios[], int totalCadastro, char emailBusca[]){
    int usuarioEncontrado = 0;

    for(int i = 0; i < totalCadastro; i++){
        if (usuarios[i].status == 1 && strcmp(usuarios[i].email, emailBusca) == 0){
           printf("\n--------------------USUARIO ENCONTRADO--------------------------\n");
            printf("\nId: %d", usuarios[i].id);
            printf("\nNome: %s", usuarios[i].nome);
            printf("\nE-mail: %s", usuarios[i].email);
            printf("\nSexo: %s", usuarios[i].sexo);
            printf("\nEndereco: %s", usuarios[i].endereco);
            printf("\nAltura: %.2lf", usuarios[i].altura);
            printf("\nVacinado: %s", usuarios[i].vacina == 1 ? "Sim" : "Nao");
            printf("\n--------------------------\n");
            usuarioEncontrado = 1;
            break;
        }
    }

    if (!usuarioEncontrado) {
        printf("\nUsuario nao encontrado ou inativo.\n");
    }
}

void excluirUsuario(Usuario usuarios[], int totalCadastro, int idExcluir) {
    int usuarioExcluido = 0;

    for (int i = 0; i < totalCadastro; i++) {
        if (usuarios[i].status == 1 && usuarios[i].id == idExcluir) {
            usuarios[i].status = 0; 
            printf("\nUsuario excluido com sucesso.\n");
            usuarioExcluido = 1;
            break;
        }
    }

    if (!usuarioExcluido) {
        printf("\nUsuario nao encontrado ou ja inativo.\n");
    }
}

void alterarUsuario(Usuario usuarios[], int totalCadastro, int idAlterar){
    int usuarioAlterado = 0;

    for(int i = 0; i < totalCadastro; i++){
        if (usuarios[i].status == 1 && usuarios[i].id == idAlterar) {
            printf("\nNome: %s", usuarios[i].nome);
            printf("\nE-mail: %s", usuarios[i].email);
            printf("\nSexo: %s", usuarios[i].sexo);
            printf("\nEndereco: %s", usuarios[i].endereco);
            printf("\nAltura: %.2lf", usuarios[i].altura);
            printf("\nVacinado: %s", usuarios[i].vacina == 1 ? "Sim" : "Nao");

            printf("\nAlterar dados:");

            printf("\nDigite 1 para alterar o nome");
            printf("\nDigite 2 para alterar o e-mail");
            printf("\nDigite 3 para alterar o sexo");
            printf("\nDigite 4 para alterar o endereco");
            printf("\nDigite 5 para alterar a altura");
            printf("\nDigite 6 para alterar a vacina");
            printf("\nDigite 7 para alterar todos os campos\n");

            int opcaoEscolhida;
            scanf("%d", &opcaoEscolhida);

            switch (opcaoEscolhida) {
               case 1:
                    cadastrar(usuarios, &totalCadastro);
                    getchar(); 
                    printf("\nPasso 1: Cadastro realizado com sucesso.\n");
                    break;

                case 2:
                    printf("Alteracao do e-mail: ");
                    fflush(stdin);
                    fgets(usuarios[i].email, sizeof(usuarios[i].email), stdin);
                    break;
                case 3:
                    printf("Alteracao do sexo: ");
                    fflush(stdin);
                    fgets(usuarios[i].sexo, sizeof(usuarios[i].sexo), stdin);
                    break;
                case 4:
                    printf("Alteracao do endereco: ");
                    fflush(stdin);
                    fgets(usuarios[i].endereco, sizeof(usuarios[i].endereco), stdin);
                    break;
                case 5:
                    printf("Alteracao da altura (entre 1 e 2 metros): ");
                    scanf("%lf", &usuarios[i].altura);
                    break;
                case 6:
                    printf("Alteracao da vacina (1 para sim, 0 para nao): ");
                    scanf("%d", &usuarios[i].vacina);
                    break;
                case 7:
                    printf("Alteracao do nome: ");
                    fflush(stdin);
                    fgets(usuarios[i].nome, sizeof(usuarios[i].nome), stdin);

                    printf("Alteracao do e-mail: ");
                    fflush(stdin);
                    fgets(usuarios[i].email, sizeof(usuarios[i].email), stdin);

                    printf("Alteracao do sexo: ");
                    fflush(stdin);
                    fgets(usuarios[i].sexo, sizeof(usuarios[i].sexo), stdin);

                    printf("Alteracao do endereco: ");
                    fflush(stdin);
                    fgets(usuarios[i].endereco, sizeof(usuarios[i].endereco), stdin);

                    printf("Alteracao da altura (entre 1 e 2 metros): ");
                    scanf("%lf", &usuarios[i].altura);

                    printf("Alteracao da vacina (1 para sim, 0 para nao): ");
                    scanf("%d", &usuarios[i].vacina);
                    break;
                default:
                    break;
            }

            printf("\nUsuario alterado com sucesso.\n");
            usuarioAlterado = 1;
            break;
        }
    }

    if (!usuarioAlterado) {
        printf("\nUsuario nao encontrado ou inativo.\n");
    }
}

int main() {
    srand(time(NULL));

    Usuario usuarios[TAM];
    int opcao, totalCadastro = 0, excluirId, alterarId;
    char buscarEmail[50];

    do {
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para imprimir todos os usuarios");
        printf("\nDigite 3 para buscar usuario pelo e-mail");
        printf("\nDigite 4 para excluir usuario");
        printf("\nDigite 5 para alterar usuario");
        printf("\nDigite 0 para sair\n");

        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(usuarios, &totalCadastro);
                getchar(); 
                printf("\nPasso 1: Cadastro realizado com sucesso.\n");
                break;

            case 2:
                imprimir(usuarios, totalCadastro);
                printf("\nPasso 2: Impressao de todos os usuarios cadastrados.\n");
                break;
            case 3:
                printf("\nDigite o e-mail a ser buscado: ");
                fflush(stdin);
                fgets(buscarEmail, sizeof(buscarEmail), stdin);
                buscarUsuario(usuarios, totalCadastro, buscarEmail);
                printf("\nPasso 3: Busca de usuario realizada.\n");
                break;
            case 4:
                printf("Digite o id do usuario a ser excluido: ");
                scanf("%d", &excluirId);
                excluirUsuario(usuarios, totalCadastro, excluirId);
                printf("\nPasso 4: Exclusao de usuario realizada.\n");
                break;
            case 5:
                printf("Digite o id do usuario a ser alterado: ");
                scanf("%d", &alterarId);
                alterarUsuario(usuarios, totalCadastro, alterarId);
                printf("\nPasso 5: Alteracao de usuario realizada.\n");
                break;
            case 0:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } 
    while (opcao != 0);

    printf("\nTodos os dados dos usuarios cadastrados:\n");
    imprimir(usuarios, totalCadastro);

    return 0;
}

