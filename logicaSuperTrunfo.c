#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    char estado1[50], codigo1[10], cidade1[20], estado2[50], codigo2[10], cidade2[20];
    int turistico1, turistico2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2, densidadepop1, pibper1, densidadepop2, pibper2;
    
    // Cadastro das Cartas:
    
    printf("Insira os dados da Carta 1!\n\nEstado: ");
    scanf("%s", &estado1);

    printf("Código da carta: ");
    scanf("%s", &codigo1);

    printf("Nome da cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico1);

    printf("\nInsira os dados da Carta 2!\n\nEstado: ");
    scanf("%s", &estado2);

    printf("Código da carta: ");
    scanf("%s", &codigo2);

    printf("Nome da cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turistico2);
    
    densidadepop1 = (float) populacao1 / area1;
    pibper1 = pib1 / (float) populacao1;

    densidadepop2 = (float) populacao2 / area2;
    pibper2 = pib2 / (float) populacao2;
   
    // Comparação de Cartas:
 
    if (populacao1 > populacao2) {
         printf("\nA cidade da Carta 1 tem maior população!\n");
     } else {
         printf("\nA cidade da Carta 2 tem maior população!\n");
     }

    // Exibição dos Resultados:
     
    printf("\nComparação de cartas! (População)\n");
    printf("\nPopulação da Carta 1 (%s): %u \n", cidade1, populacao1);
    printf("População da Carta 2 (%s): %u \n", cidade2, populacao2);
    
    if(populacao1 > populacao2){
        printf("Carta 1 venceu!\n");

    }else {
        if(populacao2 > populacao1){
            printf("A carta 2 venceu!\n");

        }else {
            printf("As cartas possuem o mesmo número de população!\n");
        }
    }

    return 0;
}
