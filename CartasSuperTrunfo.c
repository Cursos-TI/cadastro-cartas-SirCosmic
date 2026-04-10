#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  char estado[20];
  char codigo[20];
  char nomeCidade[20];
  int populacao;
  float area;
  float pib;
  int pontosTuristicos;

  // Tutorial passado ao usuário, contendo as intruções do que irá acontecer.
  printf("Bem vindo ao jogo de cartas Super Trunfo\n");
  printf("Será pedido que você adicione duas cartas, inserindo informações: \n 1: Estado; uma letra de 'A' a 'H'. \n 2: Código da carta; Um número de 01 a 04. \n 3: O nome da cidade. \n 4: População; O número de habitantes. \n 5: Área; A área da cidade em quilômetros quadrados. \n 6: PIB; O Produto Interno Bruto da cidade. \n 7: Número de pontos turísticos; A quantidade de pontos turísticos na cidade \n ");
  printf("Digite o nome do Estado:\n ");
  scanf("%s", &estado);
  printf("Digite o codigo da carta: \n");
  scanf("%s", &codigo);
  printf("Digite o nome da cidade: \n");
  scanf("%s", &nomeCidade);
  printf("Digite a populaçao: \n");
  scanf("%d", &populacao);
  printf("Digite a Área: \n");
  scanf("%f", &area);
  printf("Digite o PIB: \n");
  scanf("%f", &pib);
  printf("Digite o número de Pontos Turísticos: \n");
  scanf("%d", &pontosTuristicos);

  printf("Nome do estado %s", estado);
  printf("");
  printf("");
  printf("");
  printf("");
  printf("");
  printf("");

return 0;
} 
