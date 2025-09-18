#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

struct Carta
{
    char nome[50];
    char estado;
    char codigo_cidade[4];
    float area;
    float pib;
    int pontos_turisticos;
    long int populacao;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
};


int main() {

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // input cidade 1
    struct Carta carta1, carta2;

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", carta1.nome);

    printf("Digite o estado da primeira cidade: ");
    scanf(" %c", &carta1.estado);

    printf("Digite o codigo da primeira cidade  (3 caracteres): ");
    scanf("%s", carta1.codigo_cidade);

    printf("Digite a área da primeira cidade  (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB da primeira cidade (em milhões): ");
    scanf("%f", &carta1.pib);

    printf("Digite a população da primeira cidade: ");
    scanf("%ld", &carta1.populacao);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Calculando a densi.populacional, PIB per capita e super poder  
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;
    carta1.super_poder = carta1.populacao + carta1.area + carta1.pib +
                         carta1.pontos_turisticos + carta1.pib_per_capita +
                         (1 / carta1.densidade_populacional);

    // input cidade 2
    printf("\nDigite o nome da segunda cidade: ");
    scanf("%s", carta2.nome);

    printf("Digite o estado da segunda cidade: ");
    scanf("%c", &carta2.estado);

    printf("Digite o codigo da segunda cidade  (3 caracteres): ");
    scanf("%s", carta2.codigo_cidade);

    printf("Digite a área da segunda cidade  (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB da segunda cidade (em milhões): ");
    scanf("%f", &carta2.pib);

    printf("Digite a população da segunda cidade: ");
    scanf("%ld", &carta2.populacao);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Calculando a densi.populacional, PIB per capita e super poder
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;
    carta2.super_poder = carta2.populacao + carta2.area + carta2.pib +
                         carta2.pontos_turisticos + carta2.pib_per_capita +
                         (1 / carta2.densidade_populacional);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n--- Dados das Cidades Cadastradas ---\n");
    printf("Cidade 1:\n");
    printf("Nome: %s\n", carta1.nome);
    printf("Estado: %c\n", carta1.estado);
    printf("Código da Cidade: %s\n",carta1.codigo_cidade);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f milhôes\n", carta1.pib);
    printf("População: %ld\n", carta1.populacao);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta1.densidade_populacional);

    printf("\nCidade 2:\n");
    printf("Nome: %s\n", carta2.nome);
    printf("Estado: %c\n", carta2.estado);
    printf("Código da Cidade: %s\n", carta2.codigo_cidade);
    printf("Área: %.2f km²\n",carta2.area);
    printf("PIB: %.2f milhôes\n", carta2.pib);
    printf("População: %ld\n", carta2.populacao);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", carta2.densidade_populacional);

    // Comparação das Cartas:
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("População: Cidade %d venceu (%d)\n",
        (carta1.populacao > carta2.populacao) ? 1 : 2,
        (carta1.populacao > carta2.populacao));

    printf("Área: Cidade %d venceu (%d)\n",
        (carta1.area > carta2.area) ? 1 : 2,
        (carta1.area > carta2.area));
    
    printf("PIB: Cidade %d venceu (%d)\n",
        (carta1.pib > carta2.pib) ? 1 : 2,
        (carta1.pib > carta2.pib));
    
    printf("Número de Pontos Turísticos: Cidade %d venceu (%d)\n",
        (carta1.pontos_turisticos > carta2.pontos_turisticos) ? 1 : 2,
        (carta1.pontos_turisticos > carta2.pontos_turisticos));
    
    printf("PIB per capita: Cidade %d venceu (%d)\n",
        (carta1.pib_per_capita > carta2.pib_per_capita) ? 1 : 2,
        (carta1.pib_per_capita > carta2.pib_per_capita));
    
    printf("Densidade Populacional: Cidade %d venceu (%d)\n",
        (carta1.densidade_populacional < carta2.densidade_populacional) ? 1 : 2,
        (carta1.densidade_populacional < carta2.densidade_populacional));

    printf("Super Poder: Cidade %d venceu (%.2f)\n",
        (carta1.super_poder > carta2.super_poder) ? 1 : 2,
        (carta1.super_poder > carta2.super_poder) ? carta1.super_poder : carta2.super_poder);


    return 0;
}
