#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil.65001");

    double lado1, lado2, lado3, P;

    printf("Digite o valor do lado 1: ");
    scanf("%lf", &lado1);

    printf("Digite o valor do lado 2: ");
    scanf("%lf", &lado2);

    printf("Digite o valor do lado 3: ");
    scanf("%lf", &lado3);

    P = lado1 + lado2 + lado3;

    printf("O valor de perímetro é: %.1lf\n", P);

    return 0;
}