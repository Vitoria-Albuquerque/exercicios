#include<stdio.h>
#define TAM_VOTOS 6

int main(){

    //Em uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos. Os dados utilizados
    // para a contagem dos votos obedecem à seguinte codificação:  

    //- 1,2,3,4 = voto para os respectivos candidatos;
    // - 5 = voto nulo;
    // - 6 = voto em branco;
    
    // Elabore um algoritmo que leia o código do candidato em um voto. Calcule e escreva:
    // - total de votos para cada candidato;
    // - total de votos nulos;
    // - total de votos em branco;
    // Como finalizador do conjunto de votos, tem-se o valor 0.


  char tipo_voto[][14] = {"Candidato1", "Candidato2", "Candidato3", "Candidato4", "Votos nulos", "Votos brancos"};
  int votos[TAM_VOTOS] = {0, 0, 0, 0, 0, 0};
  int i, voto;

  printf("Entre com uma sequência de votos terminada pelo número 0\n");
  voto = 1;

  while(voto != 0){
    scanf("%d", &voto);
    
    if(voto >= 1 && voto <= TAM_VOTOS) 
      votos[voto - 1]++;
  }
 
   
  puts("-----Contagem dos votos-------");
  for(i=0; i < TAM_VOTOS; i++){
    printf("%s = %d\n", tipo_voto[i], votos[i]);
  }
    










    return 0;
}
