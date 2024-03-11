#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.65001");

    double perimetro, base, altura;

    printf("Digite o valor da base: \n");
    scanf("%lf", &base);

    printf("Digite o valor da altura: \n");
    scanf("%lf", &altura);

    perimetro = (base + altura) * 2;

    printf("O perímetro do retângulo é: %.2lf\n", perimetro);

    return 0;
}