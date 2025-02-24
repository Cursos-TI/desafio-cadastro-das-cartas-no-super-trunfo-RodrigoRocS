#include <stdio.h>
#include <string.h>

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
    
    //Cabeçalho

    printf("***Cadastro de Cartas do Super Trunfo***\n");
    printf("Você precisará inserir informações sobre duas cidades.\n\n");

    //Armazenamento dos dados das cartas 1 e 2.

    //Entrada de dados da carta 1.

    printf("Digite uma letra de A a H para representar o estado da carta 1: \n");
    scanf(" %c", &estado1);

    printf("Digite 2 numeros para representar o código da carta 1: \n");
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

    printf("Digite 2 numeros para representar o código da carta 2: \n");
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

    // variaveis iniciadas após atribuição dos valores para cauculo

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
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("Densidade populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f\n\n", pibPerCapta1);

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

    int opcao, opcao2;
    int pontos1 = 0, pontos2 = 0;
    char atributo1[50], atributo2[50];
    float valorAtributo1, valorAtributo2, valorAtributo1Carta2, valorAtributo2Carta2;

    printf("\nEscolha 2 atributos para comparar: \n");
    printf("Digite um número de 1 a 6 para escolher: \n");
    printf("\n1º atributo: \n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade populacional\n6 - PIB per capita\n");
    while (getchar() != '\n'); // Limpa o buffer antes de ler a opção
    scanf("%d", &opcao);
    
    //logica para comparação com 2 atributos:

    //seleção e armazenamento dos dados da 1ª carta:
    switch (opcao){
    case 1:
        strcpy(atributo1, "População"); // cópia uma string para a variavel, da biblioteca <string.h>
        valorAtributo1 = populacao1;
        valorAtributo1Carta2 = populacao2;
        break;
    case 2:
        strcpy(atributo1, "Área em Km²");
        valorAtributo1 = areakm1;
        valorAtributo1Carta2 = areakm2;
        break;
    case 3:
        strcpy(atributo1, "PIB");
        valorAtributo1 = pib1;
        valorAtributo1Carta2 = pib2;
        break;
    case 4:
        strcpy(atributo1, "Número de pontos turísticos");
        valorAtributo1 = numeroPontosTuristicos1;
        valorAtributo1Carta2 = numeroPontosTuristicos2;
        break;
    case 5:
        strcpy(atributo1, "Densidade populacional");
        valorAtributo1 = densidadePopulacional1;
        valorAtributo1Carta2 = densidadePopulacional2;
        break;
    case 6:
        strcpy(atributo1, "PIB per capita");
        valorAtributo1 = pibPerCapta1;
        valorAtributo1Carta2 = pibPerCapta2;
        break;
    default:
        printf("Opção inválida!\n");
    }

    //seleção e armazenamento dos dados da 2ª carta:
    do {
        printf("\n2º atributo diferente: \n");
        printf("Digite um número de 1 a 6 para escolher: \n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Número de pontos turísticos\n5 - Densidade populacional\n6 - PIB per capita\n");
    
        while (getchar() != '\n'); // Limpa o buffer antes de ler a opção
        scanf("%d", &opcao2);
    
        if(opcao2 == opcao) {
            printf("Erro: Escolha um atributo diferente!\n");
        }
    
    } while (opcao2 == opcao);

    switch (opcao2){
    case 1:
        strcpy(atributo2, "População");
        valorAtributo2 = populacao1;
        valorAtributo2Carta2 = populacao2;
        break;
    case 2:
        strcpy(atributo2, "Área em Km²");
        valorAtributo2 = areakm1;
        valorAtributo2Carta2 = areakm2;
        break;
    case 3:
        strcpy(atributo2, "PIB");
        valorAtributo2 = pib1;
        valorAtributo2Carta2 = pib2;
        break;
    case 4:
        strcpy(atributo2, "Número de pontos turísticos");
        valorAtributo2 = numeroPontosTuristicos1;
        valorAtributo2Carta2 = numeroPontosTuristicos2;
        break;
    case 5:
        strcpy(atributo2, "Densidade populacional");
        valorAtributo2 = densidadePopulacional1;
        valorAtributo2Carta2 = densidadePopulacional2;
        break;

    case 6:
        strcpy(atributo2, "PIB per capita");
        valorAtributo2 = pibPerCapta1;
        valorAtributo2Carta2 = pibPerCapta2;
        break;
    
    default:
        printf("Opção inválida!\n");
    }

    //Exibição dos resultados:

    printf("Carta 1 - %s (%c)\n", nomeDaCidade1, estado1);
    printf("%s: %.2f\n", atributo1, valorAtributo1);
    printf("%s: %.2f\n", atributo2, valorAtributo2);
    printf("\nCarta 2 - %s (%c)\n", nomeDaCidade2, estado2);
    printf("%s: %.2f\n", atributo1, valorAtributo1Carta2);
    printf("%s: %.2f\n", atributo2, valorAtributo2Carta2);
   
    if (valorAtributo1 == valorAtributo1Carta2) {
        printf("Empate no atributo %s!\n", atributo1);
    } else {
        if (strcmp(atributo1, "Densidade populacional") == 0) { // Se for densidade, o menor vence / função strcmp compara os caracteres das strings um a um.
            (valorAtributo1 < valorAtributo1Carta2) ? 
                (printf("Carta 1 (%s) venceu no atributo %s!\n", nomeDaCidade1, atributo1), pontos1++) :
                (printf("Carta 2 (%s) venceu no atributo %s!\n", nomeDaCidade2, atributo1), pontos2++);
        } else { // Para os outros atributos, o maior vence
            (valorAtributo1 > valorAtributo1Carta2) ? 
                (printf("Carta 1 (%s) venceu no atributo %s!\n", nomeDaCidade1, atributo1), pontos1++) :
                (printf("Carta 2 (%s) venceu no atributo %s!\n", nomeDaCidade2, atributo1), pontos2++);
        }
    }
    
    // Comparação do segundo atributo
    if (valorAtributo2 == valorAtributo2Carta2) {
        printf("Empate no atributo %s!\n", atributo2);
    } else {
        if (strcmp(atributo2, "Densidade populacional") == 0) { // Se for densidade, o menor vence
            (valorAtributo2 < valorAtributo2Carta2) ? 
                (printf("Carta 1 (%s) venceu no atributo %s!\n", nomeDaCidade1, atributo2), pontos1++) :
                (printf("Carta 2 (%s) venceu no atributo %s!\n", nomeDaCidade2, atributo2), pontos2++);
        } else { // Para os outros atributos, o maior vence
            (valorAtributo2 > valorAtributo2Carta2) ? 
                (printf("Carta 1 (%s) venceu no atributo %s!\n", nomeDaCidade1, atributo2), pontos1++) :
                (printf("Carta 2 (%s) venceu no atributo %s!\n", nomeDaCidade2, atributo2), pontos2++);
        }
    }

    printf("Pontuação da rodada: \n");
            printf("Carta 1 - %s: %d\n", nomeDaCidade1, pontos1);
            printf("Carta 2 - %s: %d\n", nomeDaCidade2, pontos2);
            if (pontos1 == pontos2) {
                printf("Empate!\n");
            } else {
                (pontos1 > pontos2) ? printf("Carta 1 (%s) venceu!\n", nomeDaCidade1)
                                              : printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
            }



    return 0;

}
