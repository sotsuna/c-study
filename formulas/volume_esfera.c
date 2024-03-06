#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil.65001");

    // v = 4/3 * pi * raio^3
    const float A = 4 / 3;    
    const float PI = 3.141592;
    
    double raio, v;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    v = A * PI * (raio * raio * raio);

    printf("O valor do volume é: %.2lf\n");
    
    return 0;
}