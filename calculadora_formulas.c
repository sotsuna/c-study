// import de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <windows.h>
#include <unistd.h>

// prototype functions pra nao dar b.o de compile depois XD
void calcBhaskara();
void calcTriangleArea();
void calcRectanglePerimeter();
void calcTrianglePerimeter();
void calcCubeVolume();
void calcSphereVolume();
void calcParalelepipedoVolume();

// programa principal
int main()
{
    // formatação do output para que os acentos funcionem
    setlocale(LC_ALL, "Portuguese_Brazil.65001");

    // nome do usuário
    char name[10];

    // número de escolha da lista de operações
    int choiceNumber;

    printf("\nQual é o seu primeiro nome? ");
    scanf("%s", &name);

    printf("\nSeja bem-vindo(a) %s! Tudo bem com você?", name);

    printf("\n\nQual tipo de operação matemática gostaria de realizar?");
    printf("\n----------------------------------------------------------");
    printf("\nLista de operações:\n\t1 - Bhaskara\n\t2 - Área do Triangulo\n\t3 - Perímetro do Retângulo\n\t4 - Perímetro do Triangulo\n\t5 - Volume do Cubo\n\t6 - Volume da Esfera\n\t7 - Volume do Paralelepípedo");
    printf("\n----------------------------------------------------------");
    printf("\nDigite o número da operação que deseja realizar: ");
    scanf("%d", &choiceNumber);

    switch (choiceNumber)
    {
    default:
        printf("\nVocê inseriu um número não válido.\nPor favor, execute o programa novamente e insira um número válido!");
        break;
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
        calcRectanglePerimeter();
        break;
    case 5:
        break;
        // case 6:
        //     break;
        // case 7:
        //     break;
    }

    return 0;
};

// funcao para calcular a bhaskara
void calcBhaskara()
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
};

// funcao para calcular a area de um triangulo
void calcTriangleArea()
{
    double base, altura;

    printf("\nBem vindo(a) a Calculadora da Area do Triângulo!\n");

    printf("Digite o valor da base: \n");
    scanf("%lf", &base);

    printf("Digite o valor da valor: \n");
    scanf("%lf", &altura);

    double area = 0.5 * base * altura;

    printf("O valor da área do triangulo é: %.0lf\n", area);
};

// funcao para calcular o perimetro de um retangulo
void calcRectanglePerimeter()
{
    double base, altura;

    printf("\nBem vindo(a) a Calculadora da Area do Retângulo!\n");

    printf("Digite o valor da base: \n");
    scanf("%lf", &base);

    printf("Digite o valor da altura: \n");
    scanf("%lf", &altura);

    double perimetro = (base + altura) * 2;

    printf("O perímetro do retângulo é: %.2lf\n", perimetro);
};

// funcao para calcular o perimetro de um triangulo
void calcTrianglePerimeter()
{
    double lado1, lado2, lado3;

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
void calcCubeVolume()
{
    double lado;

    printf("Informe o valor do lado: ");
    scanf("%lf", lado);

    double volume = lado * lado * lado;

    printf("O valor do volume é: %.2lf\n", volume);
};

// funcao para calcular o volume de uma esfera
void calcSphereVolume()
{
    const float PI = 3.141592;
    double raio;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    double v = (4 / 3) * PI * (raio * raio * raio);

    printf("O valor do volume é: %.2lf\n");
};

// funcao para calcular o volume de um paralelepipedo
void calcParalelepipedoVolume()
{
    double comprimento, largura, altura;

    printf("Informe o valor do comprimento: ");
    scanf("%lf", comprimento);

    printf("Informe o valor do largura: ");
    scanf("%lf", largura);

    printf("Informe o valor do altura: ");
    scanf("%lf", altura);

    double volume = comprimento * largura * altura;

    printf("O valor do volume é: %.2lf\n", volume);
};