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
    //                        Cadastro da primeira carta do SuperTrunfo

    char codigo01[15]; // Variavél do codigo da carta
    char estado01[10]; // Variavél do Estado
    char cidade01[20]; // Variavél da cidade
    int populacao01 ;  // Variavél da população
    int turistico01; // Variavél dos pontos turísticos
    float area01;  // Variavél da tamanho da cidade
    float pib01 ;  // Variavél do PIB
    float densidade; // densidade populacional
    float capital; // renda percapita

    printf("carta 01: \n");
    printf("digite o código da carta :  "); //onde vai exibir a solicitação do código da carta
    scanf("%s",codigo01); // nessa linha vai capturar o código...

    printf("digite o Estado da carta :");
    scanf("%s",estado01);

    printf("digite o nome da cidade da carta :");
    scanf("%s",cidade01);

    printf("digite a quantidade populacional:");
    scanf("%d", &populacao01);

    printf("digite a quantidade de ponto turístico da cidade: ");
    scanf("%d" , &turistico01);

    printf("digite o tamanho sa cidade em km² : ");
    scanf("%f", &area01);

    printf("digite aqui a renda do PIB :");
    scanf("%f", &pib01);

    densidade = populacao01 / area01; // calculo densidade demografica
    capital =(float)pib01 / populacao01; // calculo pib percapita


                                 //exibição final do cadastro da primeira carta
    printf("Carta cadastrada com as seguintes informações:\n" );
    printf("código :%s\n" , codigo01);
    printf("Estado :%s\n" , estado01);
    printf("cidade :%s\n" , cidade01);
    printf("população :%d\n" , populacao01);
    printf("pontos turísticos :%d\n" , turistico01);
    printf("km² :%.2fkm²\n " , area01);
    printf("PIB :%.2f bilhões de reais\n" , pib01);
    printf("Densidade populacional :%.2fhab/km²\n ", densidade);
    printf("Renda per capita:%.2f\n", capital);
  

    //                               Cadastro da 2ª carta para o supertrunfo

    char codigo02[15]; // Variavél do codigo da 2ª carta
    char estado02[10]; // Variavél do Estado
    char cidade02[20]; // Variavél da cidade
    int populacao02 ;  // Variavél da população
    int turistico02; // Variavél dos pontos turísticos
    float area02;  // Variavél da tamanho da cidade
    float pib02 ;  // Variavél do PIB
    float densidade02;// variavél da densidade demografica
    float capital02; // renda percapita


    printf("carta 02: \n");
    printf("digite o código da carta :  "); 
    scanf("%s",codigo02);

    printf("digite o Estado da carta :");
    scanf("%s",estado02);

    printf("digite o nome da cidade da carta :");
    scanf("%s",cidade02);

    printf("digite a quantidade populacional:");
    scanf("%d", &populacao02);

    printf("digite a quantidade de ponto turístico da cidade: ");
    scanf("%d" , &turistico02);

    printf("digite a o tamanho no Estado em km² : ");
    scanf("%f", &area02);

    printf("digite aqui a renda do PIB :");
    scanf("%f", &pib02);

    densidade02 = populacao02 / area02; // 
    capital02 = (float) pib02 / populacao02;
                             // aonde vai apresentar as informações aprestada da 2º carta
     printf("Carta cadastrada com as seguintes informações:\n" );
    printf("código :%s\n" , codigo02);
    printf("Estado :%s\n" , estado02);
    printf("cidade :%s\n" , cidade02);
    printf("população :%d\n" , populacao02);
    printf("pontos turísticos :%d\n" , turistico02);
    printf("km² :%.2fkm²\n", area02);
    printf("PIB :%.2f bilhões de reais\n", pib02);
    printf("Densidade populacional :%.2f\nhab/km² ", densidade02);
    printf("Renda per capita:%.2f\n reais", capital02);

    return 0;
}
