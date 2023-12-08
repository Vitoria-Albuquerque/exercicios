#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Para o controle dos veículos que circulam em uma determinada cidade, a
// Secretaria dos Transportes criou o seguinte registro padrão:

//  Proprietário:__________________________ Combustível:____________________

//  Modelo: _____________________________ Cor: __________________________

// Nº chassi: _________________________ Ano: __________ Placa: ____________

// Em que:

// • Combustível pode ser álcool, diesel ou gasolina;

// • Placa possui os três primeiros valores alfabéticos e os quatro restantes
// valores numéricos.

// Sabendo que não temos uma definição do número máximo de veículos da cidade e
// que é preciso armazenar todos os valores em uma lista encadeada simples,
// construa:

// a. Uma função que liste todos os proprietários cujos carros são do ano de
// 2010 ou posterior e que sejam movidos a diesel. (1,0 ponto)

// b. Uma função que liste todas as placas que comecem com a letra J e terminem
// com 0, 2, 4 ou 7 e seus respectivos proprietários. (1,0 ponto)

// c. Uma função que liste o modelo e a cor dos veículos cujas placas possuem
// como segunda letra uma vogal e cuja soma dos valores numéricos fornece um
// número par. (1,0 ponto)

// d. Uma função que permita a troca de proprietário com o fornecimento do
// número do chassi apenas para carros com placas que não possuam nenhum dígito
// igual a zero. (1,0 ponto)

typedef struct {
  char proprietario[50];
  char combustivel[20];
  char modelo[50];
  char cor[20];
  int chassi;
  int ano;
  char placa[8];
} Veiculo;

typedef struct Nodo {
  Veiculo veiculo;
  struct Nodo *proximo;
} Nodo;

Nodo *inicializarLista() { return NULL; }

Nodo *adicionarVeiculo(Nodo *lista, Veiculo veiculo) {
  Nodo *novoNodo = (Nodo *)malloc(sizeof(Nodo));
  novoNodo->veiculo = veiculo;
  novoNodo->proximo = lista;
  return novoNodo;
}

void listarProprietariosDiesel2010OuPosterior(Nodo *lista) {
  printf("\n----------- Proprietarios de carros Diesel ano 2010 ou posterior "
         "-----------\n");

  Nodo *atual = lista;
  int encontrou = 0;

  while (atual != NULL) {
    if (strcmp(atual->veiculo.combustivel, "diesel\n") == 0 &&
        atual->veiculo.ano >= 2010) {
      printf("Proprietario: %s", atual->veiculo.proprietario);
      encontrou = 1;
    }
    atual = atual->proximo;
  }

  if (!encontrou) {
    printf("Nao ha proprietarios que atendam aos criterios.\n");
  }
}

void listarPlacasJTerminadas_0_2_4_7(Nodo *lista) {
  printf("\n----------- Placas comecando com 'J' e terminadas em 0, 2, 4 ou 7 "
         "-----------\n");

  Nodo *atual = lista;
  int encontrou = 0;

  while (atual != NULL) {
    char placaSemNovaLinha[8];
    strncpy(placaSemNovaLinha, atual->veiculo.placa, 7);
    placaSemNovaLinha[7] = '\0';

    if (placaSemNovaLinha[0] == 'J' &&
        (placaSemNovaLinha[6] == '0' || placaSemNovaLinha[6] == '2' ||
         placaSemNovaLinha[6] == '4' || placaSemNovaLinha[6] == '7')) {
      printf("Placa: %s, Proprietario: %s\n", atual->veiculo.placa,
             atual->veiculo.proprietario);
      encontrou = 1;
    }
    atual = atual->proximo;
  }

  if (!encontrou) {
    printf("Nao ha placas que atendam aos criterios.\n");
  }
}

void listarModeloCorVogalSomaPar(Nodo *lista) {
  printf("\n----------- Modelos e Cores com placas de vogal e soma par "
         "-----------\n");

  Nodo *atual = lista;
  int encontrou = 0;

  while (atual != NULL) {
    if (strchr("AEIOUaeiou", atual->veiculo.placa[1]) != NULL) {
      int somaNumerosPlaca = 0;
      for (int i = 0; i < 7; ++i) {
        if (isdigit(atual->veiculo.placa[i])) {
          somaNumerosPlaca += atual->veiculo.placa[i] - '0';
        }
      }

      if (somaNumerosPlaca % 2 == 0) {
        printf("Modelo: %s Cor: %s\n", atual->veiculo.modelo,
               atual->veiculo.cor);
        encontrou = 1;
      }
    }
    atual = atual->proximo;
  }

  if (!encontrou) {
    printf("Nao ha veiculos que atendam aos criterios.\n");
  }
}

//

Nodo *trocarProprietarioPorChassi(Nodo *lista, int chassi) {
  printf("\n----------- Troca de Proprietario por Chassi (Placas sem digito 0) "
         "-----------\n");

  Nodo *atual = lista;
  int verificador = 1;

  do {
    if (chassi == atual->veiculo.chassi) {
      verificador = 0;
      break;
    }

    if (atual->proximo != NULL)
      atual = atual->proximo;

  } while (atual->proximo != NULL);

  if (verificador != 0) {
    printf("nenhum chassi encontrado!\n");
    return lista;
  }

  int temDigitoZero = 0;
  for (int i = 0; i < 7; ++i) {
    if (atual->veiculo.placa[i] == '0') {
      temDigitoZero = 1;
      printf("A placa do carro possui 0\n");
      break;
    }
  }

  if ((temDigitoZero == 0) && (verificador == 0)) {
    printf("Chassi: %i, Proprietario atual: %s\n", chassi,
           atual->veiculo.proprietario);

    char newOwner[50];

    printf("Novo Proprietario: ");
    fflush(stdin);
    scanf(" %[^\n]s", newOwner);
    fflush(stdin);

    printf("chassi new: %s\n", newOwner);
    strcpy(atual->veiculo.proprietario, newOwner);

    printf("chassi da lista: %s\n", atual->veiculo.proprietario);

    return lista;
  }

  printf("Nenhum veiculo com o chassi fornecido ou possui digito zero na "
         "placa.\n");

  return lista;
}

void liberarLista(Nodo *lista) {
  Nodo *atual = lista;
  Nodo *proximo;
  while (atual != NULL) {
    proximo = atual->proximo;
    free(atual);
    atual = proximo;
  }
}

int main() {
  Nodo *lista = inicializarLista();
  int escolha;

  do {
    printf("\n----------- Menu -----------\n");
    printf("1 - Adicionar Veiculo\n");
    printf("2 - Listar Proprietarios Diesel 2010 ou Posterior\n");
    printf("3 - Listar Placas 'J' Terminadas em 0, 2, 4 ou 7\n");
    printf("4 - Listar Modelo e Cor de Placas com Vogal e Soma Par\n");
    printf("5 - Trocar Proprietario por Chassi (Placas sem digito 0)\n");
    printf("0 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);

    while (getchar() != '\n')
      ;

    switch (escolha) {
    case 1: {
      Veiculo novoVeiculo;
      printf("--Informe os dados do veiculo-- \n");

      printf("Proprietario: ");
      fflush(stdin);
      fgets(novoVeiculo.proprietario, sizeof(novoVeiculo.proprietario), stdin);

      printf("Combustivel (alcool/diesel/gasolina): ");
      fflush(stdin);
      fgets(novoVeiculo.combustivel, sizeof(novoVeiculo.combustivel), stdin);

      printf("Modelo: ");
      fflush(stdin);
      fgets(novoVeiculo.modelo, sizeof(novoVeiculo.modelo), stdin);

      printf("Cor: ");
      fflush(stdin);
      fgets(novoVeiculo.cor, sizeof(novoVeiculo.cor), stdin);

      printf("Chassi: ");
      fflush(stdin);
      scanf("%i", &novoVeiculo.chassi);

      printf("Ano: ");
      fflush(stdin);
      scanf("%d", &novoVeiculo.ano);

      while (getchar() != '\n')
        ;

      printf("Placa (com letras maiusculas): ");
      fflush(stdin);
      fgets(novoVeiculo.placa, sizeof(novoVeiculo.placa), stdin);

      novoVeiculo.placa[strcspn(novoVeiculo.placa, "\n")] = '\0';

      lista = adicionarVeiculo(lista, novoVeiculo);
      break;
    }
    case 2:
      listarProprietariosDiesel2010OuPosterior(lista);
      break;
    case 3:
      listarPlacasJTerminadas_0_2_4_7(lista);
      break;
    case 4:
      listarModeloCorVogalSomaPar(lista);
      break;
    case 5: {
      int chassi;
      printf("Informe o chassi: ");
      scanf("%i", &chassi);
      fflush(stdin);
      lista = trocarProprietarioPorChassi(lista, chassi);
      break;
    }
    case 0:
      printf("Saindo do programa...\n");
      break;
    default:
      printf("Opcao invalida. Tente novamente.\n");
    }

  } while (escolha != 0);

  liberarLista(lista);
  printf("Programa encerrado.\n");

  return 0;
}
