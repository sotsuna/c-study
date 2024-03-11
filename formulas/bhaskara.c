#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>


int main() {

    //configuracao para aceitar acentuacao
    setlocale(LC_ALL, "Portuguese_Brazil.65001");
    
    //definicao dos valores a serem usados no calculo
    double A, B, C;

    // entrada do valor de A
    printf("Digite o valor de A: \n");
    scanf("%lf", &A);
    
    // entrada do valor de B
    printf("Digite o valor de B: \n");
    scanf("%lf", &B);

    // entrada do valor de C
    printf("Digite o valor de C: \n");
    scanf("%lf", &C);
    
    // valor do delta
    double delta = (B * B) - (4 * A * C);
    
    // calculo das raizes
    if (delta < 0) {
        printf("Não há raízes reais para essa equação.\n");
    } else {
        double x1 = (-B + sqrt(delta)) / (2 * A);
        double x2 = (-B - sqrt(delta)) / (2 * A);

        printf("O valor de x1 é: %.2lf\n", x1);
        printf("O valor de x2 é: %.2lf\n", x2);
    }
    
    return 0;
}