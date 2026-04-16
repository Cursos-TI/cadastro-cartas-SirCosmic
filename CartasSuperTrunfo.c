#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, codigo[10], nomeDaCidade[50];
    int carta, pontosTuristicos;
    float area, PIB;
    unsigned long int população;

    // Área de entrada de dados da segunda carta

    char estado2, codigo2[10], nomeDaCidade2[50];
    int carta2, pontosTuristicos2;
    float area2, PIB2;
    unsigned long int população2;

  // Área para entrada de dados
    printf("Bem-vindo ao cadastro de cartas do Super Trunfo !\n");
    printf("Por favor, adicione a primeira carta com as informações.\n");

    printf("Digite o número da carta: ");
    scanf("%d", &carta);
    printf("Digite o estado da cidade: ");
    scanf("%s", &estado);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade);
    printf("Digite a população da cidade: ");
    scanf("%d", &população);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);
    float superPoder = população + area + PIB + pontosTuristicos + ( PIB / população);


  // Área para exibição dos dados da cidade
    printf("\n--- Carta %d ---\n", carta);
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nomeDaCidade);
    printf("População: %d\n", população);
    printf("Área (km²): %.2f\n", area);
    printf("PIB (bilhões): %.2f\n", PIB);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", população / area);
    printf("PIB per Capita: %.2f\n", PIB / população);
    printf("Super Poder: %.3f\n", superPoder);

    printf("\n------------  Agora, por favor, adicione a segunda carta  ------------\n");

    // Áre de entrada de dados da segunda carta
    printf("\nDigite o número da carta: ");
    scanf("%d", &carta2);
    printf("Digite o estado da cidade: ");
    scanf("%s", &estado2);
    printf("Digite o código da cidade: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeDaCidade2);
    printf("Digite a população da cidade: ");
    scanf("%d", &população2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos2);
    float superPoder2 = população2 + area2 + PIB2 + pontosTuristicos2 + ( PIB2 / população2);

  // Área para exibição dos dados da cidade
    printf("\n--- Carta %d ---\n", carta2);
    printf("\n--- Dados da Cidade ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nomeDaCidade2);
    printf("População: %d\n", população2);
    printf("Área (km²): %.2f\n", area2);
    printf("PIB (bilhões): %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", população2 / area2);
    printf("PIB per Capita: %.2f\n", PIB2 / população2);
    printf("Super Poder: %.3f\n", superPoder2);

    // Comparação entre as cartas
    printf("\n--- Comparação entre as cartas ---\n");
    if (superPoder > superPoder2) {
        printf("A carta %d é mais forte que a carta %d\n", carta, carta2);
    } else if (superPoder < superPoder2) {
        printf("A carta %d é mais forte que a carta %d\n", carta2, carta);
    } else {
        printf("As cartas %d e %d têm o mesmo poder!\n", carta, carta2);
    }

return 0;
} 