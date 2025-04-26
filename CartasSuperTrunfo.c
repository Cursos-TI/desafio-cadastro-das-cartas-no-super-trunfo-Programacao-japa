#include <stdio.h>

//Declaração da struct antes do main
struct Carta {
    char estado [3];
    char codigo [4];
    char nomeCidade [50];
    int populacao;
    float area;
    float pib;
    int numeroDePontosTuristicos;
};

int main() {
    struct Carta carta1, carta2;

    // Leitura dos dados da carta 1
    printf("Digite os dados da carta 1:\n");

    printf("Estado (letra): ");
    scanf(" %c", carta1.estado);

    printf("Código: ");
    scanf("%s", carta1.codigo);

    printf("nome da cidade:");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área: (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turisticos: ");
    scanf("%d", &carta1.numeroDePontosTuristicos);

    //Leitura de dados da carta 2
    printf("\nDigite os dados da carta 2:\n");

    printf("Estado (letra): ");
    scanf(" %c", carta2.estado);

    printf("código: ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em Km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turisticos: ");
    scanf("%d", &carta2.numeroDePontosTuristicos);

    //Exibindo os dados cadastrados
    printf("\n- DADOS DA CARTA 1 -\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n," carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Numero de pontos turisticos: %d\n", carta1.numeroDePontosTuristicos);

    printf("\n- DADOS DA CARTA 2 -\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de pontos turisticos: %d\n, carta2.numeroDePontosTuristicos");
    
    return 0;

};
