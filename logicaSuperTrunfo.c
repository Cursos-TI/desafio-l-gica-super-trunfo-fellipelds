#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de países. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // Definição das variáveis para armazenar as propriedades das cidades

    char pais1[50], pais2[50];
    int opcao, opcao2;
    int turistico1, turistico2;
    int populacao1, populacao2, somaatributo1, somaatributo2;
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
        printf("\n3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade demográfica\n\n");
        printf("Digite a segunda opção que você deseja comparar entre as duas cartas: ");
        scanf("%d", &opcao2);

        switch (opcao2){

        case 3:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: População e Área\n");
        printf("População da Carta 1: %d - População da Carta 2: %d - ", populacao1, populacao2);
        if(populacao1 > populacao2){
            printf("A população da Carta 1 venceu!\n");
        } else if (populacao2 > populacao1){
            printf("A população da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Área da Carta 1: %.0f - Área da Carta 2: %.0f - ", area1, area2);
        if(area1 > area2){
            printf("A área da Carta 1 venceu!\n");
        } else if (area2 > area1){
            printf("A área da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = populacao1 + (int) area1;
        somaatributo2 = populacao2 + (int) area2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 4:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: População e PIB\n");
        printf("População da Carta 1: %d - População da Carta 2: %d - ", populacao1, populacao2);
        if(populacao1 > populacao2){
            printf("A população da Carta 1 venceu!\n");
        } else if (populacao2 > populacao1){
            printf("A população da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("PIB da Carta 1: %.0f - PIB da Carta 2: %.0f - ", pib1, pib2);
        if(pib1 > pib2){
            printf("O PIB da Carta 1 venceu!\n");
        } else if (pib2 > pib1){
            printf("O PIB da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = populacao1 + (int) pib1;
        somaatributo2 = populacao2 + (int) pib2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 5:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: População e Pontos Turísticos\n");
        printf("População da Carta 1: %d - População da Carta 2: %d - ", populacao1, populacao2);
        if(populacao1 > populacao2){
            printf("A população da Carta 1 venceu!\n");
        } else if (populacao2 > populacao1){
            printf("A população da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Pontos Turísticos da Carta 1: %d - Pontos Turísticos da Carta 2: %d - ", turistico1, turistico2);
        if(turistico1 > turistico2){
            printf("Os Pontos Turísticos da Carta 1 venceu!\n");
        } else if (turistico2 > turistico1){
            printf("Os Pontos Turísticos 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = populacao1 + turistico1;
        somaatributo2 = populacao2 + turistico2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 6:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: População e Área\n");
        printf("População da Carta 1: %d - População da Carta 2: %d - ", populacao1, populacao2);
        if(populacao1 > populacao2){
            printf("A população da Carta 1 venceu!\n");
        } else if (populacao2 > populacao1){
            printf("A população da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Densidade Demográfica da Carta 1: %.0f - Densidade Demográfica da Carta 2: %.0f - ", densidadepop1, densidadepop2);
        if(densidadepop1 < densidadepop2){
            printf("A densidade demográfica da Carta 1 venceu!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("A densidade demográfica da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = populacao1 + (int) densidadepop1;
        somaatributo2 = populacao2 + (int) densidadepop2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        }
    break;

    case 3:
        printf("\n2. População\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade demográfica\n\n");
        printf("Digite a segunda opção que você deseja comparar entre as duas cartas: ");
        scanf("%d", &opcao2);

        switch (opcao2){

        case 2:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Área e População\n");
        printf("Área da Carta 1: %0.f - Área da Carta 2: %0.f - ", area1, area2);
        if(area1 > area2){
            printf("A Área da Carta 1 venceu!\n");
        } else if (area2 > area1){
            printf("A Área da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("População da Carta 1: %d - População da Carta 2: %d - ", populacao1, populacao2);
        if(populacao1 > populacao2){
            printf("A população da Carta 1 venceu!\n");
        } else if (populacao2 > populacao1){
            printf("A população da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) area1 + populacao1;
        somaatributo2 = (int) area2 + populacao2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 4:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Área e PIB\n");
        printf("Área da Carta 1: %0.f - Área da Carta 2: %0.f - ", area1, area2);
        if(area1 > area2){
            printf("A Área da Carta 1 venceu!\n");
        } else if (area2 > area1){
            printf("A Área da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("PIB da Carta 1: %.0f - PIB da Carta 2: %.0f - ", pib1, pib2);
        if(pib1 > pib2){
            printf("O PIB da Carta 1 venceu!\n");
        } else if (pib2 > pib1){
            printf("O PIB da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) area1 + (int) pib1;
        somaatributo2 = (int) area2 + (int) pib2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 5:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Área e Pontos Turísticos\n");
        printf("Área da Carta 1: %0.f - Área da Carta 2: %0.f - ", area1, area2);
        if(area1 > area2){
            printf("A Área da Carta 1 venceu!\n");
        } else if (area2 > area1){
            printf("A Área da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Pontos Turísticos da Carta 1: %d - Pontos Turísticos da Carta 2: %d - ", turistico1, turistico2);
        if(turistico1 > turistico2){
            printf("Os Pontos Turísticos da Carta 1 venceu!\n");
        } else if (turistico2 > turistico1){
            printf("Os Pontos Turísticos 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) area1 + turistico1;
        somaatributo2 = (int) area2 + turistico2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 6:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Área e Densidade Demográfica\n");
        printf("Área da Carta 1: %0.f - Área da Carta 2: %0.f - ", area1, area2);
        if(area1 > area2){
            printf("A Área da Carta 1 venceu!\n");
        } else if (area2 > area1){
            printf("A Área da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Densidade Demográfica da Carta 1: %.0f - Densidade Demográfica da Carta 2: %.0f - ", densidadepop1, densidadepop2);
        if(densidadepop1 < densidadepop2){
            printf("A densidade demográfica da Carta 1 venceu!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("A densidade demográfica da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) area1 + (int) densidadepop1;
        somaatributo2 = (int) area2 + (int) densidadepop2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        }
    break;

    case 4:
        printf("\n2. População\n");
        printf("3. Área\n");
        printf("5. Número de pontos turísticos\n");
        printf("6. Densidade demográfica\n\n");
        printf("Digite a segunda opção que você deseja comparar entre as duas cartas: ");
        scanf("%d", &opcao2);

        switch (opcao2){

        case 2:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: PIB e População\n");
        printf("PIB da Carta 1: %0.f - PIB da Carta 2: %0.f - ", pib1, pib2);
        if(pib1 > pib2){
            printf("O PIB da Carta 1 venceu!\n");
        } else if (pib2 > pib1){
            printf("O PIB da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("População da Carta 1: %d - População da Carta 2: %d - ", populacao1, populacao2);
        if(populacao1 > populacao2){
            printf("A população da Carta 1 venceu!\n");
        } else if (populacao2 > populacao1){
            printf("A população da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) pib1 + populacao1;
        somaatributo2 = (int) pib2 + populacao2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 3:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: PIB e Área\n");
        printf("PIB da Carta 1: %0.f - PIB da Carta 2: %0.f - ", pib1, pib2);
        if(pib1 > pib2){
            printf("O PIB da Carta 1 venceu!\n");
        } else if (pib2 > pib1){
            printf("O PIB da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Área da Carta 1: %.0f - Área da Carta 2: %.0f - ", area1, area2);
        if(area1 > area2){
            printf("A área da Carta 1 venceu!\n");
        } else if (area2 > area1){
            printf("A área da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) pib1 + (int) area1;
        somaatributo2 = (int) pib2 + (int) area2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 5:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: PIB e Pontos Turísticos\n");
        printf("PIB da Carta 1: %0.f - PIB da Carta 2: %0.f - ", pib1, pib2);
        if(pib1 > pib2){
            printf("O PIB da Carta 1 venceu!\n");
        } else if (pib2 > pib1){
            printf("O PIB da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Pontos Turísticos da Carta 1: %d - Pontos Turísticos da Carta 2: %d - ", turistico1, turistico2);
        if(turistico1 > turistico2){
            printf("Os Pontos Turísticos da Carta 1 venceu!\n");
        } else if (turistico2 > turistico1){
            printf("Os Pontos Turísticos 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) pib1 + turistico1;
        somaatributo2 = (int) pib2 + turistico2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 6:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: PIB e Densidade Demógrafica\n");
        printf("PIB da Carta 1: %0.f - PIB da Carta 2: %0.f - ", pib1, pib2);
        if(pib1 > pib2){
            printf("O PIB da Carta 1 venceu!\n");
        } else if (pib2 > pib1){
            printf("O PIB da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Densidade Demográfica da Carta 1: %.0f - Densidade Demográfica da Carta 2: %.0f - ", densidadepop1, densidadepop2);
        if(densidadepop1 < densidadepop2){
            printf("A densidade demográfica da Carta 1 venceu!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("A densidade demográfica da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) pib1 + (int) densidadepop1;
        somaatributo2 = (int) pib2 + (int) densidadepop2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;
        }
    break;

    case 5:
        printf("\n2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("6. Densidade demográfica\n\n");
        printf("Digite a segunda opção que você deseja comparar entre as duas cartas: ");
        scanf("%d", &opcao2);

        switch (opcao2){

        case 2:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Pontos Turísticos e População\n");
        printf("Pontos Turísticos da Carta 1: %d - Pontos Turísticos da Carta 2: %d - ", turistico1, turistico2);
        if(turistico1 > turistico2){
            printf("Os Pontos Turísticos da Carta 1 venceram!\n");
        } else if (turistico2 > turistico1){
            printf("Os Pontos Turísticos da Carta 2 venceram!\n");
        } else {
            printf("Empate!\n");
        }
        printf("População da Carta 1: %d - População da Carta 2: %d - ", populacao1, populacao2);
        if(populacao1 > populacao2){
            printf("A população da Carta 1 venceu!\n");
        } else if (populacao2 > populacao1){
            printf("A população da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = turistico1 + populacao1;
        somaatributo2 = turistico2 + populacao2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 3:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Pontos Turísticos e Área\n");
        printf("Pontos Turísticos da Carta 1: %d - Pontos Turísticos da Carta 2: %d - ", turistico1, turistico2);
        if(turistico1 > turistico2){
            printf("Os Pontos Turísticos da Carta 1 venceram!\n");
        } else if (turistico2 > turistico1){
            printf("Os Pontos Turísticos da Carta 2 venceram!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Área da Carta 1: %.0f - Área da Carta 2: %.0f - ", area1, area2);
        if(area1 > area2){
            printf("A área da Carta 1 venceu!\n");
        } else if (area2 > area1){
            printf("A área da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = turistico1 + (int) area1;
        somaatributo2 = turistico2 + (int) area2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 4:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Pontos Turísticos e PIB\n");
        printf("Pontos Turísticos da Carta 1: %d - Pontos Turísticos da Carta 2: %d - ", turistico1, turistico2);
        if(turistico1 > turistico2){
            printf("Os Pontos Turísticos da Carta 1 venceram!\n");
        } else if (turistico2 > turistico1){
            printf("Os Pontos Turísticos da Carta 2 venceram!\n");
        } else {
            printf("Empate!\n");
        }
        printf("PIB da Carta 1: %.0f - PIB da Carta 2: %.0f - ", pib1, pib2);
        if(pib1 > pib2){
            printf("O PIB da Carta 1 venceu!\n");
        } else if (pib2 > pib1){
            printf("O PIB da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = turistico1 + (int) pib1;
        somaatributo2 = turistico2 + (int) pib2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 6:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Pontos Turísticos e Densidade Demográfica\n");
        printf("Pontos Turísticos da Carta 1: %d - Pontos Turísticos da Carta 2: %d - ", turistico1, turistico2);
        if(turistico1 > turistico2){
            printf("Os Pontos Turísticos da Carta 1 venceram!\n");
        } else if (turistico2 > turistico1){
            printf("Os Pontos Turísticos da Carta 2 venceram!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Densidade Demográfica da Carta 1: %.0f - Densidade Demográfica da Carta 2: %.0f - ", densidadepop1, densidadepop2);
        if(densidadepop1 < densidadepop2){
            printf("A densidade demográfica da Carta 1 venceu!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("A densidade demográfica da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = turistico1 + (int) densidadepop1;
        somaatributo2 = turistico2 + (int) densidadepop2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;
        }
    break;

    case 6:
        printf("\n2. População\n");
        printf("3. Área\n");
        printf("4. PIB\n");
        printf("5. Número de pontos turísticos\n\n");
        printf("Digite a segunda opção que você deseja comparar entre as duas cartas: ");
        scanf("%d", &opcao2);

        switch (opcao2){

        case 2:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Densidade Demográfica e População\n");
        printf("Densidade Demográfica da Carta 1: %d - Densidade Demográfica da Carta 2: %d - ", densidadepop1, densidadepop2);
        if(densidadepop1 < densidadepop2){
            printf("A Densidade Demográfica da Carta 1 venceu!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("A Densidade Demográfica da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("População da Carta 1: %d - População da Carta 2: %d - ", populacao1, populacao2);
        if(populacao1 > populacao2){
            printf("A população da Carta 1 venceu!\n");
        } else if (populacao2 > populacao1){
            printf("A população da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = densidadepop1 + populacao1;
        somaatributo2 = densidadepop2 + populacao2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 3:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Densidade Demográfica e Área\n");
        printf("Densidade Demográfica da Carta 1: %d - Densidade Demográfica da Carta 2: %d - ", densidadepop1, densidadepop2);
        if(densidadepop1 < densidadepop2){
            printf("A Densidade Demográfica da Carta 1 venceu!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("A Densidade Demográfica da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Área da Carta 1: %.0f - Área da Carta 2: %.0f - ", area1, area2);
        if(area1 > area2){
            printf("A área da Carta 1 venceu!\n");
        } else if (area2 > area1){
            printf("A área da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) densidadepop1 + (int) area1;
        somaatributo2 = (int) densidadepop2 + (int) area2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 4:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Densidade Demográfica e PIB\n");
        printf("Densidade Demográfica da Carta 1: %d - Densidade Demográfica da Carta 2: %d - ", densidadepop1, densidadepop2);
        if(densidadepop1 < densidadepop2){
            printf("A Densidade Demográfica da Carta 1 venceu!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("A Densidade Demográfica da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("PIB da Carta 1: %.0f - PIB da Carta 2: %.0f - ", pib1, pib2);
        if(pib1 > pib2){
            printf("O PIB da Carta 1 venceu!\n");
        } else if (pib2 > pib1){
            printf("O PIB da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) densidadepop1 + (int) pib1;
        somaatributo2 = (int) densidadepop2 + (int) pib2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;

        case 5:
        printf("\nPaís da Carta 1: %s - País da Carta 2: %s\n", pais1, pais2);
        printf("Atributos comparados: Densidade Demográfica e Pontos Turísticos\n");
        printf("Densidade Demográfica da Carta 1: %d - Densidade Demográfica da Carta 2: %d - ", densidadepop1, densidadepop2);
        if(densidadepop1 < densidadepop2){
            printf("A Densidade Demográfica da Carta 1 venceu!\n");
        } else if (densidadepop2 < densidadepop1){
            printf("A Densidade Demográfica da Carta 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        printf("Pontos Turísticos da Carta 1: %d - Pontos Turísticos da Carta 2: %d - ", turistico1, turistico2);
        if(turistico1 > turistico2){
            printf("Os Pontos Turísticos da Carta 1 venceu!\n");
        } else if (turistico2 > turistico1){
            printf("Os Pontos Turísticos 2 venceu!\n");
        } else {
            printf("Empate!\n");
        }
        somaatributo1 = (int) densidadepop1 + turistico1;
        somaatributo2 = (int) densidadepop2 + turistico2;
        printf("Soma dos atributos da Carta 1: %d - Soma dos atributos da Carta 2: %d\n", somaatributo1, somaatributo2);
        if(somaatributo1 > somaatributo2){
            printf("Vencedor da rodada: Carta 1!\n");
        }else if (somaatributo2 > somaatributo1){
            printf("Vencedor da rodada: Carta 2!\n");
        }else {
            printf("Empate!\n");
        }
        break;
        }
    break;
    
    }

    return 0;
}
