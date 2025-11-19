#include <stdio.h>
#include <string.h>

int main () {
    //Declaração das variáveis que armazenarão as informações das cartas

    /* Variáveis do mesmo tipo foram declaradas juntas para facilitar a leitura do código, mantive 
    separada as variáveis tipo array e char porque para mim fez mais sentido porém creio que           possam ser declaradas     na mesma linha também */

    char estado1, estado2;
    char codigo1[4], codigo2[4], cidade1[30], cidade2[30];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pibpercapita1, pibpercapita2;

    //Impressão das informações do jogo
    printf("\n====================================================================\n");
    printf("|                     SUPER TRUNFO - JOGO EM C:                    |\n");
    printf("********            Cadastre suas Cartas comigo!             *******\n");

    //Entrada de dados pelo usuário, e armazenamento dos mesmos nas variáveis declaradas
    printf("\nDigite o estado da primeira carta (Escolha uma letra de A á H): ");
    scanf(" %c", &estado1);

    printf("\nDigite o estado da segunda carta (Escolha uma letra de A á H): \n");
    scanf(" %c", &estado2);

    printf("\nDigite o código da primeira carta (escolha um número entre 01 e 04): \n");
    scanf("%s", codigo1);

    printf("\nDigite o código da segunda carta (escolha um número entre 01 e 04): \n");
    scanf("%s", codigo2);
    getchar(); 
    
    /* (limpeza do buffer do teclado) Meu codigo não estava funcionando corretamente     sem essa      linha, pois dps do último scanf ficou com o \n armazenado em buffer o       getchar limpa esse     buffer para que o fgets possa funcionar normalmente */

    printf("\nDigite o nome da cidade da primeira carta: \n");
    fgets(cidade1, 30, stdin); // sem o fgets não conseguiria ler a string com espaço
    cidade1[strcspn(cidade1, "\n")] = 0; // remove o \n do final

    printf("\nDigite o nome da cidade da segunda carta: \n");
    fgets(cidade2, 30, stdin); // sem o fgets não conseguiria ler a string com espaço
    cidade2[strcspn(cidade2, "\n")] = 0; // remove o \n do final

    printf("\nDigite a população da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("\nDigite a população da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("\nDigite a área da primeira carta: \n");
    scanf("%f", &area1);

    printf("\nDigite a área da segunda carta: \n");
    scanf("%f", &area2);

    printf("\nDigite o PIB da primeira carta: \n");
    scanf("%f", &pib1);  

    printf("\nDigite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("\nDigite a quantidade de pontos turisticos da primeira carta: \n");
    scanf("%d", &pontos1);

    printf("\nDigite a quantidade de pontos turisticos da segunda carta: \n");
    scanf("%d", &pontos2);

    //Nova entrada de dados - Nivel Intermediário
    
    //Densidade Populacional
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    //PIB per capita
    pibpercapita1 = pib1 / populacao1;
    pibpercapita2 = pib2 / populacao2;
    

    //Impressão para o usuário, informando que as cartas foram preenchidas
    printf("\n====================================================================\n");
    printf("|                  Cartas Preenchidas com Sucesso!                  |\n");
    printf("********            Vamos verificar as cartas...              *******\n");

    //Impressão das cartas preenchidas pelo usuário

    //Carta 01 (impressa de acordo com o preenchimento do usuário)
    printf("\n====================================================================\n");
    printf("*********************** CARTA 01 *************************************\n\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s \n", estado1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos Turísticos: %d \n", pontos1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("PIB per capita: %.2f \n", pibpercapita1);
    printf("\n\n");
    printf("====================================================================\n");

    //Carta 02 (impressa de acordo com o preenchimento do usuário)
    printf("*********************** CARTA 02 *************************************\n\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s \n", estado2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per capita: %.2f \n", pibpercapita2);
    printf("\n\n");
    printf("====================================================================\n");


  return 0;
}
