#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //Variáveis Carta 1:
  char estado1;
  char codigo1[20];
  char cidade1[100];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;
  float densidadepop1;
  float pibpercapita1;
  //Variáveis Carta 2:
  char estado2;
  char codigo2[20];
  char cidade2[100];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;
  float densidadepop2;
  float pibpercapita2;

  // Área para entrada de dados
  //Mensagem incial
  printf("Vamos iniciar o cadastro de cartas do Super Trunfo Países!\n");
  printf("\n");

  //Cadastro Carta 1:
  printf("Preencha as informações da Carta 1:\n");
  printf("Qual a letra que representa o Estado?");
  scanf(" %c",&estado1);
  printf("Qual o código da cidade?");
  scanf("%s",codigo1);
  printf("Qual o nome da cidade?");
  scanf("%s",cidade1);
  printf("Quanto de população tem essa cidade?");
  scanf("%d",&populacao1);
  printf("Quanto de área (em km²) tem essa cidade?");
  scanf("%f",&area1);
  printf("Qual o PIB (em bilhões de reais) dessa cidade?");
  scanf("%f",&pib1);
  printf("Quantos pontos turísticos tem essa cidade?");
  scanf("%d",&pontosturisticos1);
  printf("\n");

  //Cadastro Carta 2:
  printf("Preencha as informações da Carta 2:\n");
  printf("Qual a letra que representa o Estado?");
  scanf(" %c",&estado2);
  printf("Qual o código da cidade?");
  scanf("%s",codigo2);
  printf("Qual o nome da cidade?");
  scanf("%s",cidade2);
  printf("Quanto de população tem essa cidade?");
  scanf("%d",&populacao2);
  printf("Quanto de área (em km²) tem essa cidade?");
  scanf("%f",&area2);
  printf("Qual o PIB (em bilhões de reais) dessa cidade?");
  scanf("%f",&pib2);
  printf("Quantos pontos turísticos tem essa cidade?");
  scanf("%d",&pontosturisticos2);
  printf("\n");

  //Processamento de dados
  densidadepop1 = populacao1/area1;
  pibpercapita1 = (pib1*1000000000)/populacao1;

  densidadepop2 = populacao2/area2;
  pibpercapita2 = (pib2*1000000000)/populacao2;

  // Área para exibição dos dados da cidade
  //Mensagem incial
  printf("Esse são os dados confirmados de cada carta:\n");
  

  //Resultado Carta 1:
  printf("Carta 1:\n");
  printf("Estado: %c\n",estado1);
  printf("Código: %s\n",codigo1);
  printf("Cidade: %s\n",cidade1);
  printf("População: %d hab\n",populacao1);
  printf("Área: %f km²\n",area1);
  printf("PIB: %f bilhões de reais\n",pib1);
  printf("Número de pontos turísticos: %d\n",pontosturisticos1);
  printf("Densidade Populacional: %f hab/km²\n",densidadepop1);
  printf("PIB per Capita: %f\n",pibpercapita1);
  printf("\n");

  //Resultado Carta 2:
  printf("Carta 2:\n");
  printf("Estado: %c\n",estado2);
  printf("Código: %s\n",codigo2);
  printf("Cidade: %s\n",cidade2);
  printf("População: %d hab\n",populacao2);
  printf("Área: %f  km²\n",area2);
  printf("PIB: %f bilhões de reais\n",pib2);
  printf("Número de pontos turísticos: %d\n",pontosturisticos2);
  printf("Densidade Populacional: %f hab/km²\n",densidadepop2);
  printf("PIB per Capita: %f\n",pibpercapita2);
  printf("\n");

  //Mensagem final
  printf("Cadastro finalizado!\n");

return 0;
} 
