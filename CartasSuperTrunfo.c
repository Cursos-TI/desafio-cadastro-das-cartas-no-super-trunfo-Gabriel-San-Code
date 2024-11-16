#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    int population, pib, area, tur_points, city_code;
    char city_name[50];

    printf("Insira o nome da cidade: ");
    scanf("%s", city_name);

    printf("Insira o código da cidade: ");
    scanf("%d", &city_code);

    printf("Digite a população da cidade: ");
    scanf("%d", &population);

    printf("Digite a área da cidade: ");
    scanf("%d", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%d", &pib);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &tur_points);


    printf("Cidade: %s\n", city_name);
    printf("Cógido: %d\n", city_code);
    printf("População: %d pessoas\n", population);
    printf("Área: %d KM²\n", area);
    printf("PIB: R$ %d\n", pib);
    printf("Pontos turísticos: %d\n", tur_points);


    return 0;
}
