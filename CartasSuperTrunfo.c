#include <stdio.h>
int main(){


    char estado, estado2;
    char nome_cidade[50], cidade2[50];
    char codigo_carta[50], codigo2[50];
    int populacao, numero_pts_turisticos, populacao2, pts_turisticos2;
    float area, pib, area2, pib2;

    printf("CARTA 1: Informe uma letra de 'A' a 'H' para o seu estado: \n");
    scanf(" %c", &estado);

    printf("CARTA1: Informe o codigo da carta: (A LETRA DO ESTADO + UM NUMERO DE 01 A 04:)\n");
    scanf("%s", codigo_carta);

    printf("CARTA1: Informe o nome da cidade: \n");
    scanf("%s", nome_cidade);

    printf("CARTA1: Informe o numero de habitantes desta cidade: \n");
    scanf("%d", &populacao);

    printf("CARTA1: Informe a área em km²: \n");
    scanf("%f", &area);

    printf("CARTA1: Informe o produto interno bruto da cidade: \n");
    scanf("%f", &pib);

    printf("CARTA1: Informe a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &numero_pts_turisticos);

    printf("CARTA 2: Informe uma letra de 'A' a 'H' para o seu estado: \n");
    scanf(" %c", &estado2);

    printf("CARTA2: Informe o codigo da carta: (A LETRA DO ESTADO + UM NUMERO DE 01 A 04:)\n");
    scanf("%s", &codigo2);

    printf("CARTA2: Informe o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("CARTA2: Informe o numero de habitantes desta cidade: \n");
    scanf("%d", &populacao2);

    printf("CARTA2: Informe a área em km²: \n");
    scanf("%f", &area2);

    printf("CARTA2: Informe o produto interno bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("CARTA2: Informe a quantidade de pontos turísticos da cidade: \n");
    scanf("%d", &pts_turisticos2);

    float pib_percap1 = pib / populacao;
    float pib_percap2 = pib2 / populacao2;

    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da Cidade : %s \n", nome_cidade);
    printf("População : %d \n", populacao);
    printf("Área(em km²): %.3f \n", area);
    printf("PIB: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", numero_pts_turisticos);

     printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade : %s \n", cidade2);
    printf("População : %d \n", populacao2);
    printf("Área(em km²): %.3f \n", area2);
    printf("PIB: %f \n", pib2);
    printf("Número de pontos turísticos: %d \n", pts_turisticos2);

    return 0;





}
