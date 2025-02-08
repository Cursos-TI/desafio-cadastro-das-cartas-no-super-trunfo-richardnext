#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ""); 

    printf("Desafio Super Trunfo - Países!\n");

    char nome[50], codigo[20], estado[50];
    int populacao, turistico;
    double area, pib;

    printf("Digite o estado da cidade: \n");
    scanf(" %49[^\n]", estado);

    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", nome);

    printf("Digite o código da cidade: \n");
    scanf(" %19[^\n]", codigo);

    printf("População da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &turistico);

    printf("Área em km²: \n");
    scanf("%lf", &area);

    printf("PIB: \n");
    scanf("%lf", &pib);

    printf("Dados da Cidade\n");
    printf("Estado: %s\n", estado);
    printf("Nome: %s\n", nome);
    printf("Código: %s\n", codigo);
    printf("População: %'d\n", populacao); 
    printf("Pontos turísticos: %d\n", turistico);
    printf("Área: %'.2lf km²\n", area);  
    printf("PIB: %'.2lf\n", pib);  

    return 0;
}
