#include<stdio.h>



    // Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes
    // durante o ano de 2020. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem 
    //direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a 
    //quantidade de locações gratuitas a que cada cliente tem direito. 





void calcularLocacoesGratuitas(int filmesRetirados[], int locacoesGratuitas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        locacoesGratuitas[i] = filmesRetirados[i] / 15;
    }
}


int main() {
    const int tamanho = 500;  
    int filmesRetirados[tamanho];  
    int locacoesGratuitas[tamanho]; 

    for (int i = 0; i < tamanho; i++) {
        filmesRetirados[i] = 150; 
    }

    calcularLocacoesGratuitas(filmesRetirados, locacoesGratuitas, tamanho);

    printf("Quantidade de locacoes gratuitas para cada cliente:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Cliente %d: %d locacoes gratuitas\n", i + 1, locacoesGratuitas[i]);
    }

    return 0;
}

    






