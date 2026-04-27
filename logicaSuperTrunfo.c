#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomeDoJogador[50], nomeDoJogador2[50];
    char boasVindas[50] = "Sejam Bem Vindos! Esse é o jogo Super TRUNFO!\n\n";

    // Área para definição das variáveis para armazenar as propriedades das cidades

    char estado, estado2;                    // Estados de cada carta representado em uma letra
    char codCarta[5], codCarta2[5];          // Código da carta representado na letra do estao mais o numero da cidade
    char nomeCidade[20], nomeCidade2[20];    // Nome da cidade da carta
    int populacao, populacao2;               // População da cidade
    float area, area2, pib, pib2;            // Área da cidade em metros quadrados KM² - Produto interno bruto da cidade
    int pontosTuristicos, pontosTuristicos2; // Número total de pontos turísticos

    // Área para entrada de dados

    printf("Olá! - Primeiramente precisamos conhece-lo(a)\n");
    printf("Porfavor, digite o nome do primeiro jogador: \n");
    scanf("%s", nomeDoJogador);
    printf("Oi %s !\n", nomeDoJogador);

    printf("Agora, digite o nome do segundo jogador: \n");
    scanf("%s", nomeDoJogador2);
    printf("Oi %s!\n", nomeDoJogador2);
    printf("%s\n", boasVindas);
    // Cadastrando a primeira carta

    printf("Vamos começar cadastrando a sua primeira carta \n\n");

    printf("%s digite o Estado da sua carta, reprensentado por uma letra de, 'A' até 'H':\n", nomeDoJogador);
    scanf(" %c", &estado);

    printf("Agora, digite o código da sua carta, com a primeira letra do seu estado, EX.: A01 ou B01: \n");
    scanf("%s", codCarta);

    printf("Digite o nome da cidade com uma palavra: \n");
    scanf("%s", nomeCidade);

    printf("Certo, agora digite a população total da sua cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área total da sua cidade: \n");
    scanf("%f", &area);

    printf("Digite o valor do PIB da sua cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos que a sua cidade tem: \n");
    scanf("%d", &pontosTuristicos);

    // Cadastro segunda carta

    printf("Vamos cadastrar a sua segunda carta\n\n");
    printf("%s digite o Estado da sua carta, reprensentado por uma letreta de, 'A' até 'H'\n", nomeDoJogador2);
    scanf(" %c", &estado2);

    printf("Agora, digite o código da sua carta, com a primeira letra do seu estado, EX.: A01 ou B01 \n");
    scanf("%s", codCarta2);

    printf("Digite o nome da cidade com uma palavra: \n");
    scanf("%s", nomeCidade2);

    printf("Certo, agora digite a população total da sua cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área total da sua cidade: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da sua cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos que a sua cidade tem: \n");
    scanf("%d", &pontosTuristicos2);

    // Área de Cálculo de variáveis (Foi alocado está área de calculo, pois no local inicial ocorria muitos erros de calculo nas variaveis finais)

    float densidadePopulacional = populacao / area;
    float densidadePopulacional2 = populacao2 / area2;
    float pibPercapita = pib / populacao;
    float pibPercapita2 = pib2 / populacao2;
    float superPoder = populacao + area + pib + pontosTuristicos + pibPercapita + densidadePopulacional;
    float superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2 + densidadePopulacional2;

    // Área para exibição dos dados da cidade

    // Primeira Carta
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s\n", codCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional);
    printf("PIB per Capita: %.2f \n \n", pibPercapita);

    // Segunda Carta
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s\n", codCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População; %d\n", populacao2);
    printf("Área: %.2f KM²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    printf("PIB per Capita: %.2f \n", pibPercapita2);
    printf("CADASTRO CONCLUIDO COM SUCESSO!\n\n");

    // Campo de Batalha das cartas (Comparação)
    int comparacaoPopulacao = populacao > populacao2;
    int comparacaoArea = area > area2;
    int comparacaoPib = pib > pib2;
    int comparacaoPontosTuristicos = pontosTuristicos > pontosTuristicos2;
    int comparacaoDensidadePopulacional = densidadePopulacional < densidadePopulacional2;
    int comparacaoPibPerCapita = pibPercapita > pibPercapita2;
    int comparacaoSuperPoder = superPoder > superPoder2;
    int statusCarta = 1;
    int menuComparacao;

    // Menu de Escolha de Comparação de Atributo

    printf("Escolha o Atributo de Comparação\n");
    printf("1- População\n");
    printf("2- Área\n");
    printf("3- PIB\n");
    printf("4- Pontos Turísticos\n");
    printf("5- Densidade Populacional\n");
    printf("6- PIB Per Capta\n");
    printf("7- Super Poder\n");
    scanf("%d", &menuComparacao);

    switch (menuComparacao)
    {
    case 1:
        printf("Você escolheu Atributo População\n");
        break;
    case 2:
        printf("Você escolheu Atributo Área\n");
        break;
    case 3:
        printf("Você escolheu Atributo PIB\n");
        break;
    case 4:
        printf("Você escolheu Atributo Pontos Turísticos\n");
        break;
    case 5:
        printf("Você escolheu Atributo Desnsidade Populacionaç\n");
        break;
    case 6:
        printf("Você escolheu Atributo PIB Per Capta\n");
        break;
    case 7:
        printf("Você escolheu Atributo Super Poder\n");
        break;
    default:
        printf("Opção Invalida!");
        break;
    }
    // ZONA DE COMPARAÇÃO DE CARTAS

    printf("*** Comparação de Cartas! *** \n\n");

    if (menuComparacao == 1)
    {
        printf("População: Carta %d venceu! (%d)\n", statusCarta + (comparacaoPopulacao == 0), comparacaoPopulacao);
    }
    else if (menuComparacao == 2)
    {
        printf("Área: Carta %d venceu! (%d)\n", statusCarta + (comparacaoArea == 0), comparacaoArea);
    }
    else if (menuComparacao == 3)
    {
        printf("PIB: Carta %d venceu! (%d)\n", statusCarta + (comparacaoPib == 0), comparacaoPib);
    }
    else if (menuComparacao == 4)
    {
        printf("Pontos Turísticos: Carta %d Venceu! (%d)\n", statusCarta + (comparacaoPontosTuristicos == 0), comparacaoPontosTuristicos);
    }
    else if (menuComparacao == 5)
    {
        printf("Densidade Populacional: Carta %d venceu! (%d)\n", statusCarta + (comparacaoDensidadePopulacional == 0), comparacaoDensidadePopulacional);
    }
    else if (menuComparacao == 6)
    {
        printf("PIB per Capita: Carta %d venceu! (%d)\n", statusCarta + (comparacaoPibPerCapita == 0), comparacaoPibPerCapita);
    }
    else
    {
        printf("Super Poder: Carta %d venceu! (%d)\n\n", statusCarta + (comparacaoSuperPoder == 0), comparacaoSuperPoder);
    }

    printf("*** CARTA VENCEDORA! ***\n\n");

    // Exibição Individual do valor do atributo para a comparação

    if (menuComparacao == 1)
    {
        printf("Carta 1 - %s: %d\n", nomeCidade, populacao);
        printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
        if (populacao > populacao2)
        {
            printf("A carta vencedora é a Carta 1! Parabéns %s!\n", nomeDoJogador);
        }
        else if (populacao2 > populacao)
        {
            printf("A carta vencedora é a Carta 2! Parabéns %s!\n", nomeDoJogador2);
        }
        else
        {
            printf("O jogo terminou empatado!\n");
        }
    }
    else if (menuComparacao == 2)
    {
        printf("Carta 1 - %s: %.2f\n", nomeCidade, area);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
        if (area > area2)
        {
            printf("A carta vencedora é a Carta 1! Parabéns %s!\n", nomeDoJogador);
        }
        else if (area2 > area)
        {
            printf("A carta vencedora é a Carta 2! Parabéns %s!\n", nomeDoJogador2);
        }
        else
        {
            printf("O jogo terminou empatado!\n");
        }
    }
    else if (menuComparacao == 3)
    {
        printf("Carta 1 - %s: %.2f\n", nomeCidade, pib);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);
        if (pib > pib2)
        {
            printf("A carta vencedora é a Carta 1! Parabéns %s!\n", nomeDoJogador);
        }
        else if (pib2 > pib)
        {
            printf("A carta vencedora é a Carta 2! Parabéns %s!\n", nomeDoJogador2);
        }
        else
        {
            printf("O jogo terminou empatado!\n");
        }
    }
    else if (menuComparacao == 4)
    {
        printf("Carta 1 - %s: %d\n", nomeCidade, pontosTuristicos);
        printf("Carta 2 - %s: %d\n", nomeCidade2, pontosTuristicos2);
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("A carta vencedora é a Carta 1! Parabéns %s!\n", nomeDoJogador);
        }
        else if (pontosTuristicos2 > pontosTuristicos)
        {
            printf("A carta vencedora é a Carta 2! Parabéns %s!\n", nomeDoJogador2);
        }
        else
        {
            printf("O jogo terminou empatado!\n");
        }
    }
    else if (menuComparacao == 5)
    {
        printf("Carta 1 - %s: %.2f\n", nomeCidade, densidadePopulacional);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidadePopulacional2);
        if (densidadePopulacional < densidadePopulacional2)
        {
            printf("A carta vencedora é a Carta 1! Parabéns %s!\n", nomeDoJogador);
        }
        else if (densidadePopulacional2 < densidadePopulacional)
        {
            printf("A carta vencedora é a Carta 2! Parabéns %s!\n", nomeDoJogador2);
        }
        else
        {
            printf("O jogo terminou empatado!\n");
        }
    }
    else if (menuComparacao == 6)
    {
        printf("Carta 1 - %s: %.2f\n", nomeCidade, pibPercapita);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, pibPercapita2);
        if (pibPercapita > pibPercapita2)
        {
            printf("A carta vencedora é a Carta 1! Parabéns %s!\n", nomeDoJogador);
        }
        else if (pibPercapita2 > pibPercapita)
        {
            printf("A carta vencedora é a Carta 2! Parabéns %s!\n", nomeDoJogador2);
        }
        else
        {
            printf("O jogo terminou empatado!\n");
        }
    }
    else
    {
        printf("Carta 1 - %s: %.2f\n", nomeCidade, superPoder);
        printf("Carta 2 - %s: %.2f\n", nomeCidade2, superPoder2);
        if (superPoder > superPoder2)
        {
            printf("A carta vencedora é a Carta 1! Parabéns %s!\n", nomeDoJogador);
        }
        else if (superPoder2 > superPoder)
        {
            printf("A carta vencedora é a Carta 2! Parabéns %s!\n", nomeDoJogador2);
        }
        else
        {
            printf("O jogo terminou empatado!\n");
        }
    }

    return 0;
}