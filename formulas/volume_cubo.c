#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil.65001");

    double lado, V;

    printf("Informe o valor do lado: ");
    scanf("%lf", lado);

    V = lado * lado * lado;

    printf("O valor do volume é: %.2lf\n", V);

    return 0;
}