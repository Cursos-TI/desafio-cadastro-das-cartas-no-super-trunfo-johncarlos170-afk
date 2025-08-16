#include <stdio.h>

int main(){
   
   
    //declaracao das variaveis para as cartas

    char estado1[20], estado2[20];
    char codigo1[5], codigo2[5];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turismo1,turismo2;

    printf("Desafio Super Trunfo\n");

   //registrar os dados das cartas:
  //registrar os dados primeira carta
    printf("Carta1:\n"); 
    printf("Qual é o nome do Estado?\n");
    scanf("%s", &estado1);

    printf("Qual é o código da carta?\n");
    scanf("%s", &codigo1);

    printf("Qual o nome da cidade?\n");
    scanf("%s", &cidade1);

    printf("Qual a quantidade da população?\n");
    scanf("%d", &populacao1);
    
    printf("Qual a sua área teritorrial?\n");
    scanf("%f", &area1);

    printf("Qual o seu PIB?\n");
    scanf("%f", &pib1);

    printf("Qual é a quantidade de pontos turísticos?\n");
    scanf("%d", &turismo1);

     printf("Carta2:\n");
    printf("Qual é o nome do Estado?\n");
    scanf("%s", &estado2);

    printf("Qual é o código da carta?\n");
    scanf("%s", &codigo2);

    printf("Qual o nome da cidade?\n");
    scanf("%s", &cidade2);

    printf("Qual a quantidade da população?\n");
    scanf("%d", &populacao2);
    
    printf("Qual a sua área teritorrial?\n");
    scanf("%f", &area2);

    printf("Qual o seu PIB?\n");
    scanf("%f", &pib2);

    printf("Qual é a quantidade de pontos turísticos?\n");
    scanf("%d", &turismo2);

    //imprimir os dados das cartas:
   //imprimir os dados na tela da 1 carta:
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n",populacao1 );
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n\n\n", turismo1);

     //imprimir os dados na tela da 2 carta

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n",populacao2 );
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", turismo2);


    return 0;



     


}