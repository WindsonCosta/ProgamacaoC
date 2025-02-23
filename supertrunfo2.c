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
    float super_poder;
} Carta;

// Função para calcular a densidade populacional e o PIB per capita
void calcular_densidade_pib(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Função para calcular o "Super Poder" da carta
void calcular_super_poder(Carta *carta) {
    carta->super_poder = carta->populacao + carta->area + carta->pib + carta->pontos_turisticos + carta->pib_per_capita + (1 / carta->densidade_populacional);
}

// Função para ler os dados da carta
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
    calcular_super_poder(carta);
}

// Função para comparar duas cartas e exibir os resultados
void comparar_cartas(Carta *carta1, Carta *carta2) {
    printf("Comparacao de Cartas:\n");

    printf("Populacao: Carta %d venceu (%d)\n", carta1->populacao > carta2->populacao ? 1 : 2, carta1->populacao > carta2->populacao ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", carta1->area > carta2->area ? 1 : 2, carta1->area > carta2->area ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", carta1->pib > carta2->pib ? 1 : 2, carta1->pib > carta2->pib ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", carta1->pontos_turisticos > carta2->pontos_turisticos ? 1 : 2, carta1->pontos_turisticos > carta2->pontos_turisticos ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", carta1->densidade_populacional < carta2->densidade_populacional ? 1 : 2, carta1->densidade_populacional < carta2->densidade_populacional ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", carta1->pib_per_capita > carta2->pib_per_capita ? 1 : 2, carta1->pib_per_capita > carta2->pib_per_capita ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", carta1->super_poder > carta2->super_poder ? 1 : 2, carta1->super_poder > carta2->super_poder ? 1 : 0);
}

int main() {
    Carta carta1, carta2;

    printf("Digite os dados da Carta 1:\n");
    ler_dados(&carta1);

    printf("Digite os dados da Carta 2:\n");
    ler_dados(&carta2);

    comparar_cartas(&carta1, &carta2);

    return 0;
}
