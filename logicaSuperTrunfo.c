#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    char codigo1[4];
    char estado1[3];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1, percapita1, superpoder1;

    //Variáveis - carta 02
    char codigo2[4];
    char estado2[3];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;    
    float densidade2, percapita2, superpoder2;


    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
     //Dados da carta 1
    printf("Dados da 1° carta:\n");
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Código(A01):  ");
    scanf("%s", codigo1);
    printf("Cidade:  ");
    scanf("%s", cidade1);
    printf("População:  ");
    scanf("%d", &populacao1);
    printf("Área:  ");
    scanf("%f", &area1);
    printf("PIB:  ");
    scanf("%f", &pib1);
    printf("Pontos: ");
    scanf("%d", &pontos1);

    printf("\n");
    
    //Dados da carta 02
    printf("Dados da 2° carta:\n");
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Carta 2(A0):  ");
    scanf("%s", codigo2);
    printf("Cidade:  ");
    scanf("%s", cidade2);
    printf("População:  ");
    scanf("%d", &populacao2);
    printf("Área:  ");
    scanf("%f", &area2);
    printf("PIB:  ");
    scanf("%f", &pib2);
    printf("Pontos: ");
    scanf("%d", &pontos2);

    printf("\n");

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;


    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    //Comparacao de Cartas

    // Populacao
   if (populacao1 > populacao2) {
        printf("Populacao: %1u\n", populacao1);
        printf("Populacao: %1u\n", populacao2);
        printf("Populacao: carta 1 venceu\n");
    } else if (populacao2 > populacao1) {
        printf("Populacao: %1u\n", populacao1);
        printf("Populacao: %1u\n", populacao2);
        printf("Populacao: Carta 2 Venceu\n");
    }   else {
        printf("Populacao: Empatou\n");
    }

    printf("\n");

    //Area
    if (area1 > area2) {
        printf("Area: %.2f Km²\n", area1);
        printf("Area: %.2f Km²\n", area2);
        printf("A cidade 1\n");
    } else if (area2 > area1) {
        printf("Area: %.2f Km²\n", area1);
        printf("Area: %.2f Km²\n", area2);
        printf("Area: Carta 2 Venceu\n");
    }   else {
        printf("Area: Empatou\n");
    }

    printf("\n");

    //PIB

    if (pib1 > pib2) {
        printf("PIB: %.2f Bilhões de reais\n", pib1);
        printf("PIB: %.2f Bilhões de reais\n", pib2);
        printf("PIB: carta 1 venceu\n");
    } else if (pib2 > pib1) {
        printf("PIB: %.2f Bilhões de reais\n", pib1);
        printf("PIB: %.2f Bilhões de reais\n", pib2);
        printf("PIB: Carta 2 Venceu\n");
    }   else {
        printf("PIB: Empatou\n");
    }

    printf("\n");

    //Pontos turisticos

     if (pontos1 > pontos2) {
        printf("Pontos Turisticos: %d\n", pontos1); 
        printf("Pontos Turisticos: %d\n", pontos2);   
        printf("Pontos Turisticos: carta 1 venceu\n");
    } else if (pontos2 > pontos1) {
        printf("Pontos Turisticos: %d\n", pontos1); 
        printf("Pontos Turisticos: %d\n", pontos2); 
        printf("Pontos Turisticos: Carta 2 Venceu\n");
    }   else {
        printf("Pontos Turisticos: Empatou\n");
    }

    printf("\n");

    // Densidade demografica

    if (densidade1 > densidade2) {
        printf("Densidade: %.2f  Hab/Km²\n", densidade1);
        printf("Densidade: %.2f  Hab/Km²\n", densidade2);
        printf("Densidade Demografica: carta 1 venceu\n");
    } else if (densidade2 > densidade1) {
        printf("Densidade: %.2f  Hab/Km²\n", densidade1);
        printf("Densidade: %.2f  Hab/Km²\n", densidade2);
        printf("Densidade Demografica: Carta 2 Venceu\n");
    }   else {
        printf("Densidade Demografica: Empatou\n");
    }

    printf("\n");

    //Renda Per Capita

    if (percapita1 > percapita2) {
        printf("PIB percapita: %.7f  reais\n", percapita1);
        printf("PIB percapita: %.7f  reais\n", percapita2);
        printf("Renda Per Capita: carta 1 venceu\n");
    } else if (percapita2 > percapita1) {
        printf("PIB percapita: %.7f  reais\n", percapita1);
        printf("PIB percapita: %.7f  reais\n", percapita2);
        printf("Renda Per Capita: Carta 2 Venceu\n");
    }   else {
        printf("Renda Per Capita: Empatou\n");
    }
    


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
