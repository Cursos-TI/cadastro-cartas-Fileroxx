#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // CARTA 1
  char estado1;
  char codigo1[4];
  char cidade1[30];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  float densidade1;
  float pibPerCapita1;

  printf("=== Carta 1 ===\n\n");

  printf("Estado de A até H: ");
  scanf(" %c", &estado1);

  printf("Código (ex: A01): ");
  scanf("%3s", codigo1);

  getchar();
  printf("Nome da cidade: ");
  fgets(cidade1, 30, stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área (km²): ");
  scanf("%f", &area1);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib1);

  printf("Pontos turísticos: ");
  scanf("%d", &pontos1);

  densidade1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;


  // CARTA 2
  char estado2;
  char codigo2[4];
  char cidade2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;
  
  float densidade2;
  float pibPerCapita2;

  printf("\n\n=== Carta 2 ===\n\n");

  printf("Estado de A até H: ");
  scanf(" %c", &estado2);

  printf("Código (ex: A01): ");
  scanf("%3s", codigo2);

  getchar();
  printf("Nome da cidade: ");
  fgets(cidade2, 30, stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área (km²): ");
  scanf("%f", &area2);

  printf("PIB (em bilhões): ");
  scanf("%f", &pib2);

  printf("Pontos turísticos: ");
  scanf("%d", &pontos2);

  densidade2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;

  // Área para exibição dos dados da cidade
  printf("\nCarta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f bilhões\n", pib1);
  printf("Pontos turísticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per capita: %.6f bilhões\n", pibPerCapita1);

  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f bilhões\n", pib2);
  printf("Pontos turísticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per capita: %.6f bilhões\n", pibPerCapita2);

  return 0;
}
