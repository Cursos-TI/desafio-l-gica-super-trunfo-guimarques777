#include <stdio.h>

int main(){
//variáveis para armazenar os dados da primeira carta.
char estado1[3];
char codigo1[5];
char cidade1[20];
unsigned long int populacao1;
float area1;
double pib1;
int pontosTuristicos1;
float densidade1;
float ppc1;
float superpoder1;

//variáveis para armazenar os dados da segunda carta.
char estado2[3];
char codigo2[5];
char cidade2[20];
unsigned long int populacao2;
float area2;
double pib2;
int pontosTuristicos2;
float densidade2;
float ppc2;
float superpoder2;



printf("Você ira usar 2 cartas nessa rodada.\n");

//entrada de dados da primeira carta.

printf("Vamos começar com a primeira carta\n");

printf("Escolha uma letra de A a H para representar o estado de sua primeira carta :\n");
scanf("%s", estado1);

printf("Agora junto com a letra de seu estado, escolha um numero de 01 a 04 e forme o codigo de seu estado (exemplo: A02) :\n");
scanf("%s", codigo1);

printf("Qual o nome da cidade da sua primeira carta\n");
scanf("%s", cidade1);

printf("Qual o tamanho da população da sua primeira carta?\n");
scanf("%lu", &populacao1);

printf("Qual a área da sua primeira carta?\n");
scanf("%f", &area1);

printf("Qual o PIB da sua primeira carta?\n");
scanf("%lf", &pib1);

printf("Quantos pontos turísticos tem em sua primeira carta?\n");
scanf("%d", &pontosTuristicos1);

//entrada de dados da segunda carta.

printf("Certo, agora você ira digitar os dados da segunda carta\n");

printf("Escolha outra letra de A a H para representar o estado de sua segunda carta :\n");
scanf("%s", estado2);

printf("Agora junto com a letra de seu estado, escolha um numero de 01 a 04 e forme o codigo de seu estado (exemplo: A02) :\n");
scanf("%s", codigo2);

printf("Qual o nome da cidade da sua segunda carta\n");
scanf("%s", cidade2);

printf("Qual o tamanho da população da sua segunda carta?\n");
scanf("%lu", &populacao2);

printf("Qual a área da sua segunda carta?\n");
scanf("%f", &area2);

printf("Qual o PIB da sua segunda carta?\n");
scanf("%lf", &pib2);

printf("Quantos pontos turísticos tem em sua segunda carta?\n");
scanf("%d", &pontosTuristicos2);
//calculo da densidade demográfica e PIB per capita.

densidade1 = populacao1 / area1;
ppc1 = pib1 / populacao1;
superpoder1 = (float)populacao1 + (float)area1 + (float)pib1 + (float)pontosTuristicos1 + (float)ppc1 + (1 / densidade1);

densidade2 = populacao2 / area2;
ppc2 = pib2 / populacao2;
superpoder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontosTuristicos2 + (float)ppc2 + (1 / densidade2);
//exibição dos dados das cartas.

printf("====Carta 1:====\n");
printf("Estado: %s\n", estado1);
printf("Código da carta: %s\n", codigo1);
printf("Nome da Cidade: %s\n", cidade1);
printf("Tamanho da população: %lu\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB:R$ %.2lf\n", pib1);
printf("Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
printf("PIB per capita: R$ %.2f\n", ppc1);
printf("Superpoder: %.2f\n", superpoder1);

printf("====Carta 2:=====\n");
printf("Estado: %s\n", estado2);
printf("Código da carta: %s\n", codigo2);
printf("Nome da Cidade: %s\n", cidade2);
printf("Tamanho da população: %lu\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB:R$ %.2lf\n", pib2);
printf("Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
printf("PIB per capita: R$ %.2f\n", ppc2);
printf("Superpoder: %.2f\n", superpoder2);

//comparação de atributos das cartas.

printf("====Comparação de Atributos:====\n");
if(populacao1 > populacao2) {
    printf("População: A carta 1 venceu.\n");
} else if(populacao1 < populacao2) {
    printf("População: A carta 2 venceu.\n");
} else {
    printf("População: empate.\n");
}
if(area1 > area2) {
    printf("Área: A carta 1 venceu.\n");
} else if(area1 < area2) {
    printf("Área: A carta 2 venceu.\n");
} else {
    printf("Área: empate.\n");
}
if(pib1 > pib2) {
    printf("PIB: A carta 1 venceu.\n");
} else if(pib1 < pib2) {
    printf("PIB: A carta 2 venceu.\n");
} else {
    printf("PIB: empate.\n");
}
if (pontosTuristicos1 > pontosTuristicos2) {
    printf("Pontos Turísticos: A carta 1 venceu.\n");
} else if(pontosTuristicos1 < pontosTuristicos2) {
    printf("Pontos Turísticos: A carta 2 venceu.\n");
} else {
    printf("Pontos Turísticos: empate.\n");
}
if(densidade1 < densidade2) {
    printf("Densidade Populacional: A carta 1 venceu.\n");
} else if(densidade1 > densidade2) {
    printf("Densidade Populacional: A carta 2 venceu.\n");
} else {
    printf("Densidade Populacional: empate.\n");
}
if(ppc1 > ppc2) {
    printf("PIB per capita: A carta 1 venceu.\n");
} else if(ppc1 < ppc2) {
    printf("PIB per capita: A carta 2 venceu.\n");
} else {
    printf("PIB per capita: empate.\n");
}
if(superpoder1 > superpoder2) {
    printf("Superpoder: A carta 1 venceu.\n");
} else if(superpoder1 < superpoder2) {
    printf("Superpoder: A carta 2 venceu.\n");
} else {
    printf("Superpoder: empate.\n");
}



return 0;




}