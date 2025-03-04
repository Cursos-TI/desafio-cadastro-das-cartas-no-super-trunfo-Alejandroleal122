#include  <stdio.h>

int main(){
// Variavéis para armazenar os nomes das cidades.
char estado;
char codigo[50]; // Ex. A01,A02...
char cidade[50];
int populacao;
float area;
float pib;
int pontos_turisticos;
float densidade;
float pib_percapita;

printf("CADASTRE SUAS CARTAS\n");
printf("Digite o seu estado (A): \n");
scanf("%c", &estado);


printf("Digite o codigo da sua cidade \n");
scanf("%s", &codigo);

printf("Digite a sua cidade \n");
scanf("%s", &cidade);

printf("Populacao  \n");
scanf("%d", &populacao);

printf("Area em km2 \n");
scanf("%f", &area);

printf("PIB da sua cidade \n");
scanf("%f", &pib);

printf("Número de pontos turisticos \n");
scanf("%f", &pontos_turisticos);

printf("Carta cadastrada com sucesso \n");

printf("O seu Estado é: %c,\n", estado);

printf("Codigo %s \n" , codigo);

printf("Cidade %s \n", cidade );

printf("Populacao %d \n", populacao);

printf("Area %f \n", area);

printf("PIB %f \n", pib);

printf("Numero de pontos turisticos %f \n", pontos_turisticos);


densidade = (populacao / area);
pib_percapita = (pib / populacao);


printf("Densidade: %f \n", densidade);

printf("PIB per capita: %f \n", pib_percapita);


printf("Digite o seu estado (B): \n");
scanf("%c", &estado);


printf("Digite o codigo da sua cidade \n");
scanf("%s", &codigo);

printf("Digite a sua cidade \n");
scanf("%s", &cidade);

printf("Populacao  \n");
scanf("%d", &populacao);

printf("Area em km2 \n");
scanf("%f", &area);

printf("PIB da sua cidade \n");
scanf("%f", &pib);

printf("Número de pontos turisticos \n");
scanf("%f", &pontos_turisticos);

printf("Carta cadastrada com sucesso \n");

printf("O seu Estado é: %c,\n", estado);

printf("Codigo %s \n" , codigo);

printf("Cidade %s \n", cidade );

printf("Populacao %d \n", populacao);

printf("Area %f \n", area);

printf("PIB %f \n", pib);

printf("Numero de pontos turisticos %f \n", pontos_turisticos);


densidade = (populacao / area);
pib_percapita = (pib / populacao);


printf("Densidade: %f \n", densidade);

printf("PIB per capita: %f \n", pib_percapita);

return 0;

}
