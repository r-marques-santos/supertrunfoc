#include <stdio.h>

int main() {

    // Variáveis para a primeira carta

    char estado1;
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pibpercapta1;
    float superpoder1;
    
    // Variáveis para a segunda carta

    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pibpercapta2;
    float superpoder2;

    // Leitura dos dados da primeira carta

    printf("Cadastro da Carta 1:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Código (ex: A01): ");
    scanf("%3s", codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("População: ");
    scanf("%lu", &populacao1);
    
    printf("Área (km²): ");
    scanf("%f", &area1);
    
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da segunda carta

    printf("\nCadastro da Carta 2:\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Código (ex: B02): ");
    scanf("%3s", codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("População: ");
    scanf("%lu", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da primeira carta

    printf("\n*****Carta 1*****\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("PIB per Capta: %.2f Reais\n",pibpercapta1);
    printf("Densidade: %.2f hab/Km²\n", densidade_populacional1);

    // Exibição dos dados da segunda carta

    printf("\n*****Carta 2*****\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("PIB per Capta: %.2f Reais\n",pibpercapta2);
    printf("Densidade: %.2f hab/Km²\n", densidade_populacional2);

    // Cálculos
    
    pibpercapta1 = (pib1 * 1000000000.0) / populacao1;
    pibpercapta2 = (pib2 * 1000000000.0) / populacao2;
    densidade_populacional1 = (float) populacao1 / area1;
    densidade_populacional2 = (float) populacao2 / area2;

    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pibpercapta1 + (1.0 / densidade_populacional1);
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pibpercapta2 + (1.0 / densidade_populacional2);

    // Comparação dos dados das duas cartas;

    printf("\n***** Comparação de Cartas *****\n");
    printf("Resultado 1: Carta 1 Venceu *** Resultado 0: Carta 2 Venceu\n");
    printf("População:%lu\n", populacao1>populacao2);
    printf("Área:%d\n", area1>area2);
    printf("PIB:%u\n", pib1>pib2);
    printf("Pontos Turísticos:%d\n", pontos_turisticos1>pontos_turisticos2);
    printf("Densidade Populacional:%.0f\n", 1/densidade_populacional1>1/densidade_populacional2);
    printf("PIB per Capta:%d\n", pibpercapta1>pibpercapta2);
    printf("Super Poder:%d\n", superpoder1 > superpoder2);


    return 0;
}
