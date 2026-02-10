#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades
    // CARTA 1
    char estado1;
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

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
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    superPoder1 =
        (float)populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pibPerCapita1 +
        ((float)1 / densidade1);

    // CARTA 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

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
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    superPoder2 =
        (float)populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pibPerCapita2 +
        ((float)1 / densidade2);

    // Área para exibição dos dados da cidade
    printf("\nCarta 1:\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.6f bilhões\n", pibPerCapita1);

    printf("Carta 2:\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.6f bilhões\n", pibPerCapita2);

    // Menu com switch para escolher dois atributos
    int atributo1 = 0, atributo2 = 0;
    float val1_atributo1 = 0, val2_atributo1 = 0;
    float val1_atributo2 = 0, val2_atributo2 = 0;
    char nomeatributo1[30], nomeatributo2[30];

    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\nOpção: ");
    scanf("%d", &atributo1);

    switch(atributo1)
    {
        case 1: strcpy(nomeatributo1,"População"); val1_atributo1=populacao1; val2_atributo1=populacao2; break;
        case 2: strcpy(nomeatributo1,"Área"); val1_atributo1=area1; val2_atributo1=area2; break;
        case 3: strcpy(nomeatributo1,"PIB"); val1_atributo1=pib1; val2_atributo1=pib2; break;
        case 4: strcpy(nomeatributo1,"Pontos turísticos"); val1_atributo1=pontos1; val2_atributo1=pontos2; break;
        case 5: strcpy(nomeatributo1,"Densidade demográfica"); val1_atributo1=densidade1; val2_atributo1=densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Menu para o segundo atributo
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    switch(atributo1)
    {
        case 1: printf("2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n"); break;
        case 2: printf("1 - População\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n"); break;
        case 3: printf("1 - População\n2 - Área\n4 - Pontos turísticos\n5 - Densidade demográfica\n"); break;
        case 4: printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade demográfica\n"); break;
        case 5: printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n"); break;
    }
    printf("Opção: ");
    scanf("%d", &atributo2);

    switch(atributo2)
    {
        case 1: strcpy(nomeatributo2,"População"); val1_atributo2=populacao1; val2_atributo2=populacao2; break;
        case 2: strcpy(nomeatributo2,"Área"); val1_atributo2=area1; val2_atributo2=area2; break;
        case 3: strcpy(nomeatributo2,"PIB"); val1_atributo2=pib1; val2_atributo2=pib2; break;
        case 4: strcpy(nomeatributo2,"Pontos turísticos"); val1_atributo2=pontos1; val2_atributo2=pontos2; break;
        case 5: strcpy(nomeatributo2,"Densidade demográfica"); val1_atributo2=densidade1; val2_atributo2=densidade2; break;
        default: printf("Opção inválida!\n"); return 0;
    }

    // Comparação dos atributos
    float soma1=0, soma2=0;

    // Densidade demográfica: menor vence
    if(atributo1==5) {
        if(val1_atributo1<val2_atributo1) soma1+=1;
        else if(val2_atributo1<val1_atributo1) soma2+=1;
        else { soma1+=1; soma2+=1; }
    } else {
        if(val1_atributo1>val2_atributo1) soma1+=1;
        else if(val2_atributo1>val1_atributo1) soma2+=1;
        else { soma1+=1; soma2+=1; }
    }

    if(atributo2==5) {
        if(val1_atributo2<val2_atributo2) soma1+=1;
        else if(val2_atributo2<val1_atributo2) soma2+=1;
        else { soma1+=1; soma2+=1; }
    } else {
        if(val1_atributo2>val2_atributo2) soma1+=1;
        else if(val2_atributo2>val1_atributo2) soma2+=1;
        else { soma1+=1; soma2+=1; }
    }

    // Resultado final
    printf("\n=== Resultado da Comparação ===\n");
    printf("Carta 1: %s\nCarta 2: %s\n\n", cidade1, cidade2);
    printf("Atributo 1 (%s): Carta 1 = %.2f | Carta 2 = %.2f\n", nomeatributo1, val1_atributo1, val2_atributo1);
    printf("Atributo 2 (%s): Carta 1 = %.2f | Carta 2 = %.2f\n", nomeatributo2, val1_atributo2, val2_atributo2);
    printf("Pontos somados: Carta 1 = %.2f | Carta 2 = %.2f\n", soma1, soma2);

    if(soma1>soma2) printf("\nResultado final: Carta 1 (%s) venceu!\n", cidade1);
    else if(soma2>soma1) printf("\nResultado final: Carta 2 (%s) venceu!\n", cidade2);
    else printf("\nResultado final: Empate!\n");

    return 0;
}
