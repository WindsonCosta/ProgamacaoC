#include <stdio.h>

typedef struct {
    char estado[50];
    char codigo[10];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

void calcular_densidade_pib(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

void ler_dados(Carta *carta) {
    printf("Digite o estado: ");
    scanf("%s", carta->estado);
    printf("Digite o codigo: ");
    scanf("%s", carta->codigo);
    printf("Digite o nome: ");
    scanf("%s", carta->nome);
    printf("Digite a populacao: ");
    scanf("%lu", &carta->populacao);
    printf("Digite a area: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB: ");
    scanf("%f", &carta->pib);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta->pontos_turisticos);

    calcular_densidade_pib(carta);
}

void exibir_dados(Carta *carta) {
    printf("Estado: %s\n", carta->estado);
    printf("Codigo: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nome);
    printf("Populacao: %lu\n", carta->populacao);
    printf("Area: %.2f km²\n", carta->area);
    printf("PIB: %.2f bilhões de reais\n", carta->pib);
    printf("Numero de Pontos Turisticos: %d\n", carta->pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta->densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", carta->pib_per_capita);
}

int main() {
    Carta carta1, carta2;

    printf("Digite os dados da Carta 1:\n");
    ler_dados(&carta1);

    printf("Digite os dados da Carta 2:\n");
    ler_dados(&carta2);

    printf("\nCarta 1:\n");
    exibir_dados(&carta1);

    printf("\nCarta 2:\n");
    exibir_dados(&carta2);

    return 0;
}
