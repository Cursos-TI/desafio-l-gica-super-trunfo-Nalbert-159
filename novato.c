#include <stdio.h>

int main(){
    //primeira carta//
    unsigned int Est, cod, city, pop, turis;
    float area, pib;
    int dp = pop / area ; 
    int perc = pib / pop;
    //Segunda//   
    unsigned int Est2, cod2, city2, pop2,turis2;
    float area2, pib2;
    int dp2 = pop2 / area2;
    int perc2 = pib2 / pop2;
    //dados1//
    printf("Digite o nome da cidade:\n");
    scanf("%s", &city);
    printf("Digite o Estado:\n");
    scanf("%s", Est);
    printf("Digite o codigo:\n");
    scanf("%i", &cod);
    printf("Digite a população:\n");
    scanf("%u", &pop);
    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Difite o Pib:\n");
    scanf("%f", &pib);
    printf("Qauntos pontos turisticos:\n");
    scanf("%u", &turis);
    printf("A densidade populacional é %u\n", &dp);
    printf("O PIB per capita é: %u\n", &perc);
    //dados2//
    printf("Digite o nome da cidade:\n");
    scanf("%s", &city2);
    printf("Digite o Estado:\n");
    scanf("%s", Est2);
    printf("Digite o codigo:\n");
    scanf("%i", &cod2);
    printf("Digite a população:\n");
    scanf("%u", &pop2);
    printf("Digite a area:\n");
    scanf("%f", &area2);
    printf("Difite o Pib:\n");
    scanf("%f", &pib2);
    printf("Qauntos pontos turisticos:\n");
    scanf("%u", &turis2);
    printf("A densidade populacional é %u\n", &dp2);
    printf("O PIB per capita é: %u\n", &perc2);
    //escolha1//
    if (pop, turis, area, pib > pop2, turis2, area2, pib2){
        printf("Jogador1 ganhou!\n");
    } else{
        printf("Jogador2 Ganhou");
    }

}