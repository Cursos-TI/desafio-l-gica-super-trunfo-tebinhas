#include <stdio.h>

int main(){

/*Super-Trunfo Paises // nivel novato
No nivel novato, o jogo deve ter:
- Comparação entre atributos com estruturas de decisao ('if' e 'else')
- Resultados das comparações impressos
- Densidade populacional, a menor vencera na comparação

Atributos:
código da carta
estado
nome da cidade
população
área 
PIB
número de pontos turísticos
*/

//Atributos:
char cidade1[20], cidade2[20], estado1[20], estado2[20], codigocarta1[5], codigocarta2[5];
int pontosturisticos1, pontosturisticos2;
unsigned long int populacao1, populacao2;
double pib1, pib2;
float area1, area2, pibpercapta1, pibpercapta2, populacaoporarea1, populacaoporarea2;

//Cadastro Carta 1
printf ("##SuperTrunfo Mestre!##\n");

//Declaração Atributos Carta 1
printf ("Dados da Carta 1:\n");

//Codigo da Carta:
printf ("Codigo da Carta:\n");
scanf ("%s", &codigocarta1);

//Estado:
printf ("Estado:\n");
scanf ("%s", &estado1);

//Cidade
printf ("Nome da Cidade:\n");
scanf (" %[^\n]", &cidade1);

//População
printf ("População:\n");
scanf ("%lu", &populacao1);

//Pontos Turisticos
printf ("Pontos Turisticos:\n");
scanf ("%d", &pontosturisticos1);

//Area
printf ("Area da Cidade:\n");
scanf ("%f", &area1);

//PIB
printf ("PIB da Cidade:\n");
scanf ("%lf", &pib1);


//Declaração Atributos Carta 2
printf ("Dados da Carta 2:\n");

//Codigo da Carta:
printf ("Codigo da Carta:\n");
scanf ("%s", &codigocarta2);

//Estado:
printf ("Estado:\n");
scanf ("%s", &estado2);

//Cidade
printf ("Nome da Cidade:\n");
scanf (" %[^\n]", &cidade2);

//População
printf ("População:\n");
scanf ("%lu", &populacao2);

//Pontos Turisticos
printf ("Pontos Turisticos:\n");
scanf ("%d", &pontosturisticos2);

//Area
printf ("Area da Cidade:\n");
scanf ("%f", &area2);

//PIB
printf ("PIB da Cidade:\n");
scanf ("%lf", &pib2);

//Calculo pibpercapta e densidade populacional
pibpercapta1 = pib1 / populacao1;
populacaoporarea1 = populacao1 / area1;
pibpercapta2 = pib2 / populacao2;
populacaoporarea2 = populacao2 / area2;

//Apresentação das Cartas:
//Carta 1
printf ("Carta %s\n",codigocarta1);
printf ("Estado: %s, Cidade: %s\n", estado1 ,cidade1);
printf ("População: %lu\n", populacao1);
printf ("Pontos Turisticos: %d\n", pontosturisticos1);
printf ("Área: %.0f km²\n", area1);
printf ("População por área: %.0f\n", populacaoporarea1);
printf ("PIB: %.0f\n", pib1);
printf ("PIB per capta: %.0f\n", pibpercapta1);

//Carta 2
printf ("Carta %s\n",codigocarta2);
printf ("Estado: %s, Cidade: %s\n", estado1 ,cidade2);
printf ("População: %lu\n", populacao1);
printf ("Pontos Turisticos: %d\n", pontosturisticos2);
printf ("Área: %.0f km²\n", area1);
printf ("População por área: %.0f\n", populacaoporarea2);
printf ("PIB: %.0f\n", pib2);
printf ("PIB per capta: %.0f\n", pibpercapta2);









}