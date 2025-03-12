#include <stdio.h>
    int main(){
    // Variavéis para armazenar os nomes das cidades 
    char estado [3];
    char codigo[50]; // Ex. A01,A02...
    char cidade[50];
    int populacao;
    int populacaoB;
    float area;
    float areaB;
    float pib;
    float pibB;
    int pontos_turisticos;
    int pontos_turisticosB;
    float densidade;
    float densidadeB;
    float pib_percapita;
    float pib_percapitaB; 
    double SuperPoder;
    double SuperPoderB;
    int resultado;

    printf("CADASTRE SUAS CARTAS\n");
    printf("Digite o seu estado: \n");
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
    scanf("%d", &pontos_turisticos);
    
    printf("Carta cadastrada com sucesso \n");
    
    printf("O seu Estado é: %c,\n", estado);
    
    printf("Codigo: %s \n" , codigo);
    
    printf("Cidade: %s \n", cidade );
    
    printf("Populacão: %d \n", populacao);
    
    printf("Area: %f \n", area);
    
    printf("PIB: %f \n", pib);
    
    printf("Numero de pontos turisticos: %d \n", pontos_turisticos);
    
    densidade = (populacao / area);
    pib_percapita = (pib / populacao);
    SuperPoder= (populacao + area + pib + pib_percapita / densidade);
    
    
    printf("Densidade: %f \n", densidade);
    
    printf("PIB per capita: %f \n", pib_percapita);
    
    printf("Super Poder: %f \n", SuperPoder);
    
    printf("CADASTRE SUA SEGUNDA CARTA \n");
    printf("Digite o seu estado: \n ");
    scanf( "%c",  &estado);
    
    printf("Digite o codigo da sua cidade \n");
    scanf("%s", &codigo);
    
    printf("Digite a sua cidade \n");
    scanf("%s", &cidade);
    
    printf("Populacão  \n");
    scanf("%d", &populacaoB);
    
    printf("Area em km2 \n");
    scanf("%f", &areaB);
    
    printf("PIB da sua cidade \n");
    scanf("%f", &pibB);
    
    printf("Número de pontos turisticos \n");
    scanf("%d", &pontos_turisticosB);

    densidadeB = (populacaoB / areaB);
    pib_percapitaB = (pibB / populacaoB);
    SuperPoderB = (populacaoB + areaB + pibB + pib_percapitaB / densidadeB);
    
    
    printf("Densidade: %f \n", densidadeB);
    
    printf("PIB per capita: %f \n", pib_percapitaB);
    
    printf("Super Poder: %f \n", SuperPoderB);
    
    printf("Carta cadastrada com sucesso \n");
    
    printf("O seu Estado é: %c ,\n", estado);
    
    printf("Codigo: %s \n" , codigo);
    
    printf("Cidade: %s \n", cidade );
    
    printf("Populacão: %d \n", populacaoB);
    
    printf("Area: %f \n", areaB);
    
    printf("PIB: %f \n", pibB);
    
    printf("Numero de pontos turisticos %d \n", pontos_turisticosB);
    
    printf("Densidade: %f \n", densidadeB);
    
    printf("PIB per capita: %f \n", pib_percapitaB);
    
    printf("Super Poder: %f \n", SuperPoderB);

    //Comparações das cartas 

      printf("População: Carta 1 venceu: %d\n", populacao > populacaoB);

      printf("Area: Carta 1 venceu: %d\n", area > area);

      printf("PIB: Carta 1 venceu: %d\n",pib > pibB);
      
      printf("Pontos Turisticos: Carta 1 venceu %d\n", pontos_turisticos > pontos_turisticosB);

      printf("Densidade Populacional: Carta 1 venceu: %d\n", densidade < densidadeB);

      printf("PIB per capita: Carta 1 venceu: %d\n",pib_percapita > pib_percapitaB);
      
      printf("Super Poder: Carta 1 venceu: %d\n",SuperPoder > SuperPoderB);


        return 0;
     }
