#include <stdio.h>

int main() {
    char codigo;
    int turismo;
    char nome[30];
    float populacao;
    float area; 

printf("Cartas super trunfo:\n");

    printf("Digite o codigo da cidade:\n");
    scanf("%c", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", nome);

    printf("Digite a poupulação cidade:\n");
    scanf("%f", populacao);

    printf(" Digite quantos pontos turisticos essa cidade tem:\n");
    scanf("%d", turismo); 

    printf("Digite a area da cidade:\n");
    scanf("%f", area);

    printf("codigo da cidade: %c\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %f\n", populacao);
    printf("Pontos turisticos: %d\n", turismo);
    printf("Area: %f\n", area);


    return 0;
}
