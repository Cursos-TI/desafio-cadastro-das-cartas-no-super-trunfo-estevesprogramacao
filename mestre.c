#include <stdio.h>

/*
    Carta 1:
    Estado: A
    Código: A01
    Nome da Cidade: Belém
    População: 12325000
    Área: 1521.11 km²
    PIB: 699.28 bilhões de reais
    Número de Pontos Turísticos: 50
   
    Carta 2:
    Estado: B
    Código: B02
    Nome da Cidade: Maceió
    População: 6748000
    Área: 1200.25 km²
    PIB: 300.50 bilhões de reais
    Número de Pontos Turísticos: 30 
    */

int main() {
    
    // Declaração das variáveis da Carta 1
    char estado1, codigodacarta1[5], nomedacidade1[50];
    unsigned long int populacao1;
    float area1, pib1, denspop1, pibpercap1, superpoder1;
    int pontosturisticos1;

    // Declaração das variáveis da Carta 2
    char estado2, codigodacarta2[5], nomedacidade2[50];
    unsigned long int populacao2;
    float area2, pib2, denspop2, pibpercap2, superpoder2;
    int pontosturisticos2;

    char* vencedor[2] = {"Carta 2 venceu", "Carta 1 venceu"};


    // Entrada dos dados da Carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Estado(A): ");
    scanf(" %c", &estado1);
    printf("Código:(EX.:A01) ");
    scanf("%s", codigodacarta1);
    printf("Nome da cidade(BELEM): ");
    scanf(" %[^\n]", nomedacidade1);
    printf("População(12325000):  ");
    scanf("%lu", &populacao1);
    printf("Área (km²)(1521.11):  ");
    scanf("%f", &area1);
    printf("PIB (bilhões)(699.28):  ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos(50):  ");
    scanf("%d", &pontosturisticos1);

    // Entrada dos dados da Carta 2
    printf("\nCadastro da segunda carta:\n");
    printf("Estado(B):  ");
    scanf(" %c", &estado2);
    printf("Código (B02): ");
    scanf("%s", codigodacarta2);
    printf("Nome da cidade (MACEIÓ): ");
    scanf(" %[^\n]", nomedacidade2);
    printf("População (6748000): ");
    scanf("%lu", &populacao2);
    printf("Área (km²)(1200.25):  ");
    scanf("%f", &area2);
    printf("PIB (bilhões)(300.50):  ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos (30): ");
    scanf("%d", &pontosturisticos2);

    // Cálculos para a Carta 1
    denspop1 = (float)populacao1 / area1;
    pibpercap1 = (pib1 * 1e9) / (float)populacao1;
    /* Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos 
    (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional*/ 
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercap1 + (1 / denspop1);
    //(1 / denspop1) inverso da densidade populacional – quanto menor a densidade, maior o "poder")

    // Cálculos para a Carta 2
    denspop2 = (float)populacao2 / area2;
    pibpercap2 = (pib2 * 1e9) / (float)populacao2;
    /* Calcular o Super Poder: Para cada carta, calcule o "Super Poder" somando todos os atributos numéricos 
    (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional*/ 
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercap2 + (1 / denspop2);
    //(1 / denspop2) inverso da densidade populacional – quanto menor a densidade, maior o "poder");

    // Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    int pop = populacao1 > populacao2;
    int area = area1 > area2;
    int pib = pib1 > pib2;
    int pontos = pontosturisticos1 > pontosturisticos2;
    int pibpc = pibpercap1 > pibpercap2;
    int densidade = denspop1 < denspop2; // menor densidade vence
    int super = superpoder1 > superpoder2;

    // Exibição dos resultados das comparações
    printf("\n--- Resultado da Comparação ---\n");
    printf("População: %s (%d)\n", vencedor[pop], pop);
    printf("Área: %s (%d)\n", vencedor[area], area);
    printf("PIB: %s (%d)\n", vencedor[pib], pib);
    printf("Pontos Turísticos: %s (%d)\n", vencedor[pontos], pontos);
    printf("Densidade Populacional: %s (%d)\n", vencedor[densidade], densidade);
    printf("PIB per Capita: %s (%d)\n", vencedor[pibpc], pibpc);
    printf("Super Poder: %s (%d)\n", vencedor[super], super);
    

    return 0;
}
