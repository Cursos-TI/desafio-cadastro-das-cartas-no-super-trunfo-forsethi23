#include <stdio.h>

int main(){

    int Carta1,Carta2;
    char Estado1,Estado2;                       // Estado (A-H)
    char Codigo1[5],Codigo2[5];                 // Código da carta (ex: A01, B03)
    char Cidade1[100],Cidade2[100];             // Nome da cidade
    int  Populacao1,Populacao2;                 // População da cidade
    float Area1,Area2;                          // Área da cidade (em km²)
    float PIB1,PIB2;                            // PIB da cidade
    int PontosTuristicos1,PontosTuristicos2;    // Número de pontos turísticos

    printf("Digite as informações da Carta1:\n");

    printf("Digite seu Estado:\n");
    scanf("%c", &Estado1);

    printf("Digite o Codigo:\n");
    scanf("%s", &Codigo1);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &Cidade1);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &Populacao1);

    printf("Digite a area da cidade\n");
    scanf("%f", &Area1);

    printf("Digite o PIB:\n");
    scanf ("%f", &PIB1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf (" %d", &PontosTuristicos1);
   
    //COLETANDO CARTA 2
    printf("Digite as informações da Carta2: \n");
    
    printf("Digite seu Estado:\n");
    scanf(" %c", &Estado2);

    printf("Digite o Codigo:\n");
    scanf(" %s", &Codigo2);

    printf("Digite o nome da Cidade:\n");
    scanf("%s", &Cidade2);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &Populacao2);

    printf("Digite a area da cidade\n");
    scanf("%f", &Area2);

    printf("Digite o PIB:\n");
    scanf ("%f", &PIB2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf ("%d", &PontosTuristicos2);
   
    printf("Letra do estado:%c\n Codigo:%s\n Cidade:%s\n Numero de habitantes:%d\n Area:%.2f\n PIB:%.2f\n PontosTuristicos:%d\n", Estado1, Codigo1,Cidade1, Populacao1, Area1, PIB1,PontosTuristicos1);
    
    printf("Letra do estado:%c\n Codigo:%s\n Cidade:%s\n Numero de habitantes:%d\n Area:%.2f\n PIB:%.2f\n PontosTuristicos:%d\n", Estado2, Codigo2,Cidade2, Populacao2, Area2, PIB2,PontosTuristicos2);
}
