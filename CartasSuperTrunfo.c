#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, codigo[10], nomeDaCidade[50];
    int carta, população, pontosTuristicos;
    float area, PIB;
  // Área para entrada de dados
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

return 0;
} 