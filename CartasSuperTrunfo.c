#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado; // Letra do estado de A até H
  char codigoCarta[4]; // Código da carta: letra + número (ex: A01, B03)
  char nomeDaCidade[30]; // Nome da cidade
  int populacao; // População da cidade
  float area; // Área da cidade em km²
  float pib; // PIB da cidade
  int quantidadePontosTuristicos; // Quantidade de pontos turísticos

  // Área para entrada de dados
  printf("Digite a letra do estado de A até H: ");
  scanf("%c", &estado);

  printf("Digite o código da carta (ex: A01, B03): ");
  scanf("%s", codigoCarta);

  getchar();
  printf("Digite o nome da cidade: ");
  fgets(nomeDaCidade, 30, stdin); 
  nomeDaCidade[strcspn(nomeDaCidade, "\n")] = 0;

  printf("Digite a população da cidade: ");
  scanf("%d", &populacao);

  printf("Digite a área da cidade em km²: ");
  scanf("%f", &area);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib);

  printf("Digite a quantidade de pontos turísticos da cidade: ");
  scanf("%d", &quantidadePontosTuristicos);

  // Área para exibição dos dados da cidade
  printf("\nEstado: %c\n", estado);
  printf("Código: %s\n", codigoCarta);
  printf("Nome da cidade: %s\n", nomeDaCidade);
  printf("População: %d\n", populacao);
  printf("Área: %.2f km²\n", area);
  printf("PIB: %.2f bilhões de reais\n", pib);
  printf("Números de pontos turísticos: %d\n", quantidadePontosTuristicos);

return 0;
} 
