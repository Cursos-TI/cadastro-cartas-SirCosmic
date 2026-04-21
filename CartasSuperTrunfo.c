#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, codigo[10], nomeDaCidade[50];
    int carta, pontosTuristicos, atributoEscolhido1, atributoEscolhido2, resultado1, resultado2;
    float area, PIB, somaDeAtributos1, somaDeAtributos2;
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

    // Usuario escolhe o atributo para comparar as cartas
    printf("\n--- Comparação entre as cartas ---\n");
    printf("Qual atributo você deseja comparar? \n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos Turísticos \n");
    printf("5. Super Poder \n");

    // Usuário deverá escolher dois atributos para comparar as cartas, caso queira comparar mais de um atributo, 
    // o programa irá comparar os atributos escolhidos e exibir qual carta é mais forte em cada atributo escolhido.
    printf("Digite o primeiro atributo que deseja comparar (1-5): ");
    scanf("%d", &atributoEscolhido1);

    switch (atributoEscolhido1) {
      case 1:
      printf("Você escolheu comparar a população das cartas.\n");
      resultado1 = população > população2 ? 1 : 0;
        break;

      case 2:
      printf("Você escolheu comparar a área das cartas.\n");
      resultado1 = area > area2 ? 1 : 0;
        break;

      case 3:
      printf("Você escolheu comparar o PIB das cartas.\n");
      resultado1 = PIB > PIB2 ? 1 : 0;
        break;

      case 4:
      printf("Você escolheu comparar os pontos turísticos das cartas.\n");
      resultado1 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
        break;

      case 5:
      printf("Você escolheu comparar o super poder das cartas.\n");
      resultado1 = superPoder > superPoder2 ? 1 : 0;
        break;

      default:
        printf("Atributo inválido!\n");
        break;
    }


    printf("Digite o segundo atributo que deseja comparar, não use o mesmo atributo (1-5): ");
    scanf("%d", &atributoEscolhido2);

    // usuario não pode escolher o mesmo atributo para comparar as cartas, caso escolha o mesmo atributo,
    // o programa irá exibir uma mensagem de erro e solicitar que o usuário escolha um atributo diferente.
    if ( atributoEscolhido1 == atributoEscolhido2 ) 
    {
      printf("Erro: Você não pode escolher o mesmo atributo para comparar as cartas. Por favor, escolha um atributo diferente.\n");
      scanf("%d", &atributoEscolhido2); // Solicita que o usuário escolha um atributo diferente para comparar as cartas.
    }


    // Comparação do segundo atributo escolhido

    switch (atributoEscolhido2)
    {
    case 1:
      printf("Você escolheu comparar a população das cartas.\n");
      resultado2 = população > população2 ? 1 : 0;
      break;

    case 2:
      printf("Você escolheu comparar a área das cartas.\n");
      resultado2 = area > area2 ? 1 : 0;
      break;

    case 3:
      printf("Você escolheu comparar o PIB das cartas.\n");
      resultado2 = PIB > PIB2 ? 1 : 0;
      break;

    case 4:
      printf("Você escolheu comparar os pontos turísticos das cartas.\n");
      resultado2 = pontosTuristicos > pontosTuristicos2 ? 1 : 0;
      break;

    case 5:
      printf("Você escolheu comparar o super poder das cartas.\n");
      resultado2 = superPoder > superPoder2 ? 1 : 0;
      break;

    default:
      printf("Atributo inválido!\n");
      break;
    }

    // Exibição dos resultados da comparação dos atributos escolhidos
    printf("\n--- Resultados da Comparação ---\n");
    printf("Comparação do primeiro atributo escolhido: %s\n", resultado1 == 1 ? "Carta 1 é mais forte" : "Carta 2 é mais forte");
    printf("Comparação do segundo atributo escolhido: %s\n", resultado2 == 1 ? "Carta 1 é mais forte" : "Carta 2 é mais forte"); 
    
    if ( resultado1 == 1 && resultado2 == 1 ) 
    {
      printf("Carta 1 é a vencedora da comparação!\n");
    } else if ( resultado1 == 0 && resultado2 == 0 ) 
    {
      printf("Carta 2 é a vencedora da comparação!\n");
    } else 
    {
      printf("As cartas estão empatadas na comparação!\n");
    }

return 0;
} 