#include <stdio.h>

int main(){
    int opcao;
    unsigned int Est2, cod2, city2, pop2,turis2;
    float area2, pib2, pibper2, dens2;
    unsigned int Est, cod, city, pop, turis;
    float area, pib, pibper, dens;
 

    //introdução//
    printf("Jogo Super Trunfo\n");
    printf("1. Iniciar o jogo\n");
    printf("2. Ver as regras:\n");
    printf("3. Sair do jogo\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao);

    switch (opcao) {
     case 1:
     //dados1//
       printf("Digite o nome da cidade:\n");
       scanf("%s", &city);
       printf("Digite o Estado:\n");
       scanf("%s", &Est);
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

     //pib percapta e densidade populacional//
       dens = pop / area;
       pibper = pib/pop;
       printf("A densidade populacional é: %2.f\n", dens);
       printf("O PIB per capita é de: %2.f\n", pibper);

     //dados2//
 
       printf("###Agora os dados do segundo jogador:###\n");
       printf("Digite o nome da cidade:\n");
       scanf("%s", &city2);
       printf("Digite o Estado:\n");
       scanf("%s", &Est2);
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

       //pib percapta e densidade populacional//
       dens2 = pop2 / area2;
       pibper2 = pib2 / pop2;
       printf("A densidade populacional é: %2.f\n", dens2);
       printf("O PIB per capita é de: %2.f\n", pibper2);

       //Resultado do jogo//
 
       if (pop > pop2){
          printf("Jogador 1 ganhou\n");
       } else if (area > area2){
          printf("Jogador 1 ganhou\n");
       } else if (pib > pib2){
          printf("Jogador 1 ganhou\n");
       } else if (turis > turis2){
          printf("Jogador 1 ganhou\n");
       } else {
          printf("Jogador 2 ganhou\n");
       }
      break;

    case 2:
      printf("Regras.....\n");
      break;

    case 3:
      printf("Saindo....\n");
      break;
    default:
      printf("opcção invalida\n");
    }

 return 0

}
