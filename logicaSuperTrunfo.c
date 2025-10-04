#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    char pais1[50], pais2[50];
    int opcao;
    int turistico1, turistico2;
    int populacao1, populacao2;
    float area1, pib1, area2, pib2, densidadepop1, densidadepop2;
    
    // Cadastro das Cartas:
    
    printf("Insira os dados da Carta 1!\n\nPaís: ");
    scanf("%s", &pais1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico1);

    printf("\nInsira os dados da Carta 2!\n\nPaís: ");
    scanf("%s", &pais2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico2);
    
    densidadepop1 = (float) populacao1 / area1;

    densidadepop2 = (float) populacao2 / area2;
   
    // Comparação de Cartas:

    printf("\nDuelo de Cartas!\n\n");
    printf("1. Nome do país\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n\n");
    printf("Digite a opção que você deseja comparar entre as duas cartas: ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("\nCarta 1: %s", pais1);
        printf("Carta 2: %s", pais2);
    break;

    case 2:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributo comparado: População\n");
        printf("População da Carta 1: %d - População da Carta 2: %d\n", populacao1, populacao2);
        
        if(populacao1 > populacao2){
            printf("Carta 1 venceu!\n");
        } else if (populacao2 > populacao1){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    break;

    case 3:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributo comparado: Área\n");
        printf("Área da Carta 1: %.0f - Área da Carta 2: %.0f\n", area1, area2);
        
        if(area1 > area2){
            printf("Carta 1 venceu!\n");
        } else if (area1 > area2){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    break;

    case 4:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributo comparado: PIB\n");
        printf("PIB da Carta 1: %.0f - PIB da Carta 2: %.0f\n", pib1, pib2);
        
        if(pib1 > pib2){
            printf("Carta 1 venceu!\n");
        } else if (pib2 > pib1){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    break;

    case 5:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributo comparado: Pontos turísticos\n");
        printf("Pontos turísticos da Carta 1: %d - Pontos turísticos da Carta 2: %d\n", turistico1, turistico2);
        
        if(turistico1 > turistico2){
            printf("Carta 1 venceu!\n");
        } else if (turistico2 > turistico1){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    break;

    case 6:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributo comparado: Densidade demográfica\n");
        printf("Densidade demográfica da Carta 1: %.0f - Densidade demográfica da Carta 2: %.0f\n", densidadepop1, densidadepop2);
        
        if(densidadepop1 < densidadepop2){
            printf("Carta 1 venceu!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
    break;
    
    }

    // Exibição dos Resultados:



    return 0;
}
