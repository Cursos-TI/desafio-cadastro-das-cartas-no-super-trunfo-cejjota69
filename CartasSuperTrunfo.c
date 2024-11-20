#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
int main() {
    int qtdePtTuristicos, populacao;
    char codigo[4], pais[30], cidade[30];
    double area, pib;

    printf("Digite o nome da cidade: ");
    scanf ("%s", &cidade);

    printf("Agora digite a populaçao: ");
    scanf ("%d", &populacao);

    printf("Tambem digite o PIB: ");
    scanf ("%f", &pib);

    printf("Agora digite a area: ");
    scanf ("%f", &area);

    printf("Cidade: %s\n", cidade);
 
    printf("Populaçao: %d\n", populacao);

    printf("PIB: %f\n", pib);

    printf("Area: %f\n", area);

               





    return 0;
}
