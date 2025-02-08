#include <stdio.h>

int main(){
    printf("Desafio Super Trunfo - Países!\n");

    char nome[20], codigo[20], estado[20];
    int populacao, turistico;
    float area, pib;

    printf("Digite o estado da cidade: \n");
    scanf(" %19[^\n]", estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %19[^\n]", nome);

    printf("Digite o código da cidade: \n");
    scanf(" %19[^\n]", codigo);

    printf("População da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico);

    printf("Área em km²: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("\n=== Dados da Cidade ===\n");
    printf("Estado: %s\n", estado);
    printf("Nome: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", turistico);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);




 

    



}