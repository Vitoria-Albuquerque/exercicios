#include<stdio.h>
#include<math.h>

int main(){

    // Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, p1(x1, y1) e p2(x2, y2) e 
    // calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a fórmula:
    // distancia: √(x2 - x1)² + (y2 - y1)²

    double x1, x2, y1, y2, distancia;

    printf("Informe o valor de x1: ");
    scanf("%lf", &x1);

    printf("Informe o valor de x2: ");
    scanf("%lf", &x2);

    printf("Informe o valor de y1: ");
    scanf("%lf", &y1);

    printf("Informe o valor de y2: ");
    scanf("%lf", &y2);

    distancia = sqrt(pow(x2 - x1,2) + pow(y2-y1,2));

    printf("\n --------------------------------------------");

    printf("\n A distancia e %.4lf entre os pontos indicados!", distancia);





    return 0;
}