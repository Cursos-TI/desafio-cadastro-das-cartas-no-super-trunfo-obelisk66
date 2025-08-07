#include <stdio.h>
#include <string.h> // Necessário para strcpy // usei o google pq nao sabia que nao podia usar Char [] em

int main()
{
    //                      Cadastro da primeira carta do SuperTrunfo

    char codigo01[15];     // Variavél do codigo da carta
    char estado01[15];     // Variavél do Estado
    char cidade01[20];     // Variavél da cidade
    int populacao01;       // Variavél da população
    int turistico01;       // Variavél dos pontos turísticos
    float area01;          // Variavél da tamanho da cidade
    float pib01;           // Variavél do pib percapita
    float densidade01;     // população / area
    float pibPerCapita01;  // Pib / população
    float superpoder01;    // SuperTrunfo
    int atributo1;         // switch
    int resultado1;        // para mostrar quem venceu,empatou ou perdeu
    char selecionado1[30]; // variavél feito para mostragem de resultado
    float atributo1carta1;
    float atributo1carta2;
    float somaAtributo1;

    // variavéis para comparação Antigo , deixo registrado para voltar e estudar
    /* int resultadoPopulação;
     float resultadoArea;
     float resultadoPib;
     int resultadoTuristico;
     float resultadoDensidade;
     float resultadopercapita;*/

    float resultadosuperpoder;

    printf("Preencha o cadastro da primeira carta!\n");

    printf("digite o Estado da carta :");
    scanf("%s", estado01);

    printf("digite o código da carta :  "); // onde vai exibir a solicitação do código da carta
    scanf("%s", codigo01);                  // nessa linha vai capturar o código...

    printf("digite o nome da cidade da carta :");
    scanf("%s", cidade01);

    printf("digite a quantidade populacional:");
    scanf("%d", &populacao01);

    printf("digite a o tamanho no Estado em km² : ");
    scanf("%f", &area01);

    printf("digite aqui o pib :");
    scanf("%f", &pib01);

    printf("digite a quantidade de ponto turístico da cidade: ");
    scanf("%d", &turistico01);

    densidade01 = populacao01 / area01; // calculo da densidade

    pibPerCapita01 = (pib01 * 1000000000) / populacao01; // pib x 1bilhao para o resultado do pib percapita da certo. obs : usei o google pq nao estava conseguindo sozinho

    // exibição final do cadastro da primeira carta
    printf("Carta cadastrada com as seguintes informações:\n");
    printf("Estado :%s\n", estado01);
    printf("código :%s\n", codigo01);
    printf("cidade :%s\n", cidade01);
    printf("população :%d\n", populacao01);
    printf("km² :%.2f\n", area01);
    printf("Pib :%.2f $\n ", pib01);
    printf("pontos turísticos :%d\n", turistico01);
    printf("Densidadepopulacional : %.2f\n", densidade01);
    printf("PibPercapita : %.2f\n", pibPerCapita01);

    //                               Cadastro da 2ª carta para o supertrunfo

    char codigo02[15];     // Variavél do codigo da 2ª carta
    char estado02[15];     // Variavél do Estado
    char cidade02[20];     // Variavél da cidade
    int populacao02;       // Variavél da população
    int turistico02;       // Variavél dos pontos turísticos
    float area02;          // Variavél da tamanho da cidade
    float pib02;           // Variavél do pib percapita
    float densidade02;     // população / area
    float pibPerCapita02;  // Pib / população
    float superpoder02;    // superTrunfo
    int atributo2;         // escolha de atributo
    int resultado2;        // escolha de comparação quem ganhou
    char selecionado2[30]; // variavél feito para mostragem de resultado
    float atributo2carta1;
    float atributo2carta2;
    float somaAtributo2;

    printf("Preencha o cadastro da segunda carta!\n");

    printf("digite o Estado da carta :");
    scanf("%s", estado02);

    printf("digite o código da carta :");
    scanf("%s", codigo02);

    printf("digite o nome da cidade da carta :");
    scanf("%s", cidade02);

    printf("digite a quantidade populacional:");
    scanf("%d", &populacao02);

    printf("digite a o tamanho no Estado em km² :");
    scanf("%f", &area02);

    printf("digite aqui o pib :");
    scanf("%f", &pib02);

    printf("digite a quantidade de ponto turístico da cidade:");
    scanf("%d", &turistico02);

    densidade02 = populacao02 / area02;

    pibPerCapita02 = (pib02 * 1000000000) / populacao02;

    superpoder01 = populacao01 + area01 + pib01 + turistico01 + pibPerCapita01 - densidade01; // superpoder1

    superpoder02 = populacao02 + area02 + pib02 + turistico02 + pibPerCapita02 - densidade02; // superpoder 2

    // aonde vai apresentar as informações aprestada da 2º carta
    printf("Carta cadastrada com as seguintes informações:\n");
    printf("Estado :%s\n", estado02);
    printf("código :%s\n", codigo02);
    printf("cidade :%s\n", cidade02);
    printf("população :%d\n", populacao02);
    printf("km² :%.2f\n", area02);
    printf("Pib :%.2f $\n", pib02);
    printf("pontos turísticos :%d\n", turistico02);
    printf("Densidadepopulacional : %.2f\n", densidade02);
    printf("PibPercapita : %.2f\n", pibPerCapita02);

    // forma antiga ne apresentar os resultados!! Deixo aqui para voltar e estudar!
    /*printf("comparação populacional carta A e B: %d\n", resultadoPopulação =(populacao01 > populacao02 ));
    printf("comparação Area carta A e B: %.0f\n", resultadoArea =(area01 > area02 ));
    printf("comparação Pib carta A e B: %.0f\n", resultadoPib =(pib01 > pib02 ));
    printf("comparação turistico carta A e B: %d\n", resultadoTuristico =(turistico01 > turistico02));
    printf("comparação percapita carta A e B: %.0f\n", resultadopercapita=(pibPerCapita01 > pibPerCapita02));
    printf("comparação densidade carta A e B: %.0f\n", resultadoDensidade=(densidade01 < densidade02));
    printf("comparação Superpoder carta A e B %.0f\n", resultadosuperpoder = (superpoder01 > superpoder02));*/

    printf("**Escolha as Primeira opção para ser comparadas!**\n");
    printf("1. Para comparar a quantidade da população\n");
    printf("2. Para comparar a quantidade da Area\n");
    printf("3. Para comparar a quantidade do Pib\n");
    printf("4. Para comparar a quantidade de ponto turistico\n");
    printf("5. Para comparar a renda densidade\n");
    printf("6. Para comparar a renda percapita\n");

    scanf("%d", &atributo1);

    switch (atributo1)
    {
    case 1:
        printf("Atributo selecionado População!\n");
        resultado1 = populacao01 > populacao02 ? 1 : 0;
        strcpy(selecionado1, "População"); // tinha feito assim selecionado1 ="população " e nao sabia que nao podia ou esqueci e então procurei no google como fazer isso
        atributo1carta1 = populacao01;
        atributo1carta2 = populacao02;

        break;
    case 2:
        printf("Atributo selecionado Area!\n");
        resultado1 = area01 > area02 ? 1 : 0;
        strcpy(selecionado1, "Area");
        atributo1carta1 = area01;
        atributo1carta2 = area02;

        break;
    case 3:
        printf("Atributo selecionado PIB!\n");
        resultado1 = pib01 > pib02 ? 1 : 0;
        strcpy(selecionado1, "PIB");
        atributo1carta1 = pib01;
        atributo1carta2 = pib02;

        break;
    case 4:
        printf("Atributo selecionado Ponto Turistico!\n");
        resultado1 = turistico01 > turistico02 ? 1 : 0;
        strcpy(selecionado1, "Ponto Túristico");
        atributo1carta1 = turistico01;
        atributo1carta2 = turistico02;

        break;
    case 5:
        printf("Atributo selecionado Densidade Demografica!\n");
        resultado1 = densidade01 < densidade02 ? 1 : 0;
        strcpy(selecionado1, "Densidade Demografica");
        atributo1carta1 = densidade01;
        atributo1carta2 = densidade02;

        break;
    case 6:
        printf("Atributo selecionado Renda Per Capita!\n");
        resultado1 = pibPerCapita01 > pibPerCapita01 ? 1 : 0;
        strcpy(selecionado1, "Renda Per Capita");
        atributo1carta1 = pibPerCapita01;
        atributo1carta2 = pibPerCapita02;

        break;

    default:
        break;
    }

    printf("**Escolha as Segunda opção para ser comparadas!**\n");
    printf("1. Para comparar a quantidade da população\n");
    printf("2. Para comparar a quantidade da Area\n");
    printf("3. Para comparar a quantidade do Pib\n");
    printf("4. Para comparar a quantidade de ponto turistico\n");
    printf("5. Para comparar a renda densidade\n");
    printf("6. Para comparar a renda percapita\n");

    scanf("%d", &atributo2);

    if (atributo1 == atributo2)
    {
        printf("Opção já selecionada!\n");
    }
    else
    {
        switch (atributo2)
        {
        case 1:
            printf("Atributo selecionado População!\n");
            resultado2 = populacao01 > populacao02 ? 1 : 0;
            strcpy(selecionado2, "População");
            atributo2carta1 = populacao01;
            atributo2carta2 = populacao02;

            break;
        case 2:
            printf("Atributo selecionado Area!\n");
            resultado2 = area01 > area02 ? 1 : 0;
            strcpy(selecionado2, "Area");
            atributo2carta1 = area01;
            atributo2carta2 = area02;

            break;
        case 3:
            printf("Atributo selecionado PIB!\n");
            resultado2 = pib01 > pib02 ? 1 : 0;
            strcpy(selecionado2, "PIB");
            atributo2carta1 = area01;
            atributo2carta2 = area02;

            break;
        case 4:
            printf("Atributo selecionado Ponto Turistico!\n");
            resultado2 = turistico01 > turistico02 ? 1 : 0;
            strcpy(selecionado2, "Ponto Turistico");
            atributo2carta1 = turistico01;
            atributo2carta2 = turistico02;

            break;
        case 5:
            printf("Atributo selecionado Densidade Demografica!\n");
            resultado2 = densidade01 < densidade02 ? 1 : 0;
            strcpy(selecionado2, "Densidade Demografica");
            atributo2carta1 = densidade01;
            atributo2carta2 = densidade02;

            break;
        case 6:
            printf("Atributo selecionado Renda Per Capita!\n");
            resultado2 = pibPerCapita01 > pibPerCapita01 ? 1 : 0;
            strcpy(selecionado2, "Renda Per Capita");
            atributo2carta1 = pibPerCapita01;
            atributo2carta2 = pibPerCapita02;

            break;

        default:
            break;
        }

        printf("Resultado das comparações das cartas!\n");
        printf("Primeira carta %s , Segunda carta %s \n", cidade01, cidade02);
        printf("Atributos selecionado Carta01 %s , Carta 02 %s \n", selecionado1, selecionado2);
        printf("Carta 01 Escolha %s Atributo %.2f, Atributo %.2f.\n", cidade01, atributo1carta1, atributo2carta1);
        printf("Carta 02 Escolha %s Atributo %.2f, Atributo %.2f.\n", cidade02, atributo1carta2, atributo2carta2);
        somaAtributo1 = atributo1carta1 + atributo2carta1;
        somaAtributo2 = atributo1carta2 + atributo2carta2;
        printf("somas dos atributo carta 1 : %.2f , Soma dos atributos carta 2 : %.2f\n",somaAtributo1,somaAtributo2 );

         if (resultado1 && resultado2)
        {
            printf("Parabéns ,Carta 01 venceu!!");
        }
        else if (resultado1 != resultado2)
        {
            printf("Voce empatou");
        }
        else
        {
            printf("Parabéns, Carta 02 venceu!");
        }
         
        
    }
    return 0;
}