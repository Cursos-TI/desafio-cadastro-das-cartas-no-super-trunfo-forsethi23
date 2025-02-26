#include <stdio.h>

int main(){

    int Carta1,Carta2;
    char Estado;          // Estado (A-H)
    char Codigo[5];       // Código da carta (ex: A01, B03)
    char Cidade[100];     // Nome da cidade
    int Populacao;        // População da cidade
    float Area;           // Área da cidade (em km²)
    float PIB;            // PIB da cidade
    int PontosTuristicos; // Número de pontos turísticos

    printf("Digite as informações da Carta1:\n");

    printf("Digite seu Estado:\n");
    scanf("%c", &Estado);

    printf("Digite o Codigo:\n");
    scanf("%s", &Codigo);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &Cidade);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade\n");
    scanf("%f", &Area);

    printf("Digite o PIB:\n");
    scanf ("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf ("%d", &PontosTuristicos);
   
    //COLETANDO CARTA 2
    printf("Digite as informações da Carta2:\n");
    
    printf("Digite seu Estado:\n");
    scanf("%c", &Estado);

    printf("Digite o Codigo:\n");
    scanf("%s", &Codigo);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &Cidade);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade\n");
    scanf("%f", &Area);

    printf("Digite o PIB:\n");
    scanf ("%f", &PIB);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf ("%d", &PontosTuristicos);
   
    printf("Letra do estado:%c\n Codigo:%s\n Cidade:%s\n Numero de habitantes:%d\n Area:%.2f\n PIB:%.2f\n PontosTuristicos:%d\n", Estado, Codigo, Cidade, Populacao, Area, PIB, PontosTuristicos);
    
    printf("Letra do estado:%c\n Codigo:%s\n Cidade:%s\n Numero de habitantes:%d\n Area:%.2f\n PIB:%.2f\n PontosTuristicos:%d", Estado, Codigo, Cidade, Populacao, Area, PIB, PontosTuristicos);

}
