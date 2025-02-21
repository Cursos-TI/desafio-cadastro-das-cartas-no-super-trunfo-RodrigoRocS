#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


   //Variaveis onde seram armazenados os dados referentes as cartas.

   char estado1, estado2;
   char codDaCarta1[20], codDaCarta2[20];
   char nomeDaCidade1[20], nomeDaCidade2[20];
   int populacao1, populacao2;
   float areakm1, areakm2;
   float pib1, pib2;
   int numeroPontosTuristicos1, numeroPontosTuristicos2;
   int opcao;

   //Cabeçalho

   printf("***Cadastro de Cartas do Super Trunfo***\n");
   printf("Você precisará inserir informações sobre duas cidades.\n\n");

   //Armazenamento dos dados das cartas 1 e 2.

   //Entrada de dados da carta 1.

   printf("Digite uma letra de A a H para representar o estado da carta 1: \n");
   scanf(" %c", &estado1);

   printf("Digite o código da carta 1: \n");
   scanf(" %[^\n]", codDaCarta1);

   printf("Digite nome da cidade da carta 1: \n");
   scanf(" %[^\n]", nomeDaCidade1);

   printf("Digite a população da carta 1: \n");
   scanf("%d", &populacao1);

   printf("Digite a área em km² da carta 1: \n");
   scanf("%f", &areakm1);

   printf("Digite o PIB da carta 1: \n");
   scanf("%f", &pib1);

   printf("Digite o numero de pontos turísticos da carta 1: \n");
   scanf("%d", &numeroPontosTuristicos1);

   // Entrada de dados da carta 2.

   printf("\nDigite uma letra de A a H para representar o estado da carta 2: \n");
   scanf(" %c", &estado2);

   printf("Digite o código da carta 2: \n");
   scanf(" %[^\n]", codDaCarta2);

   printf("Digite nome da cidade da carta 2: \n");
   scanf(" %[^\n]", nomeDaCidade2);

   printf("Digite a população da carta 2: \n");
   scanf("%d", &populacao2);

   printf("Digite a área em km² da carta 2: \n");
   scanf("%f", &areakm2);

   printf("Digite o PIB da carta 2: \n");
   scanf("%f", &pib2);

   printf("Digite o numero de pontos turísticos da carta 2: \n");
   scanf("%d", &numeroPontosTuristicos2);

   // variaveis iniciadas após atribuição dos valores para calculo

   float densidadePopulacional1 = populacao1 / areakm1, densidadePopulacional2 = populacao2 / areakm2;
   float pibPerCapta1 = pib1 / populacao1, pibPerCapta2 = pib2 / populacao2;

   //Informações das cartas 1 e 2

   // Saida de dados da carta 1

   printf("\nCarta 1: \n");
   printf("Estado: %c\n", estado1);
   printf("Código: %c%s\n", estado1, codDaCarta1);
   printf("Nome da Cidade: %s\n", nomeDaCidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f\n", areakm1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Número de Pontos Turísticos: %d\n\n", numeroPontosTuristicos1);
   printf("Densidade populacional: %.2f\n", densidadePopulacional1);
   printf("PIB per capita: %.2f\n", pibPerCapta1);

   // Saida de dados da carta 2

   printf("Carta 2: \n");
   printf("Estado: %c\n", estado2);
   printf("Código: %c%s\n", estado2, codDaCarta2);
   printf("Nome da Cidade: %s\n", nomeDaCidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f\n", areakm2);
   printf("PIB: %.2f bilhões de reais\n", pib2);
   printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);
   printf("Densidade populacional: %.2f\n", densidadePopulacional2);
   printf("PIB per capita: %.2f\n", pibPerCapta2);

   // Menu de atributos para comparação

   printf("\nEscolha que atributo você quer comparar: \n");
   printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade populacional\n6 - PIB per capita\n");
   while (getchar() != '\n'); // Limpa o buffer antes de ler a opção
   scanf("%d", &opcao);

   // Lógica para comparação do atributo escolhido

   switch (opcao) {
       case 1:
           printf("POPULAÇÃO: \n");
           printf("Carta 1 - %s (%c): %d\n", nomeDaCidade1, estado1, populacao1);
           printf("Carta 2 - %s (%c): %d\n", nomeDaCidade2, estado2, populacao2);
           if (populacao1 > populacao2) {
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
           } else if (populacao1 < populacao2) {
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
           } else {
               printf("Empate!\n");
           }
           break;
   
       case 2:
           printf("ÁREA: \n");
           printf("Carta 1 - %s (%c): %.2f Km²\n", nomeDaCidade1, estado1, areakm1);
           printf("Carta 2 - %s (%c): %.2f Km²\n", nomeDaCidade2, estado2, areakm2);
           if (areakm1 > areakm2) {
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
           } else if (areakm1 < areakm2) {
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
           } else {
               printf("Empate!\n");
           }
           break;
   
       case 3:
           printf("PIB: \n");
           printf("Carta 1 - %s (%c): %.2f Bilhões de reais.\n", nomeDaCidade1, estado1, pib1);
           printf("Carta 2 - %s (%c): %.2f Bilhões de reais.\n", nomeDaCidade2, estado2, pib2);
           if (pib1 > pib2) {
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
           } else if (pib1 < pib2) {
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
           } else {
               printf("Empate!\n");
           }
           break;
   
       case 4:
           printf("NÚMERO DE PONTOS TURÍSTICOS: \n");
           printf("Carta 1 - %s (%c): %d\n", nomeDaCidade1, estado1, numeroPontosTuristicos1);
           printf("Carta 2 - %s (%c): %d\n", nomeDaCidade2, estado2, numeroPontosTuristicos2);
           if (numeroPontosTuristicos1 > numeroPontosTuristicos2) {
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
           } else if (numeroPontosTuristicos1 < numeroPontosTuristicos2) {
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
           } else {
               printf("Empate!\n");
           }
           break;

       case 5:
           printf("DENSIDADE POPULACIONAL: \n");
           printf("Carta 1 - %s (%c): %.2f\n", nomeDaCidade1, estado1, densidadePopulacional1);
           printf("Carta 2 - %s (%c): %.2f\n", nomeDaCidade2, estado2, densidadePopulacional2);
           if (densidadePopulacional1 < densidadePopulacional2) {
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
           } else if (densidadePopulacional1 > densidadePopulacional2) {
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
           } else {
               printf("Empate!\n");
           }
           break;
           
       case 6:
           printf("PIB PER CAPITA: \n");
           printf("Carta 1 - %s (%c): %.2f\n", nomeDaCidade1, estado1, pibPerCapta1);
           printf("Carta 2 - %s (%c): %.2f\n", nomeDaCidade2, estado2, pibPerCapta2);
           if (pibPerCapta1 > pibPerCapta2) {
               printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
           } else if (pibPerCapta1 < pibPerCapta2) {
               printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
           } else {
               printf("Empate!\n");
           }
           break;    
   
       default:
           printf("Opção inválida!\n");
   }



   return 0;

}