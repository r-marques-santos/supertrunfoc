#include <stdio.h>

int main() {
    // --- Variáveis da Carta 1 ---
    char estado1[3];
    char codigo1[4];
    char cidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // --- Variáveis da Carta 2 ---
    char estado2[3];
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // --- Entrada dos dados da Carta 1 ---
    printf("Cadastro da Carta 1:\n");
    printf("Estado (ex: SP): ");
    scanf("%2s", estado1);
    printf("Código (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // --- Entrada dos dados da Carta 2 ---
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (ex: RJ): ");
    scanf("%2s", estado2);
    printf("Código (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // --- Cálculos ---
    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pibpercapta1 = (pib1 * 1000000000.0) / populacao1;
    float pibpercapta2 = (pib2 * 1000000000.0) / populacao2;

    // --- Exibição das cartas ---
    printf("\n===== CARTA 1 =====\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB per capita: %.2f R$\n", pibpercapta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);

    printf("\n===== CARTA 2 =====\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB per capita: %.2f R$\n", pibpercapta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);

    // --- Comparação (atributo escolhido: População) ---
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo comparado: População\n\n");
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
