#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil.65001");
    
    double comprimento, largura, altura, V;

    printf("Informe o valor do comprimento: ");
    scanf("%lf", comprimento);

    printf("Informe o valor do largura: ");
    scanf("%lf", largura);

    printf("Informe o valor do altura: ");
    scanf("%lf", altura);

    V = comprimento * largura * altura;

    printf("O valor do volume é: %.2lf\n", V);

    return 0;
}