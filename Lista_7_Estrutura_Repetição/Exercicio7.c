#include<stdio.h>
#include<math.h>

int main(){

    // Uma pesquisa sobre algumas características físicas da população de uma determinada região coletou os seguintes dados, 
    //referentes a cada habitante:

    //a) sexo (m e f);

    //b) cor dos olhos (a (azuis), v (verdes), c (castanhos), p (pretos));

    //c) cor dos cabelos (l (loiros), c (castanhos), p (pretos), r (ruivos));

    //d) idade em anos.

    //e) valor do salário.

    //Para o cadastro, todos os campos deve ser validados, ou seja, para sexo, serão aceitos somente as opções ‘m’ e ‘f’; 
    //para cor de olhos, apenas as opções ‘a’, ‘v’, ‘c’ e ‘p’; para cor dos cabelos, apenas as opções ‘l’, ‘c’, ‘p’ e ‘r’; para idade,
    // apenas valores entre 10 e 100 anos, inclusive estes e para o salário, não aceitar valores negativos.
   
    //Para indicar fim dos habitantes pesquisados, o usuário fornecerá um habitante fictício com idade igual a –1.
    
    //Ao final, o algoritmo deve determinar a porcentagem de indivíduos do sexo feminino, com idade entre 18 e 35 anos e que 
    //tenham olhos castanhos e cabelos castanhos.


  char sexo, corOlhos, corCabelos;
  double salario = 0, totalPorcentagem;
  int idadeAnos = 0, totalDeEntrevistados, pessoasComCaracteristicas, caracteristicasTotais;

  do
  {
    printf("--------------\n");
    printf("\n Para sair do programa adicione a idade -1!\n\n");

    caracteristicasTotais = 0;

    idadeAnos = 0;

    // RECEBENDO A IDADE:
    printf("--------------\n");
    while (!(idadeAnos >= 10 && idadeAnos <= 100))
    {
      fflush(stdin);

      printf("Escreva a idade da pessoa: ");
      scanf("%d", &idadeAnos);

      
      if (idadeAnos == -1)
        break;

      
      if (!(idadeAnos >= 10 && idadeAnos <= 100))
        printf("Favor escrever uma idade valida (deve ter de 10 a 100 anos)\n");

      if ((idadeAnos >= 18) && (idadeAnos <= 35))
        caracteristicasTotais++;
    }

    
    if (idadeAnos == -1)
      break;

    printf("--------------\n");

    sexo = 'x';

    // RECEBENDO O SEXO DA PESSOA
    while (!(sexo == 'm' || sexo == 'f'))
    {
      fflush(stdin);

      printf("Escreva o sexo da pessoa: (m ou f) ");
      scanf("%s", &sexo);

      if (!(sexo == 'm' || sexo == 'f'))
        printf("Favor escrever um valor valido (deve ser m ou f)\n");

      if (sexo == 'f')
        caracteristicasTotais++;
    }

    printf("--------------\n");
    corOlhos = 'x';

    // RECEBENDO O COR DOS OLHOS
    while (!(corOlhos == 'a' || corOlhos == 'v' || corOlhos == 'c' || corOlhos == 'p'))
    {
      fflush(stdin);

      printf("Escreva a cor do olho da pessoa (c (castanho), v (verde), a (azul) ou p (pretos)): ");
      scanf("%s", &corOlhos);

      if (!(corOlhos == 'a' || corOlhos == 'v' || corOlhos == 'c' || corOlhos == 'p'))
        printf("Favor escrever um valor valido ( deve ser c (castanho), v (verde), a (azul) ou p (pretos) )\n");

      if (corOlhos == 'c')
        caracteristicasTotais++;
    }

    printf("--------------\n");

    corCabelos = 'x';

    // RECEBENDO O COR DOS CABELOS
    while (!(corCabelos == 'l' || corCabelos == 'c' || corCabelos == 'p' || corCabelos == 'r'))
    {
      fflush(stdin);

      printf("Escreva a cor do cabelo da pessoa (deve ser l (loiro), c (castanho), p (preto) ou r (ruivo)): ");
      scanf("%s", &corCabelos);

      if (!(corCabelos == 'l' || corCabelos == 'c' || corCabelos == 'p' || corCabelos == 'r'))
        printf("Favor escrever um valor valido ( deve ser l (loiro), c (castanho), p (preto) ou r (ruivo) )\n");

      if (corCabelos == 'c')
        caracteristicasTotais++;
    }

    printf("--------------\n");
    salario = -1;

    // RECEBENDO O COR DOS CABELOS
    while (salario < 0)
    {
      fflush(stdin);

      printf("Escreva o salario da pessoa: ");
      scanf("%lf", &salario);

      if (salario < 0)
        printf("Favor escrever um valor valido (o salario deve ser um numero positivo)\n");
    }

    
    if (caracteristicasTotais == 4)
      pessoasComCaracteristicas++;

    totalDeEntrevistados++;

  } while (idadeAnos != -1);

  //  calculo 
  totalPorcentagem = pessoasComCaracteristicas * 100 / totalDeEntrevistados;

  printf("O de entrevistados foram: %d\n O total de pessoas com as caracteristicas passadas foram %d\nA porcentagem de pessoas com essas caracterisiticas foram: %%%.0f\n\n", totalDeEntrevistados, pessoasComCaracteristicas, totalPorcentagem);

  return 0;
}













    return 0;
}