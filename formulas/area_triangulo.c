#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil.65001");

    double area, base, altura;
    
    printf("Digite o valor da base: \n");
    scanf("%lf", &base);

    printf("Digite o valor da valor: \n");
    scanf("%lf", &altura);

    area = 0.5 * base * altura;

    printf("O valor da área do triangulo é: %.0lf\n", area);

    return 0;
}