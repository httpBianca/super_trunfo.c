#include <stdio.h>
#include <string.h>

int main () {
    //Declaração das variáveis que armazenarão as informações das cartas

    /* Variáveis do mesmo tipo foram declaradas juntas para facilitar a leitura do código, mantive 
    separada as variáveis tipo array e char porque para mim fez mais sentido porém creio que possam ser       
    declaradas na mesma linha também (fica ao seu critério)*/
    int escolha;
    char estado1, estado2;
    char codigo1[4], codigo2[4], cidade1[30], cidade2[30];
    int pontos1, pontos2;
    unsigned long int populacao1, populacao2;
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
    
    /* (limpeza do buffer do teclado) Meu codigo não estava funcionando corretamente     sem essa      linha, pois 
    dps do último scanf ficou com o \n armazenado em buffer o       getchar limpa esse     buffer para que o fgets      possa funcionar normalmente */

    printf("\nDigite o nome da cidade da primeira carta: \n");
    fgets(cidade1, 30, stdin); // sem o fgets não conseguiria ler a string com espaço
    cidade1[strcspn(cidade1, "\n")] = 0; // remove o \n do final

    printf("\nDigite o nome da cidade da segunda carta: \n");
    fgets(cidade2, 30, stdin); // sem o fgets não conseguiria ler a string com espaço
    cidade2[strcspn(cidade2, "\n")] = 0; // remove o \n do final

    printf("\nDigite a população da primeira carta: \n");
    scanf("%ld", &populacao1);

    printf("\nDigite a população da segunda carta: \n");
    scanf("%ld", &populacao2);

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
    printf("\nMuito bem!\nAgora uma novidade, após essa rodada, suas cartas ganharam um novo atributo que será fundamental na sua batalha!\n");

    //Nova entrada de dados - Nivel Avançado
    
    //Entrada de nova váriavel - Super Poder
    float superPoder1, superPoder2;
    
    //Calculo do Super Poder das cartas
    superPoder1 = (populacao1 + area1 + pib1 + pontos1 + pibpercapita1) - densidade1;
    superPoder2 = (populacao2 + area2 + pib2 + pontos2 + pibpercapita2) - densidade2;


    //Comparação dos atributos das cartas e impressão do resultado
    //Nivel Iniciante!
    //Utilizando operadores relacionais para comparar os atributos das cartas
    
    int comparaPopulacao = (populacao1 > populacao2);
    int comparaArea = (area1 > area2);
    int comparaPib = (pib1 > pib2);
    int comparaPontos = (pontos1 > pontos2);
    int comparaDensidade = (densidade1 < densidade2);
    int comparaPibPerCapita = (pibpercapita1 > pibpercapita2);
    int comparaSuperPoder = (superPoder1 > superPoder2);
    

    printf("\n====================================================================\n");
    printf("*********************** RESULTADO ***********************************\n\n");
    printf("****           Comparação dos Atributos das Cartas          ****\n\n");
    printf("População: Carta 0%d é a vencedora (%d)\n", 2 - comparaPopulacao, comparaPopulacao);
    printf("Área: Carta 0%d é a vencedora (%d)\n", 2 - comparaArea, comparaArea);
    printf("PIB: Carta 0%d é a vencedora (%d)\n", 2 - comparaPib, comparaPib);
    printf("Pontos Turísticos: Carta 0%d é a vencedora (%d)\n", 2 - comparaPontos, comparaPontos);
    printf("Densidade Populacional: Carta 0%d é a vencedora (%d)\n", 2 - comparaDensidade, comparaDensidade);
    printf("PIB per capita: Carta 0%d é a vencedora (%d)\n", 2 - comparaPibPerCapita, comparaPibPerCapita);
    printf("Super Poder: Carta 0%d é a vencedora (%d)\n", 2 - comparaSuperPoder, comparaSuperPoder);
    printf("\n\n");
    printf("\n===================================================================\n");
    printf("\n\n");
    printf("*** Beleza! Tudo verificado, Hora de jogar  ***\n");
    printf("\n\n");

    //Comparação de atributos para determinar o vencedor!
    
    //Nivel Intermediario & Nível Mestre
    printf("Para começarmos escolha um tributo para comparação: \n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. PIB per capita\n7. Super Poder\n");
    printf("Digite o número do tributo: ");
    scanf("%d", &escolha);

    switch(escolha){
        case 1:
            printf("====================================================================\n");
            printf("Tributo 01 - População\n");
            if(populacao1 > populacao2){
                printf("Carta 01 é a vencedora da rodada!\n");
            }
            else if(populacao1 < populacao2){
                printf("Carta 02 é a vencedora da rodada!\n");
            }
            else{
                printf("Empate! Contabilizado 1 ponto para cada\n");
            }
            printf("\n\n");
        break;
        case 2:
            //Tributo 02 - Área
            printf("====================================================================\n");
            printf("Tributo 02 - Área\n");
            if(area1 > area2){
                printf("Carta 01 é a vencedora da rodada!\n");
            }
            else if (area1 < area2){
                printf("Carta 02 é a vencedora da rodada!\n");
            }
            else{
                printf("Empate! Contabilizado 1 ponto para cada\n");
            }
            printf("\n\n");
        break;
        case 3:
            //Tributo 03 - PIB
            printf("====================================================================\n");
            printf("Tributo 03 - PIB\n");
            if(pib1 > pib2){
                printf("Carta 01 é a vencedora da rodada!\n");
            }
            else if(pib1 < pib2){
                printf("Carta 02 é a vencedora da rodada!\n");
            }
            else{
                printf("Empate! Contabilizado 1 ponto para cada\n");
            }
            printf("\n\n");
        break;
        case 4:
            //Tributo 04 - Pontos Turísticos
            printf("====================================================================\n");
            printf("Tributo 04 - Pontos Turísticos\n");
            if(pontos1 > pontos2){
                printf("Carta 01 é a vencedora da rodada!\n");
            }
            else if(pontos1 < pontos2){
                printf("Carta 02 é a vencedora da rodada!\n");
            }
            else{
                printf("Empate! Contabilizado 1 ponto para cada\n");
            }
            printf("\n\n");
        break;
        case 5:
            //Tributo 05 - Densidade Populacional
            printf("====================================================================\n");
            printf("Tributo 05 - Densidade Populacional\n");
            if(densidade1 < densidade2){
                printf("Carta 01 é a vencedora da rodada!\n");
            }
            else if(densidade1 > densidade2){
                printf("Carta 02 é a vencedora da rodada!\n");
            }
            else{
                printf("Empate! Contabilizado 1 ponto para cada\n");
            }
            printf("\n\n");
        break;
        case 6:
            //Tributo 06 - PIB per capita
            printf("====================================================================\n");
            printf("Tributo 06 - PIB per capita\n");
            if(pibpercapita1 > pibpercapita2){
                printf("Carta 01 é a vencedora da rodada!\n");
            }
            else if(pibpercapita1 < pibpercapita2){
                printf("Carta 02 é a vencedora da rodada!\n");
            }
            else{
                printf("Empate! Contabilizado 1 ponto para cada\n");
            }
            printf("\n\n");
        break;
        case 7:
            //Tributo 07 - Super Poder
            printf("====================================================================\n");
            printf("Tributo 07 - Super Poder\n");
            if(superPoder1 > superPoder2){
                printf("Carta 01 é a vencedora da rodada!\n");
            }
            else if(superPoder1 < superPoder2){
                printf("Carta 02 é a vencedora da rodada!\n");
            }
            else{
                printf("Empate! Contabilizado 1 ponto para cada\n");
            }
            printf("\n\n");
            printf("====================================================================\n");
            printf("\n\n");
        break;
        default:
            printf("Escolha uma opção válida!\n");
    }
    
    printf("*********************** FIM DE JOGO ********************************\n");
  return 0;
}
