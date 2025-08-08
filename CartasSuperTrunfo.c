#include <stdio.h>

int main() {
    // Dados da carta 1
    char estado1;
    char nome1[20];
    unsigned long int populacao1;
    int area1, npt1;
    float pib1;

    // Dados da carta 2
    char estado2;
    char nome2[20];
    unsigned long int populacao2;
    int area2, npt2;
    float pib2;

    // Entrada da carta 1
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);

    printf("Digite o tamanho populacional da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%d", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npt1);

    // Cálculos da carta 1
    float densidade1 = (float) populacao1 / area1;
    float pibpc1 = pib1 / populacao1;
    float superpoder1 = populacao1 + area1 + pib1 + npt1 + pibpc1 + densidade1;

    // Entrada da carta 2
    printf("\nDigite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite o tamanho populacional da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%d", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npt2);

    // Cálculos da carta 2
    float densidade2 = (float) populacao2 / area2;
    float pibpc2 = pib2 / populacao2;
    float superpoder2 = populacao2 + area2 + pib2 + npt2 + pibpc2 + densidade2

    // Exibição das cartas
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %d km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", npt1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpc1);
    printf("Super poder: %.2f\n", superpoder1);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %d km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", npt2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpc2);
    printf("Super poder: %.2f\n", superpoder2);

    // Comparações (imprimindo 0 ou 1)
    printf("\nCOMPARANDO AS CARTAS (1 = carta 1 venceu, 0 = carta 2 venceu ou empate)\n");

    int resultadopop = populacao1 > populacao2;
    printf("População: %d\n", resultadopop);

    int resultadoarea = area1 > area2;
    printf("Área: %d\n", resultadoarea);

    int resultadopib = pib1 > pib2;
    printf("PIB: %d\n", resultadopib);

    int resultadonpt = npt1 > npt2;
    printf("Pontos turísticos: %d\n", resultadonpt);

    int resultadodensidade = densidade1 < densidade2; // menor densidade vence
    printf("Densidade populacional (menor vence): %d\n", resultadodensidade);

    int resultadopibpc = pibpc1 > pibpc2;
    printf("PIB per capita: %d\n", resultadopibpc);

    int resultadosuperpoder = superpoder1 > superpoder2;
    printf("Super poder: %d\n", resultadosuperpoder);

    return 0;
}
