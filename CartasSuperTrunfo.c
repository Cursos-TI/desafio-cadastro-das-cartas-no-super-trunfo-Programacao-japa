#include <stdio.h>

//Declaração da struct antes do main
struct Carta {
    char estado;
    char codigo [4];
    char nomeCidade [50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
};

int main() {
    struct Carta carta1, carta2;

    // Leitura dos dados da carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado: ");
    scanf("%c", &carta1.estado);
    printf("Código: ");
    scanf("%s", carta1.codigo);
    printf("nome da cidade:");
    scanf("%[^\n]",carta1.nomeCidade);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%", &carta1.pib);
    printf("Número de pontos Turisticos: ");
    scanf("%d", &carta1.pontosturisticos);
    
}