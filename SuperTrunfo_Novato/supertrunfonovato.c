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
char cidadeA1[20], cidadeB1[20], estadoA1[20], estadoB1[20], codigocarta1[5], codigocarta2[5];
int pontosturisticosA1, pontosturisticosB1;
unsigned long int populacaoA1, populacaoB1;
double pibA1, pibB1;
float areaA1, areaB1, pibpercaptaA1, pibpercaptaB1, populacaoporareaA1, populacaoporareaB1;

//Cadastro Primeiro Carta
printf ("##SuperTrunfo Mestre!##\n");

//Declaração das Variaveis Primeira Carta
printf ("Dados da Primeira Carta:\n");

//Codigo da Carta:
printf ("Estado:\n");
scanf ("%s", &codigocarta1);

//Estado:
printf ("Estado:\n");
scanf ("%s", &estadoA1);

//Cidade
printf ("Nome da Cidade:\n");
scanf (" %[^\n]", &cidadeA1);

//População
printf ("População:\n");
scanf ("%lu", &populacaoA1);

//Pontos Turisticos
printf ("Pontos Turisticos:\n");
scanf ("%d", &pontosturisticosA1);

//Area
printf ("Area da Cidade:\n");
scanf ("%f", &areaA1);

//PIB
printf ("PIB da Cidade:\n");
scanf ("%lf", &pibA1);















}