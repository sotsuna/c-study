#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <windows.h>
#include <unistd.h>
#include <stdbool.h>

extern int calcBhaskara();
extern int calcTriangleArea();
extern int calcRectanglePerimeter();
extern int calcTrianglePerimeter();
extern int calcCubeVolume();
extern int calcSphereVolume();
extern int calcParalelepipedoVolume();
extern void showOptions(int);

// funcao para calcular a bhaskara
extern int calcBhaskara()
{
    printf("\e[1;1H\e[2J");

    double A, B, C;

    printf("\nBem vindo(a) a Calculadora de Bhaskara!\n");

    printf("\nDigite o valor de A: ");
    scanf("%lf", &A);

    printf("\nDigite o valor de B: ");
    scanf("%lf", &B);

    printf("\nDigite o valor de C: ");
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

        printf("\nO valor de x1 é: %.2lf\n", x1);
        printf("O valor de x2 é: %.2lf\n", x2);
    };
    return 1;
};

// funcao para calcular a area de um triangulo
extern int calcTriangleArea()
{
    double base, altura;

    printf("\e[1;1H\e[2J");

    printf("\nBem vindo(a) a Calculadora da Area do Triângulo!\n");

    printf("Digite o valor da base: ");
    scanf("%lf", &base);

    printf("\nDigite o valor da altura: ");
    scanf("%lf", &altura);

    double area = 0.5 * base * altura;

    printf("O valor da área do triangulo é: %.0lf\n", area);
};

// funcao para calcular o perimetro de um retangulo
extern int calcRectanglePerimeter()
{
    double base, altura;

    printf("\e[1;1H\e[2J");

    printf("\nBem vindo(a) a Calculadora da Area do Retângulo!\n");

    printf("\nDigite o valor da base: ");
    scanf("%lf", &base);

    printf("\nDigite o valor da altura: ");
    scanf("%lf", &altura);

    double perimetro = (base + altura) * 2;

    printf("O perímetro do retângulo é: %.2lf\n", perimetro);
};

// funcao para calcular o perimetro de um triangulo
extern int calcTrianglePerimeter()
{
    double lado1, lado2, lado3;

    printf("\e[1;1H\e[2J");

    printf("\nBem vindo(a) a Calculadora do Perímetro do Triangulo!\n");

    printf("\nDigite o valor do lado 1: ");
    scanf("%lf", &lado1);

    printf("\nDigite o valor do lado 2: ");
    scanf("%lf", &lado2);

    printf("\nDigite o valor do lado 3: ");
    scanf("%lf", &lado3);

    double P = lado1 + lado2 + lado3;

    printf("\nO valor de perímetro é: %.1lf\n", P);
};

// funcao para calcular o volume de um cubo
extern int calcCubeVolume()
{
    double lado;

    printf("\e[1;1H\e[2J");

    printf("\nBem vindo(a) a Calculadora do Volume do Cubo!\n");

    printf("Informe o valor do lado: ");
    scanf("%lf", lado);

    double volume = lado * lado * lado;

    printf("O valor do volume é: %.2lf\n", volume);
};

// funcao para calcular o volume de uma esfera
extern int calcSphereVolume()
{
    const float PI = 3.141592;
    double raio;

    printf("\e[1;1H\e[2J");

    printf("\nBem vindo(a) a Calculadora do Volume da Esfera!\n");
    printf("\nDigite o valor do raio: ");
    scanf("%lf", &raio);

    double v = (4 / 3) * PI * (raio * raio * raio);

    printf("\nO valor do volume é: %.2lf\n");
};

// funcao para calcular o volume de um paralelepipedo
extern int calcParalelepipedoVolume()
{
    double comprimento, largura, altura;

    printf("\e[1;1H\e[2J");

    printf("\nBem vindo(a) a Calculadora do Volume do Paralelepipedo!\n");
    printf("\nInforme o valor do comprimento: ");
    scanf("%lf", comprimento);

    printf("\nInforme o valor do largura: ");
    scanf("%lf", largura);

    printf("\nInforme o valor do altura: ");
    scanf("%lf", altura);

    double volume = comprimento * largura * altura;

    printf("O valor do volume é: %.2lf\n", volume);
    goBackMenu();
};

// menu de opções
extern void showOptions(int choiceNumber)
{

    switch (choiceNumber)
    {
        case 1:
            printf("\nCalculadora de Bhaskara selecionada!");
            printf("\nCarregando...");
            sleep(3);
            calcBhaskara();
            break;
        case 2:
            printf("\nCalculadora da Area do Triângulo selecionada!");
            printf("\nCarregando...");
            sleep(3);
            calcTriangleArea();
            break;
        case 3:
            printf("\nCalculadora do Perimetro do Retângulo selecionada!");
            printf("\nCarregando...");
            sleep(3);
            calcRectanglePerimeter();
            break;
        case 4:
            printf("\nCalculadora do Perimetro do Triângulo selecionada!");
            printf("\nCarregando...");
            sleep(3);
            calcTrianglePerimeter();
            break;
        case 5:
            printf("\nCalculadora do Volume do Cubo selecionada!");
            printf("\nCarregando...");
            sleep(3);
            calcCubeVolume();
            break;
        case 6:
            printf("\nCalculadora do Volume da Esfera selecionada!");
            printf("\nCarregando...");
            sleep(3);
            calcSphereVolume();
            break;
        case 7:
            printf("\nCalculadora do Volume do Paralelepipedo selecionada!");
            printf("\nCarregando...");
            sleep(3);
            calcParalelepipedoVolume();
            break;
        default:
            printf("\nVocê inseriu um número não válido.\nPor favor, execute o programa novamente e insira um número válido!");
            break;
    }
};