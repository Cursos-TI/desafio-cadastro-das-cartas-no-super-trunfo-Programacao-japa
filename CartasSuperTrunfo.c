#include <stdio.h>

int main() {
    //Variáveis da carta 1
    char estado1[50];
    char codigo1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int numeroDePontosTuristicos1;

    //Variáveis da carta 2
    char estado2[50];
    char codigo2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeroDePontosTuristicos2;

    //Dados da carta 1
    printf("\nDigite os dados da carta 1\n");

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o código: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &numeroDePontosTuristicos1);

    //Dados da carta 2
    printf("\nDigite os dados da carta 2\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área em Km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &numeroDePontosTuristicos2);

    //Exibindo os dados cadastrados
    printf("\n--- DADOS DA CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %.2f\n", area1);
    printf("PIB em bilhões: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", numeroDePontosTuristicos1);

    printf("\n--- DADOS DA CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %.2f\n", area2);
    printf("PIB em bilhões: %.2f\n", pib2);
    printf("Número de pontos turisticos: %d\n", numeroDePontosTuristicos2);
    
    return 0;
}