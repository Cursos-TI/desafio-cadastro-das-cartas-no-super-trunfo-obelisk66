#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    //                        Cadastro da primeira carta do SuperTrunfo

    char codigo01[15];    // Variavél do codigo da carta
    char estado01[15];    // Variavél do Estado
    char cidade01[20];    // Variavél da cidade
    int populacao01;      // Variavél da população
    int turistico01;      // Variavél dos pontos turísticos
    float area01;         // Variavél da tamanho da cidade
    float pib01;          // Variavél do pib percapita
    float densidade01;    // população / area
    float pibPerCapita01; // Pib / população
    float superpoder01; //SuperTrunfo
    int escolha; // switch
    
                                // variavéis para comparação Antigo , deixo registrado para voltar e estudar
   /* int resultadoPopulação;
    float resultadoArea;
    float resultadoPib;
    int resultadoTuristico;
    float resultadoDensidade;
    float resultadopercapita;*/
    
    float resultadosuperpoder ;
    
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

    densidade01 = populacao01 / area01;

    pibPerCapita01 = (pib01 * 1000000000) / populacao01; // pib x 1bilhao para o resultado do pib percapita dê certo



    // exibição final do cadastro da primeira carta
    printf("Carta cadastrada com as seguintes informações:\n");
    printf("Estado :%s\n", estado01);
    printf("código :%s\n", codigo01);
    printf("cidade :%s\n", cidade01);
    printf("população :%d\n", populacao01);
    printf("km² :%.2f\n", area01);
    printf("Pib :%.2f $\n ", pib01);
    printf("pontos turísticos :%d\n", turistico01);
    printf("Densidadepopulacional : %.2f\n",densidade01 );
    printf("PibPercapita : %.2f\n",pibPerCapita01 );

    //                               Cadastro da 2ª carta para o supertrunfo

    char codigo02[15];    // Variavél do codigo da 2ª carta
    char estado02[15];    // Variavél do Estado
    char cidade02[20];    // Variavél da cidade
    int populacao02;      // Variavél da população
    int turistico02;      // Variavél dos pontos turísticos
    float area02;         // Variavél da tamanho da cidade
    float pib02;          // Variavél do pib percapita
    float densidade02;    // população / area
    float pibPerCapita02; // Pib / população
    float superpoder02; // superTrunfo

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

    superpoder01 = populacao01 + area01 + pib01 + turistico01 + pibPerCapita01 - densidade01 ;// superpoder1

    superpoder02 = populacao02 + area02 + pib02 + turistico02 + pibPerCapita02 - densidade02 ;//superpoder 2



    // aonde vai apresentar as informações aprestada da 2º carta
    printf("Carta cadastrada com as seguintes informações:\n");
    printf("Estado :%s\n", estado02);
    printf("código :%s\n", codigo02);
    printf("cidade :%s\n", cidade02);
    printf("população :%d\n", populacao02);
    printf("km² :%.2f\n", area02);
    printf("Pib :%.2f $\n", pib02);
    printf("pontos turísticos :%d\n", turistico02);
    printf("Densidadepopulacional : %.2f\n",densidade02 );
    printf("PibPercapita : %.2f\n",pibPerCapita02 );

                                    //forma antiga ne apresentar os resultados!! Deixo aqui para voltar e estudar!
    /*printf("comparação populacional carta A e B: %d\n", resultadoPopulação =(populacao01 > populacao02 )); 
    printf("comparação Area carta A e B: %.0f\n", resultadoArea =(area01 > area02 ));
    printf("comparação Pib carta A e B: %.0f\n", resultadoPib =(pib01 > pib02 ));
    printf("comparação turistico carta A e B: %d\n", resultadoTuristico =(turistico01 > turistico02));
    printf("comparação percapita carta A e B: %.0f\n", resultadopercapita=(pibPerCapita01 > pibPerCapita02));
    printf("comparação densidade carta A e B: %.0f\n", resultadoDensidade=(densidade01 < densidade02));
    printf("comparação Superpoder carta A e B %.0f\n", resultadosuperpoder = (superpoder01 > superpoder02));*/

    printf("**Escolha as opções para ser comparadas!**\n");
    printf("1. Para comparar a quantidade da população\n");
    printf("2. Para comparar a quantidade da Area\n");
    printf("3. Para comparar a quantidade do Pib\n");
    printf("4. Para comparar a quantidade de ponto turistico\n");
    printf("5. Para comparar a renda densidade\n");
    printf("6. Para comparar a renda percapita\n");

    scanf("%d",&escolha);

    switch (escolha)
    {
    case 1:
    // comparações das cartas utilizando estrutura de decisão composta!
          printf("Resultados da comparação!\n");

     if(populacao01 > populacao02){ 
          
        printf("Atributos usado para comparação! **População**\nCarta : %s  população : %d \n" ,cidade01, populacao01);
        printf("Carta %s : população : %d \n" ,cidade02, populacao02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade01);

     }else if(populacao01 < populacao02){

        printf("Atributos usado para comparação! ** População**\nCarta : %s população : %d " ,cidade01, populacao01);
        printf("Carta %s : população : %d \n" ,cidade02, populacao02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade02);

    }else{

        printf("Atributos usado para comparação! ** População**\nCarta : %s população : %d " ,cidade01, populacao01);
        printf("Carta %s : população : %d \n" ,cidade02, populacao02);
        printf("Empate! as cartas tem a mesma quantidade de população");
    }
        break;

    case 2:
    // comparações das cartas utilizando estrutura de decisão composta!

        printf("Resultados da comparação!\n");

     if(area01 > area02){ 
          
        printf("Atributos usado para comparação! ** KM² **\nCarta : %s  KM² : %.2f \n" ,cidade01, area01);
        printf("Carta %s : KM² : %.2f \n" ,cidade02, area02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade01);

     }else if(area01 < area02){

        printf("Atributos usado para comparação! ** KM² **\nCarta : %s KM² : %.2f " ,cidade01, area01);
        printf("Carta %s : KM² : %.2f \n" ,cidade02, area02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade02);

    }else{

        printf("Atributos usado para comparação! ** KM² **\nCarta : %s KM² : %.2f " ,cidade01, area01);
        printf("Carta %s : KM² : %.2f \n" ,cidade02, area02);
        printf("Empate! as cartas tem a mesma quantidade de Km²");
    }
        break;

     case 3 :
      printf("Resultados da comparação!\n");

     if(pib01 > pib02){ 
          
        printf("Atributos usado para comparação! ** PIB **\nCarta : %s  PIB : %.2f \n" ,cidade01, pib01);
        printf("Carta %s : PIB : %.2f \n" ,cidade02, pib02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade01);

     }else if(pib01 < pib02){

        printf("Atributos usado para comparação! ** PIB **\nCarta : %s PIB : %.2f " ,cidade01, pib01);
        printf("Carta %s : PIB : %.2f \n" ,cidade02, pib02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade02);

    }else{

        printf("Atributos usado para comparação! ** PIB **\nCarta : %s PIB : %.2f " ,cidade01, pib01);
        printf("Carta %s : PIB : %.2f \n" ,cidade02, pib02);
        printf("Empate! as cartas tem o mesmo  PIB");
    }
    break;

    case 4:

     printf("Resultados da comparação!\n");

     if(turistico01 >turistico02){ 
          
        printf("Atributos usado para comparação! **Pontos Turísticos**\nCarta : %s  Pontos Turísticos : %d \n" ,cidade01, turistico01);
        printf("Carta %s : Pontos Turísticos : %d \n" ,cidade02, turistico02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade01);

     }else if(turistico01 < turistico02){

        printf("Atributos usado para comparação! ** Pontos Turísticos **\nCarta : %s Pontos Turísticos : %d " ,cidade01, turistico01);
        printf("Carta %s : Pontos Turísticos : %d \n" ,cidade02, turistico02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade02);

    }else{

        printf("Atributos usado para comparação! ** Pontos Turísticos **\nCarta : %s Pontos Turísticos : %d " ,cidade01, turistico01);
        printf("Carta %s : população : %d \n" ,cidade02, turistico02);
        printf("Empate! as cartas tem a mesma quantidade de Pontos Turísticos");
    }
      break;

    case 5:

     printf("Resultados da comparação!\n");

     if(densidade01 < densidade02){ 
          
        printf("Atributos usado para comparação! ** Densidade Populacional **\nCarta : %s  Densidade Populacional : %.2f \n" ,cidade01, densidade01);
        printf("Carta %s : Densidade Populacional : %.2f \n" ,cidade02, densidade02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade01);

     }else if(densidade01 > densidade02){

        printf("Atributos usado para comparação! ** Densidade Populacional **\nCarta : %s Densidade Populacional : %.2f " ,cidade01, densidade01);
        printf("Carta %s : Densidade Populacional : %.2f \n" ,cidade02, densidade02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade02);

    }else{

        printf("Atributos usado para comparação! ** Densidade Populacional **\nCarta : %s Densidade Populacional : %.2f " ,cidade01, densidade01);
        printf("Carta %s : Densidade Populacional : %.2f \n" ,cidade02, densidade02);
        printf("Empate! as cartas tem a mesma Densidade Populacional");
    }
        break;

    case 6:
    // comparações das cartas utilizando estrutura de decisão composta!
         printf("Resultados da comparação!\n");

     if(pibPerCapita01 > pibPerCapita02){ 
          
        printf("Atributos usado para comparação! ** PIB Per Capita **\nCarta : %s  PIB Per Capita : %.2f \n" ,cidade01, pibPerCapita01);
        printf("Carta %s : PIB Per Capita : %.2f \n" ,cidade02, pibPerCapita02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade01);

     }else if(pibPerCapita01 < pibPerCapita02){

        printf("Atributos usado para comparação! ** PIB Per Capita **\nCarta : %s PIB Per Capita : %.2f " ,cidade01, pibPerCapita01);
        printf("Carta %s : PIB Per Capita : %.2f \n" ,cidade02, pibPerCapita02);
        printf("** Parabéns!! a Carta %s Ganhou!**\n", cidade02);

    }else{

        printf("Atributos usado para comparação! ** PIB Per Capita **\nCarta : %s PIB Per Capita : %.2f " ,cidade01, pibPerCapita01);
        printf("Carta %s : PIB Per Capita : %.2f \n" ,cidade02, pibPerCapita02);
        printf("Empate! as cartas tem o mesmo PIB Per Capita");
    }
        break;

    default:
        printf("**Opção inválida!**");
        break;
    }


/* Antiga forma de comparação ! DEIXO NO CÓDIGO APENAS PARA ESTUDAR!
    printf("Resultados da comparação!\n");
    // comparações das cartas utilizando estrutura de decisão composta!
    if(populacao01 > populacao02){ 
        printf("Carta01 %s Ganhou\n", cidade01);
    }else{
        printf("Carta02 %s ganhou\n", cidade02);
    }

    if(area01>area02){
        printf("Carta01 %s Ganhou!\n", cidade01);
    }else{
        printf("Carta02 %s ganhou!\n", cidade02);
    }

    if (pib01 > pib02){
        printf("Carta01 %s Ganhou!\n", cidade01);
    }else{
        printf("Carta02 %s ganhou!\n", cidade02);
    }

    if(turistico01 > turistico02){
        printf("Carta01 %s Ganhou!\n", cidade01);
    }else{
        printf("Carta02 %s Ganhou!\n", cidade02);
    }

    if(densidade01< densidade02){
        printf("Carta01 %s Ganhou!\n", cidade01);
    }else{
        printf("Carta02 %s Ganhou!\n",cidade02);
    }
    if(pibPerCapita01 > pibPerCapita02){
        printf("Carta01 %s Ganhou!\n", cidade01);
    }else {
        printf("Carta02 %s Ganhou!\n", cidade02);
    }
    
    */
    


    return 0;
}