// import de bibliotecas e funcoes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>
#include <windows.h>
#include <unistd.h>
#include "functions.c"

// prototype functions das funcoes do ./functions.c

// TODO: fazer as metrificações como cm, m e km em todas as funções de preferencia

// TODO: fazer o menu ser redundante, quando terminar uma funcao, voltar para o menu de selecao de operacoes

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

    showOptions(choiceNumber);

    return 0;
};