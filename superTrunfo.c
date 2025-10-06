#include <stdio.h>

struct Carta {
    char estado[50];
    int codigo;
    char cidade[100];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
};

float calcular_densidade(unsigned long int populacao, float area) {
    return populacao / area;
}

float calcular_pib_per_capita(float pib, unsigned long int populacao) {
    return pib / populacao;
}

float calcular_super_poder(struct Carta c) {
    return c.populacao + c.area + c.pib + c.pontos_turisticos + c.pib_per_capita + (1.0 / c.densidade);
}

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    struct Carta c1, c2;

    // Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado: ");
    scanf(" %[^\n]", c1.estado);

    printf("Codigo: ");
    scanf("%d", &c1.codigo);
    limpar_buffer();

    printf("Cidade: ");
    scanf(" %[^\n]", c1.cidade);

    printf("Populacao: ");
    scanf("%lu", &c1.populacao);
    limpar_buffer();

    printf("Area: ");
    scanf("%f", &c1.area);
    limpar_buffer();

    printf("PIB: ");
    scanf("%f", &c1.pib);
    limpar_buffer();

    printf("Pontos turisticos: ");
    scanf("%d", &c1.pontos_turisticos);
    limpar_buffer();

    // Carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado: ");
    scanf(" %[^\n]", c2.estado);

    printf("Codigo: ");
    scanf("%d", &c2.codigo);
    limpar_buffer();

    printf("Cidade: ");
    scanf(" %[^\n]", c2.cidade);

    printf("Populacao: ");
    scanf("%lu", &c2.populacao);
    limpar_buffer();

    printf("Area: ");
    scanf("%f", &c2.area);
    limpar_buffer();

    printf("PIB: ");
    scanf("%f", &c2.pib);
    limpar_buffer();

    printf("Pontos turisticos: ");
    scanf("%d", &c2.pontos_turisticos);
    limpar_buffer();

    // Calculos
    c1.densidade = calcular_densidade(c1.populacao, c1.area);
    c2.densidade = calcular_densidade(c2.populacao, c2.area);

    c1.pib_per_capita = calcular_pib_per_capita(c1.pib, c1.populacao);
    c2.pib_per_capita = calcular_pib_per_capita(c2.pib, c2.populacao);

    c1.super_poder = calcular_super_poder(c1);
    c2.super_poder = calcular_super_poder(c2);

    // Comparação
    printf("\nComparacao de Cartas:\n");

    printf("Populacao: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("Area: Carta 1 venceu (%d)\n", c1.area > c2.area);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", c1.pontos_turisticos > c2.pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade < c2.densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pib_per_capita > c2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.super_poder > c2.super_poder);

    return 0;
}
