#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

  // Declaração de variáveis 1
  unsigned long int popupacao1;
  int pontos_turisticos1;
  float area1, pib1;
  char estado1;
  char codigo1[50], cidade1[50];

  // Entrada da carta 1
  printf("Digite os dados da Carta 1\n");
  printf("Digite o estado (somente a primeira letra): ");
  scanf(" %c", &estado1);
  printf("Digite o codigo da carta (ex: A01, B03): ");
  scanf("%s", codigo1);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);
  printf("Digite a quantidade de habitantes: ");
  scanf("%lu", &popupacao1);
  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area1);
  printf("Digite o pib: ");
  scanf("%f", &pib1);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontos_turisticos1);

  // Declaração de variáveis 2
  unsigned long int popupacao2;
  int pontos_turisticos2;
  float area2, pib2;
  char estado2;
  char codigo2[50], cidade2[50];

  // Entrada da carta 2
  printf("\nDigite os dados da Carta 2\n");
  printf("Digite o estado (somente a primeira letra): ");
  scanf(" %c", &estado2);
  printf("Digite o codigo da carta (ex: A01, B03): ");
  scanf("%s", codigo2);
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);
  printf("Digite a quantidade de habitantes: ");
  scanf("%lu", &popupacao2);
  printf("Digite a area em quilometros quadrados: ");
  scanf("%f", &area2);
  printf("Digite o pib: ");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turisticos: ");
  scanf("%d", &pontos_turisticos2);

  float densidade_populacional1 = (float)popupacao1 / area1;
  float pib_per_capita1 = (float)pib1 / popupacao1;

  // Usando inverso aditivo da densidade populacional para o Super Poder:
  float super_poder1 = (float)popupacao1 + area1 + pib1 + pontos_turisticos1 +
                       pib_per_capita1 - densidade_populacional1;

  // Informaçoes da carta 1
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Codigo da carta: %s\n", codigo1);
  printf("Nome da cidade: %s\n", cidade1);
  printf("Quantidade de habitantes: %lu\n", popupacao1);
  printf("Area: %.2fkm\n", area1);
  printf("Pib: %.2f bilhoes de reais\n", pib1);
  printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional1);
  printf("PIB per capita: %.2f reais\n", pib_per_capita1);
  printf("Super poder: %.2f\n", super_poder1);

  float densidade_populacional2 = (float)popupacao2 / area2;
  float pib_per_capita2 = (float)pib2 / popupacao2;

  // Usando inverso aditivo da densidade populacional para o Super Poder:
  float super_poder2 = (float)popupacao2 + area2 + pib2 + pontos_turisticos2 +
                       pib_per_capita2 - densidade_populacional2;

  // Informaçoes da carta 2
  printf("\nCarta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo da carta: %s\n", codigo2);
  printf("Nome da cidade: %s\n", cidade2);
  printf("Quantidade de habitantes: %lu\n", popupacao2);
  printf("Area: %.2fkm\n", area2);
  printf("Pib: %.2f bilhoes de reais\n", pib2);
  printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional2);
  printf("PIB per capita: %.2f reais\n", pib_per_capita2);
  printf("Super poder: %.2f\n", super_poder2);

  printf("\n Comparacao das cartas:\n");
  printf("Populacao: Carta %d venceu (%d)\n", (popupacao1 < popupacao2) + 1,
         popupacao1 > popupacao2);
  printf("Area: Carta %d venceu (%d)\n", (area1 < area2) + 1, area1 > area2);
  printf("PIB: Carta %d venceu (%d)\n", (pib1 < pib2) + 1, pib1 > pib2);
  printf("Pontos turisticos: Carta %d venceu (%d)\n",
         (pontos_turisticos1 < pontos_turisticos2) + 1,
         pontos_turisticos1 > pontos_turisticos2);
  printf("Densidade Populacional: Carta %d venceu (%d)\n",
         (densidade_populacional1 > densidade_populacional2) + 1,
         densidade_populacional1 < densidade_populacional2);
  printf("PIB per capita: Carta %d venceu (%d)\n",
         (pib_per_capita1 < pib_per_capita2) + 1,
         pib_per_capita1 > pib_per_capita2);
  printf("Super poder: Carta %d venceu (%d)\n",
         (super_poder1 < super_poder2) + 1, super_poder1 > super_poder2);

  return 0;
}