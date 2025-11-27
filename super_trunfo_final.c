#include <stdio.h>

int main() {

    // --------- VARIÁVEIS DAS CARTAS ---------
    char estado1[3], codigo1[4], cidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    char estado2[3], codigo2[4], cidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    // --------- CADASTRO DA CARTA 1 ---------
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf("%2s", estado1);
    printf("Código: ");
    scanf("%3s", codigo1);
    printf("Cidade: ");
    scanf(" %[^
]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // --------- CADASTRO DA CARTA 2 ---------
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf("%2s", estado2);
    printf("Código: ");
    scanf("%3s", codigo2);
    printf("Cidade: ");
    scanf(" %[^
]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
   	scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // --------- CÁLCULOS AUTOMÁTICOS ---------
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // =====================================================
    //      MENU 1 — ESCOLHA DO PRIMEIRO ATRIBUTO
    // =====================================================

    int atributo1, atributo2;
    printf("\n===== ESCOLHA O PRIMEIRO ATRIBUTO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    if (atributo1 < 1 || atributo1 > 5) {
        printf("Opção inválida! Encerrando programa.\n");
        return 0;
    }

    // =====================================================
    //      MENU 2 — ATRIBUTO DINÂMICO
    // =====================================================

    printf("\n===== ESCOLHA O SEGUNDO ATRIBUTO =====\n");

    for (int i = 1; i <= 5; i++) {
        if (i == atributo1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }

    printf("Opção: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
        printf("Opção inválida! Encerrando programa.\n");
        return 0;
    }

    // =====================================================
    // Função auxiliar para recuperar valores por atributo
    // =====================================================

    float getValor(int atributo, float d1, float a1, float p1, float pi1, float po1,
                                float d2, float a2, float p2, float pi2, float po2,
                                int carta) {

        if (carta == 1) {
            return atributo == 1 ? p1 :
                   atributo == 2 ? a1 :
                   atributo == 3 ? pi1 :
                   atributo == 4 ? po1 :
                                   d1;
        } else {
            return atributo == 1 ? p2 :
                   atributo == 2 ? a2 :
                   atributo == 3 ? pi2 :
                   atributo == 4 ? po2 :
                                   d2;
        }
    }

    float v1c1 = getValor(atributo1, densidade1, area1, populacao1, pib1, pontos1,
                                        densidade2, area2, populacao2, pib2, pontos2, 1);
    float v1c2 = getValor(atributo1, densidade1, area1, populacao1, pib1, pontos1,
                                        densidade2, area2, populacao2, pib2, pontos2, 2);

    float v2c1 = getValor(atributo2, densidade1, area1, populacao1, pib1, pontos1,
                                        densidade2, area2, populacao2, pib2, pontos2, 1);
    float v2c2 = getValor(atributo2, densidade1, area1, populacao1, pib1, pontos1,
                                        densidade2, area2, populacao2, pib2, pontos2, 2);

    // =====================================================
    // Regras de vitória
    // =====================================================

    int r1 = (atributo1 == 5) ?
                (v1c1 < v1c2 ? 1 : (v1c2 < v1c1 ? 2 : 0)) :
                (v1c1 > v1c2 ? 1 : (v1c2 > v1c1 ? 2 : 0));

    int r2 = (atributo2 == 5) ?
                (v2c1 < v2c2 ? 1 : (v2c2 < v2c1 ? 2 : 0)) :
                (v2c1 > v2c2 ? 1 : (v2c2 > v2c1 ? 2 : 0));

    float soma1 = v1c1 + v2c1;
    float soma2 = v1c2 + v2c2;

    int vencedor = (soma1 > soma2) ? 1 :
                   (soma2 > soma1) ? 2 : 0;

    printf("\n========== RESULTADO FINAL ==========\n");
    printf("Atributos escolhidos: %d e %d\n", atributo1, atributo2);

    printf("\n--- Carta 1 (%s) ---\n", cidade1);
    printf("Atributo 1: %.2f\n", v1c1);
    printf("Atributo 2: %.2f\n", v2c1);
    printf("Soma: %.2f\n", soma1);

    printf("\n--- Carta 2 (%s) ---\n", cidade2);
    printf("Atributo 1: %.2f\n", v1c2);
    printf("Atributo 2: %.2f\n", v2c2);
    printf("Soma: %.2f\n", soma2);

    printf("\n>>> RESULTADO: ");
    if (vencedor == 1) printf("Carta 1 venceu!\n");
    else if (vencedor == 2) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    return 0;
}
