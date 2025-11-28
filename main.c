#include <stdio.h>
#include <string.h>

int main () {
    //Declaração das variáveis que armazenarão as informações das cartas

    /* Variáveis do mesmo tipo foram declaradas juntas para facilitar a leitura do código, mantive 
    separada as variáveis tipo array e char porque para mim fez mais sentido porém creio que possam ser       
    declaradas na mesma linha também (fica ao seu critério)*/
    int escolha1, escolha2;
    int resultado1, resultado2;
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
    printf("População: %ld \n", populacao1);
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
    printf("População: %ld \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("PIB per capita: %.2f \n", pibpercapita2);
    printf("\n\n");
    printf("====================================================================\n");
    printf("\nMuito bem!\nAgora uma novidade, você ganhou um novo atributo!\n");

    //Nova entrada de dados - Nivel Avançado
    
    //Entrada de nova váriavel - Super Poder
    float superPoder1, superPoder2;
    
    //Calculo do Super Poder das cartas
    superPoder1 = (populacao1 + area1 + pib1 + pontos1 + pibpercapita1) - densidade1;
    superPoder2 = (populacao2 + area2 + pib2 + pontos2 + pibpercapita2) - densidade2;


    //Comparação dos atributos das cartas e impressão do resultado
    
    //Nivel Intermediario & Nível Mestre
    printf("\nVamos Começar a Batalha!");
    printf("\nPara começarmos escolha um atributo para comparação: \n\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. PIB per capita\n7. Super Poder (atributo novo)\n");
    printf("\nDigite o número do Atributo: ");
    scanf("%d", &escolha1);

    /* Usando switch pois o usuário tem multiplas escolhas, e para cada uma delas trará uma comparação diferente, comparação feita utilizando o if-else, Ex: Se o usuário escolheu a opção 1 irá informar alguns atributos da carta e logo depois terá um if-else para fazer a comparação do atributo, se é maior, menor ou igual*/
    switch(escolha1){
        case 1:
            printf("\n\n====================================================================\n\n");
            printf("Atributo 01 - População\n");
            printf("Comparação de Cartas (Atributo - População)\n");
            printf("Carta 1 - %s: %ld\n",cidade1, populacao1);
            printf("Carta 2 - %s: %ld\n", cidade2, populacao2);
            if(populacao1 > populacao2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
                scanf("%d", &resultado1);
            }
            else if(populacao1 < populacao2){
                printf("Resultado: Carta 02 - (%s) venceu!\n", cidade2);
            }
            else{
                printf("Empate!\n");
            }
            printf("\n\n");
        break;
        case 2:
            //ATributo 02 - Área
            printf("Atributo 02 - Área\n");
            printf("Comparação de Cartas (Atributo - Área)\n");
            printf("Carta 1 - %s: %f\n",cidade1, area1);
            printf("Carta 2 - %s: %f\n", cidade2, area2);
            if(area1 > area2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
            }
            else if (area1 < area2){
                printf("Resultado: Carta 02 - (%s) venceu!\n", cidade2);
            }
            else{
                printf("Empate!\n");
            }
            printf("\n\n");
        break;
        case 3:
            //Atributo 03 - PIB
            printf("\n\n====================================================================\n");
            printf("Atributo 03 - PIB\n");
            printf("Comparação de Cartas (Atributo - PIB)\n");
            printf("Carta 1 - %s: %f\n",cidade1, pib1);
            printf("Carta 2 - %s: %f\n", cidade2, pib2);
            if(pib1 > pib2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
            }
            else if(pib1 < pib2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
            }
            else{
                printf("Empate!\n");
            }
            printf("\n\n");
        break;
        case 4:
            //Atributo 04 - Pontos Turísticos
            printf("\n\n====================================================================\n");
            printf("Atributo 04 - Pontos Turísticos\n");
            printf("Comparação de Cartas (Atributo - Pontos Turisticos)\n");
            printf("Carta 1 - %s: %d\n",cidade1, pontos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos2);
            if(pontos1 > pontos2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
            }
            else if(pontos1 < pontos2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
            }
            else{
                printf("Empate!\n");
            }
            printf("\n\n");
        break;
        case 5:
            //Atributo 05 - Densidade Populacional
            printf("\n\n====================================================================\n");
            printf("Atributo 05 - Densidade Populacional\n");
            printf("Comparação de Cartas (Atributo - Densidade Populacional)\n");
            printf("Carta 1 - %s: %f\n",cidade1, densidade1);
            printf("Carta 2 - %s: %f\n", cidade2, densidade2);
            if(densidade1 < densidade2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
            }
            else if(densidade1 > densidade2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
            }
            else{
                printf("Empate!\n");
            }
            printf("\n\n");
        break;
        case 6:
            //Atributo 06 - PIB per capita
            printf("\n\n====================================================================\n");
            printf("Atributo 06 - PIB per capita\n");
            printf("Comparação de Cartas (Atributo - PIB per capita)\n");
            printf("Carta 1 - %s: %f\n",cidade1, pibpercapita1);
            printf("Carta 2 - %s: %f\n", cidade2, pibpercapita2);
            if(pibpercapita1 > pibpercapita2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
            }
            else if(pibpercapita1 < pibpercapita2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
            }
            else{
                printf("Empate!\n");
            }
            printf("\n\n");
        break;
        case 7:
            //Atributo 07 - Super Poder
            printf("\n\n====================================================================\n");
            printf("Atributo 07 - Super Poder\n");
            printf("Comparação de Cartas (Atributo - Super Poder)\n");
            printf("Carta 1 - %s: %f\n",cidade1, superPoder1);
            printf("Carta 2 - %s: %f\n", cidade2, superPoder2);
            if(superPoder1 > superPoder2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
            }
            else if(superPoder1 < superPoder2){
                printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
            }
            else{
                printf("Empate!\n");
            }
            printf("\n\n");
            printf("====================================================================\n");
            printf("\n\n");
        break;
        default:
            //Se o usuário digitar algo diferente do sugerido
            printf("Escolha uma opção válida!\n");
        break;
    }

    //Usuário escolherá um segundo atributo para compararmos
    printf("====================================================================\n");
    printf("\n\n");
    printf("\nEscolha um segundo atributo para comparação: \n\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. PIB per capita\n7. Super Poder (atributo novo)\n");
    printf("\nDigite o número do Atributo: ");
    scanf("%d", &escolha2);

    //Comparação novamente de acordo com a escolha do usuário
    if(escolha2 == escolha1){
        printf("\nJá foi escolhido esse atributo!");
    }
    else{
        switch(escolha1){
            case 1:
            printf("\n\n====================================================================\n\n");
                printf("Atributo 01 - População\n");
                printf("Comparação de Cartas (Atributo - População)\n");
                printf("Carta 1 - %s: %ld\n",cidade1, populacao1);
                printf("Carta 2 - %s: %ld\n", cidade2, populacao2);
                if(populacao1 > populacao2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
                }
                else if(populacao1 < populacao2){
                    printf("Resultado: Carta 02 - (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Empate!\n");
                }
                printf("\n\n");
            break;
            case 2:
                //ATributo 02 - Área
                printf("Atributo 02 - Área\n");
                printf("Comparação de Cartas (Atributo - Área)\n");
                printf("Carta 1 - %s: %f\n",cidade1, area1);
                printf("Carta 2 - %s: %f\n", cidade2, area2);
                if(area1 > area2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
                }
                else if (area1 < area2){
                    printf("Resultado: Carta 02 - (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Empate!\n");
                }
                printf("\n\n");
            break;
            case 3:
                //Atributo 03 - PIB
                printf("\n\n====================================================================\n");
                printf("Atributo 03 - PIB\n");
                printf("Comparação de Cartas (Atributo - PIB)\n");
                printf("Carta 1 - %s: %f\n",cidade1, pib1);
                printf("Carta 2 - %s: %f\n", cidade2, pib2);
                if(pib1 > pib2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
                }
                else if(pib1 < pib2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Empate!\n");
                }
                printf("\n\n");
            break;
            case 4:
                //Atributo 04 - Pontos Turísticos
                printf("\n\n====================================================================\n");
                printf("Atributo 04 - Pontos Turísticos\n");
                printf("Comparação de Cartas (Atributo - Pontos Turisticos)\n");
                printf("Carta 1 - %s: %d\n",cidade1, pontos1);
                printf("Carta 2 - %s: %d\n", cidade2, pontos2);
                if(pontos1 > pontos2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
                }
                else if(pontos1 < pontos2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Empate!\n");
                }
                printf("\n\n");
            break;
            case 5:
                //Atributo 05 - Densidade Populacional
                printf("\n\n====================================================================\n");
                printf("Atributo 05 - Densidade Populacional\n");
                printf("Comparação de Cartas (Atributo - Densidade Populacional)\n");
                printf("Carta 1 - %s: %f\n",cidade1, densidade1);
                printf("Carta 2 - %s: %f\n", cidade2, densidade2);
                if(densidade1 < densidade2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
                }
                else if(densidade1 > densidade2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Empate!\n");
                }
                printf("\n\n");
            break;
            case 6:
                //Atributo 06 - PIB per capita
                printf("\n\n====================================================================\n");
                printf("Atributo 06 - PIB per capita\n");
                printf("Comparação de Cartas (Atributo - PIB per capita)\n");
                printf("Carta 1 - %s: %f\n",cidade1, pibpercapita1);
                printf("Carta 2 - %s: %f\n", cidade2, pibpercapita2);
                if(pibpercapita1 > pibpercapita2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
                }
                else if(pibpercapita1 < pibpercapita2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Empate!\n");
                }
                printf("\n\n");
            break;
            case 7:
                //Atributo 07 - Super Poder
                printf("\n\n====================================================================\n");
                printf("Atributo 07 - Super Poder\n");
                printf("Comparação de Cartas (Atributo - Super Poder)\n");
                printf("Carta 1 - %s: %f\n",cidade1, superPoder1);
                printf("Carta 2 - %s: %f\n", cidade2, superPoder2);
                if(superPoder1 > superPoder2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade1);
                }
                else if(superPoder1 < superPoder2){
                    printf("Resultado: Carta 01 - (%s) venceu!\n", cidade2);
                }
                else{
                    printf("Empate!\n");
                }
                printf("\n\n");
                printf("====================================================================\n");
                printf("\n\n");
            break;
            default:
                //Se o usuário digitar algo diferente do sugerido
                printf("Escolha uma opção válida!\n");
            break;
        }
    }
    
    printf("\n\n");
    printf("*********************** FIM DE JOGO ********************************\n");
  return 0;
}
