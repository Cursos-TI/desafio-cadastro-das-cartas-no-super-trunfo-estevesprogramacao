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

    //Atributos da Primira Carta
    char estado1, codigo_da_carta1[5],nome_da_cidade1[20]; // Para inserir o Estado(um Caractere), Código da Carta(string) e o Nome de Cidade(string)
    int  populacao1; // Inserir número inteiro sem casas decimais
    float area1, pib1; // Inserir números com casas decimais
    int pontos_turisticos1; // Inserir número inteiro sem casas decimais

    //Atributos da Segunda Carta
    char estado2, codigo_da_carta2[5], nome_da_cidade2[20];// Para inserir o Estado(um Caractere), Código da Carta(string) e o Nome de Cidade(string)
    int  populacao2; // Inserir número inteiro sem casas decimais
    float area2, pib2;// Inserir números com casas decimais
    int pontos_turisticos2; // Inserir número inteiro sem casas decimais

    // Para o cadastro da primeira carta
        /*
        printf - para exibir dados na tela
        scanf - para solicitar dados do usuário
         */

    printf("Cadastro da primeira carta:\n");// \n para pular para próxima linha
    printf("Digite a letra correspondente ao Estado (ex:A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade1);
    printf("Digite o código da cidade (ex:A01):");
    scanf("%s", &codigo_da_carta1);
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Para cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");
    printf("Digite a letra correspondente ao Estado (ex: B): ");
    scanf(" %c", &estado2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_da_cidade2);
    printf("Digite o código da cidade (ex: B02):");
    scanf("%s", &codigo_da_carta2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibindo os dados
    printf("\n--- Atributos da primeira carta ---\n");//"\n" no início para pular uma linha anterior e no final para o comando ir para a próxima linha 
    printf("Estado: %c\n", estado1);
    printf("Nome da Cidade: %s\n", nome_da_cidade1);
    printf("Código: %s\n", codigo_da_carta1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("\n--- Atributos da segunda carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Nome da Cidade: %s\n", nome_da_cidade2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}

