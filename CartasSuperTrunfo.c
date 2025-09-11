#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cidade 1
    char nome[50];
    char estado;
    char codigo_cidade[4];
    float area;
    float pib;
    int populacao;
    int num_turisticos;
    
    // Cidade 2
    char nome2[50];
    char estado2;
    char codigo_cidade2[4];
    float area2;
    float pib2;
    int populacao2;
    int num_turisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // input cidade 1
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome);

    printf("Digite o estado da primeira cidade: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da primeira cidade  (3 caracteres): ");
    scanf("%s", codigo_cidade);

    printf("Digite a área da primeira cidade  (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da primeira cidade (em milhões): ");
    scanf("%f", &pib);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &num_turisticos);

    // input cidade 2
    printf("\nDigite o nome da segunda cidade: ");
    scanf("%s", nome2);

    printf("Digite o estado da segunda cidade: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da segunda cidade  (3 caracteres): ");
    scanf("%s", codigo_cidade2);

    printf("Digite a área da segunda cidade  (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (em milhões): ");
    scanf("%f", &pib2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &num_turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n--- Dados das Cidades Cadastradas ---\n");
    printf("Cidade 1:\n");
    printf("Nome: %s\n", nome);
    printf("Estado: %c\n", estado);
    printf("Código da Cidade: %s\n", codigo_cidade);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhôes\n", pib);
    printf("População: %d\n", populacao);
    printf("Número de Pontos Turísticos: %d\n", num_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", populacao/area);

    printf("\nCidade 2:\n");
    printf("Nome: %s\n", nome2);
    printf("Estado: %c\n", estado2);
    printf("Código da Cidade: %s\n", codigo_cidade2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f milhôes\n", pib2);
    printf("População: %d\n", populacao2);
    printf("Número de Pontos Turísticos: %d\n", num_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", populacao2/area2);
    

    return 0;
}
