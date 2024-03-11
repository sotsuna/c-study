#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

// prototype functions pra nao dar b.o de compile depois XD
double calcBhaskara(double, double, double);
double calcTriangleArea(double, double, double);
double calcRectanglePerimeter(double, double, double);
double calcTrianglePerimeter(double, double, double);

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.65001");

    char name[10];

    printf("\nQual é o seu primeiro nome?: ");
    scanf("%c", &name);

    printf("\nSeja bem-vindo(a) %c, tudo bem com você?");

    printf("\nQual tipo de operação ou formula gostaria de realizar?:");

    return 0;
};

// funcao para calcular a bhaskara
double calcBhaskara(double A, double B, double C)
{
    printf("Digite o valor de A: \n");
    scanf("%lf", &A);

    // entrada do valor de B
    printf("Digite o valor de B: \n");
    scanf("%lf", &B);

    // entrada do valor de C
    printf("Digite o valor de C: \n");
    scanf("%lf", &C);

    double delta = (B * B) - (4 * A * C);

    // calculo das raizes
    if (delta < 0)
    {
        printf("Não há raízes reais para essa equação.\n");
    }
    else
    {
        double x1 = (-B + sqrt(delta)) / (2 * A);
        double x2 = (-B - sqrt(delta)) / (2 * A);

        printf("O valor de x1 é: %.2lf\n", x1);
        printf("O valor de x2 é: %.2lf\n", x2);
    }
};
//funcao para calcular a area de um triangulo
double calcTriangleArea(double area, double base, double altura)
{

    printf("Digite o valor da base: \n");
    scanf("%lf", &base);

    printf("Digite o valor da valor: \n");
    scanf("%lf", &altura);

    area = 0.5 * base * altura;

    printf("O valor da área do triangulo é: %.0lf\n", area);
};
//funcao para calcular o perimetro de um retangulo
double calcRectanglePerimeter(double perimetro, double base, double altura)
{
    printf("Digite o valor da base: \n");
    scanf("%lf", &base);

    printf("Digite o valor da altura: \n");
    scanf("%lf", &altura);

    perimetro = (base + altura) * 2;

    printf("O perímetro do retângulo é: %.2lf\n", perimetro);
}

double calcTrianglePerimeter(double lado1, double lado2, double lado3)
{
    printf("Digite o valor do lado 1: ");
    scanf("%lf", &lado1);

    printf("Digite o valor do lado 2: ");
    scanf("%lf", &lado2);

    printf("Digite o valor do lado 3: ");
    scanf("%lf", &lado3);

    double P = lado1 + lado2 + lado3;

    printf("O valor de perímetro é: %.1lf\n", P);
}