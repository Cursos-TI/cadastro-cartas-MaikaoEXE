#include <stdio.h>
   int main() {
   
       printf("-------------------------------------------------\n");
       printf("                CARTAS SUPER TRUNFO            \n");
       printf("-------------------------------------------------\n");
       
       printf("Bem-vindo ao jogo de Cartas Super Trunfo!\n");
        
    //Declaração das variaveis para a 1 carta do jogo.

    char estado1[2];
    char codigo1[10];
    char cidade1[15];
    int populacao1, ponto_turistico1;
    float area1, PIB1;
    
    //Declaração das variaveis para a 2 carta do jogo
    char estado2[2];
    char codigo2[10];
    char cidade2[15];
    int populacao2, ponto_turistico2;
    float area2, PIB2;

    //cadastro da primeira carta
    printf("---- CADASTRO DA PRIMEIRA CARTA ----\n");

    printf("Digite o estado (A-H): ");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta [ex: AO1]: ");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em milhões): ");
    scanf("%f" , &PIB1);

    printf("Digite o ponto turistico: ");
    scanf("%d", &ponto_turistico1);
    
    // Cálculo da Densidade Populacional e PIB per Capita
    float quociente = (populacao1 / area1);
    float quociente1 = (populacao1 / PIB1);

    quociente = (float) populacao1 / area1;
    quociente1 = (float) populacao1 / PIB1;

    printf("Densidade populacional: %.2f\n", quociente);
    printf("PIB per Capita: %.2f\n", quociente1);

    // Cálculo do Super Poder Carta 1

    float superpoder1 = (populacao1 + area1 + PIB1 + ponto_turistico1) - (quociente);

    superpoder1 = (float) (populacao1 + area1 + PIB1 + ponto_turistico1) - (quociente);
      
    printf("Super Poder Carta 1: %.2f\n", superpoder1);


    // Exibição dos Dados primeira carta
    printf("Dados \n");
    printf("CARTA 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area KM²: %f\n", area1);
    printf("PIB: %f Milhões de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n",ponto_turistico1);
    printf("Densidade populacional: %.2f hab/km²\n",quociente);
    printf("PIB per Capita: %.2f Reais\n", quociente1);
    printf("Super Poder Carta 1: %.2f\n", superpoder1);
   

    //cadastro da segunda carta
    printf("---- CADASTRO DA SEGUNDA CARTA ----\n");

     printf("Digite o estado (A-H): ");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta [ex: AO1]: ");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em milhões): ");
    scanf("%f" , &PIB2);

    printf("Digite o ponto turistico: ");
    scanf("%d", &ponto_turistico2);
    
    // Cálculo da Densidade Populacional e PIB per Capita
    float quociente2 = (populacao1 / area2);
    float quociente3 = (populacao1 / PIB2);

    quociente2 = (float) populacao1 / area2;
    quociente3 = (float) populacao1 / PIB2;


    printf("Densidade populacional: %.2f\n", quociente2);
    printf("PIB per Capita: %.2f\n", quociente3);

    // Cálculo do Super Poder Carta 2

    float superpoder2 = (populacao2 + area2 + PIB2 + ponto_turistico2) - (quociente2);

    superpoder2 = (float) (populacao2 + area2 + PIB2 + ponto_turistico2) - (quociente2);
      
    printf("Super Poder Carta 2: %.2f\n", superpoder2);

    // Exibição dos Dados segunda carta

    printf("Dados \n");
    printf("CARTA 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area KM²: %f\n", area2);
    printf("PIB: %f Milhões de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n",ponto_turistico2);
    printf("Densidade populacional: %.2f hab/km²\n",quociente2);
    printf("PIB per Capita: %.2f Reais\n", quociente3);
    printf("Super Poder Carta 2: %.2f\n", superpoder2);


    // Comparação das cartas
    printf("---- COMPARAÇÃO DAS CARTAS ----\n");
    printf("População: Carta 1 venceu: %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu: %d\n", area1 > area2);
    printf("PIB: Carta 1 venceu: %d\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu: %d\n", ponto_turistico1 > ponto_turistico2);
    printf("Densidade Populacional: Carta 1 venceu: %d\n", quociente < quociente2);
    printf("PIB per Capita: Carta 1 venceu: %d\n", quociente1 > quociente3);
    printf("Super Poder: Carta 1 venceu: %d\n", superpoder1 > superpoder2);
    
    return 0;
   }
