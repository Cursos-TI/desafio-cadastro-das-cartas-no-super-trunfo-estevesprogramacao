#include <stdio.h>

// Desafio Super Trunfo - Países
// Cadastro das Cartas
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

    //Dados da Primeira Carta
    char estado1, codigodacarta1[5], nomedacidade1[20];
    int  populacao1;
    float area1, pib1;
    float denspop1, pibpercap1;
    int pontosturisticos1;

    //Dados da Segunda Carta
    char estado2, codigodacarta2[5], nomedacidade2[20];
    int  populacao2;
    float area2, pib2;
    float denspop2, pibpercap2;
    int pontosturisticos2;

    // Para o cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Digite a letra correspondente ao Estado (ex:A): ");
    scanf(" %c", &estado1);
    printf("Digite o código da cidade (ex:A01):");
    scanf("%s", codigodacarta1);
    printf("Digite o nome da cidade (ex:A01):");
    scanf("%s", nomedacidade1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Para cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite a letra correspondente ao Estado (ex: B): ");
    scanf(" %c", &estado2);
    printf("Digite o código da cidade (ex: B02):");
    scanf("%s", codigodacarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomedacidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibindo os dados
    printf("\n--- Dados da primeira carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigodacarta1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);

     // Para calculo da Densidade Populacional da Carta 2
     denspop1 = ((float)populacao1) / area1;
     // Para Calculo do PIB per Capita
    pibpercap1 = (pib1 * 1000000000) / ((float)populacao1);
    printf("Densidade populacional: %.2f hab/km²\n", denspop1);
    printf("PIB per Capita:R$ %.2f reais\n", pibpercap1);

    printf("\n--- Dados da segunda carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigodacarta2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);

    // Para calculo da Densidade Populacional da Carta 2
      denspop2 = ((float)populacao2) / area2;
    // Para Calculo do PIB per Capita
    pibpercap2 = (pib2 * 1000000000) / ((float)populacao2);
    printf("Densidade populacional: %.2f hab/km²\n", denspop2);
    printf("PIB per Capita: R$ %.2f reais\n", pibpercap2);

    return 0;
}
