#include <stdio.h>
   int main() {
   
       printf("-------------------------------------------------\n");
       printf("                CARTAS SUPER TRUNFO            \n");
       printf("-------------------------------------------------\n");
       
       printf("Bem-vindo ao jogo de Cartas Super Trunfo!\n");
        
    //Declaração das variaveis para a 1 carta do jogo.

    char estado1, codigo1[10], cidade1[15];
    int população1, ponto_turistico1;
    float area1, PIB1;

    //Declaração das variaveis para a 2 carta do jogo
    char estado2, codigo2[10], cidade2[20];
    int população2, ponto_turistico2;
    float area2, PIB2;

    //cadastro da primeira carta
    printf("---- CADASTRO DA PRIMEIRA CARTA ----\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", &codigo1);

    printf("Digite o codigo da carta [ex: AO1]: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a população: ");
    scanf("%d", &população1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &PIB1);


    printf("Digite o ponto turistico: ");
    scanf("%d", &ponto_turistico1);

    //cadastro da segunda carta
     printf("---- CADASTRO DA SEGUNDA CARTA ----\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", &codigo2);

    printf("Digite o codigo da carta [ex: AO1]: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a população: ");
    scanf("%d", &população2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f", &PIB2);


    printf("Digite o ponto turistico: ");
    scanf("%d", &ponto_turistico2);



    return 0;

   }