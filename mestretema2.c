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

    int vencedora = 0;

    // Entrada dos dados da Carta 1
    printf("Cadastro da primeira carta:\n");
    printf("Estado(A): ");
    scanf(" %c", &estado1);
    printf("Código:(EX.:A01) ");
    scanf("%s", codigodacarta1);
    printf("Nome da cidade(BELEM): ");
    scanf(" %s", nomedacidade1);
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
    scanf("%s", nomedacidade2);
    printf("População (6748000): ");
    scanf("%lu", &populacao2);
    printf("Área (km²)(1200.25):  ");
    scanf("%f", &area2);
    printf("PIB (bilhões)(300.50):  ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos (30): ");
    scanf("%d", &pontosturisticos2);

    // Cálculos para as Cartas
    denspop1 = (float)populacao1 / area1;
    pibpercap1 = (pib1 * 1e9) / (float)populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercap1 + (1 / denspop1);

    denspop2 = (float)populacao2 / area2;
    pibpercap2 = (pib2 * 1e9) / (float)populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercap2 + (1 / denspop2);
   
    int escolha;
    printf("\nEscolha o atributo para duelar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB per capita\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - Super Poder\n");
    printf("Digite o número da opção: ");
    scanf("%d", &escolha);

    switch(escolha) {
        case 1:
            if (populacao1 > populacao2){
                printf("\nNo Atributo População, a Carta 1 venceu!\n");
                vencedora = 1;
            } else if (populacao2 > populacao1){
                printf("\nNo Atributo População, a Carta 2 venceu!\n");
                vencedora = 2;
            } else {
                printf("\nEmpate no Atributo População!\n");
            }
            break;
        case 2:
            if (area1 > area2){
                printf("\nNo Atributo Área, a Carta 1 venceu!\n");
                vencedora = 1;
            } else if(area2 > area1){
                printf("\nNo Atributo Área, a Carta 2 venceu!\n");
                vencedora = 2;
            } else {
                printf("\nEmpate no Atributo Área!\n");
            }
            break;
        case 3:
            if (pibpercap1 > pibpercap2) {
                printf("\nNo Atributo PIB per Capita, a Carta 1 venceu!\n");
                vencedora = 1;
            } else if(pibpercap2 > pibpercap1){ 
                printf("\nNo Atributo PIB per Capita, a Carta 2 venceu!\n");
                vencedora = 2;
            } else {
                printf("\nEmpate no Atributo PIB per Capita!\n");
            }
            break;
        case 4:
            if (pontosturisticos1 > pontosturisticos2) {
                printf("\nNo Atributo Pontos Turísticos, a Carta 1 venceu!\n");
                vencedora = 1;
            } else if(pontosturisticos2 > pontosturisticos1){
                printf("\nNo Atributo Pontos Turísticos, a Carta 2 venceu!\n");
                vencedora = 2;
            } else {
                printf("\nEmpate no Atributo Pontos Turísticos!\n");
            }
            break;
        case 5:
            if (denspop1 < denspop2) { // Menor densidade vence
                printf("\nNo Atributo Densidade Populacional, a Carta 1 venceu!\n");
                vencedora = 1;
            } else if (denspop2 < denspop1){
                printf("\nNo Atributo Densidade Populacional, a Carta 2 venceu!\n");
                vencedora = 2;
            } else {
                printf("\nEmpate no Atributo Densidade Populacional!\n");
            }
            break;
        case 6:
            if (superpoder1 > superpoder2) {
                printf("\nNo Atributo Super Poder, a Carta 1 venceu!\n");
                vencedora = 1;
            } else if(superpoder2 > superpoder1){
                printf("\nNo Atributo Super Poder, a Carta 2 venceu!\n");
                vencedora = 2;
            } else {
                printf("\nEmpate no Atributo Super Poder!\n");
            } 
            break;
        default:
            printf("\nOpção inválida!\n");
    }

     // Mostrar os valores dos atributos comparados
     switch (escolha) {
        case 1:
            printf("\nCarta 1 - %s (%c): %lu habitantes\n", nomedacidade1, estado1, populacao1);
            printf("Carta 2 - %s (%c): %lu habitantes\n", nomedacidade2, estado2, populacao2);
            break;
        case 2:
            printf("\nCarta 1 - %s (%c): %.2f km²\n", nomedacidade1, estado1, area1);
            printf("Carta 2 - %s (%c): %.2f km²\n", nomedacidade2, estado2, area2);
            break;
        case 3:
            printf("\nCarta 1 - %s (%c): R$ %.2f\n", nomedacidade1, estado1, pibpercap1);
            printf("Carta 2 - %s (%c): R$ %.2f\n", nomedacidade2, estado2, pibpercap2);
            break;
        case 4:
            printf("\nCarta 1 - %s (%c): %d pontos turísticos\n", nomedacidade1, estado1, pontosturisticos1);
            printf("Carta 2 - %s (%c): %d pontos turísticos\n", nomedacidade2, estado2, pontosturisticos2);
            break;
        case 5:
            printf("\nCarta 1 - %s (%c): %.2f hab/km²\n", nomedacidade1, estado1, denspop1);
            printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomedacidade2, estado2, denspop2);
            break;
        case 6:
            printf("\nCarta 1 - %s (%c): %.2f pontos\n", nomedacidade1, estado1, superpoder1);
            printf("Carta 2 - %s (%c): %.2f pontos\n", nomedacidade2, estado2, superpoder2);
            break;
    }

        // #### Resultado final ####
    if (vencedora == 1) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomedacidade1);
    } else if (vencedora == 2) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    }
    

        return 0;
        
}