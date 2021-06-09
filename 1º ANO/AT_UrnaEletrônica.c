#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int op, cont111=0, cont222=0, cont333=0, cont444=0, cont11=0, cont22=0, cont44=0;
    inicio: 

    setlocale(LC_ALL,"Portuguese");
    
    printf("Escolha a opção desejada: \n 1 - Votar \n 2 - Apuração dos votos \n 3 - Sair \n");
    scanf("%d", &op);
    
    while (op == 1){

        system("clear");
        printf("Digite a número referente ao Vereador de sua escolha: \n 111 - João do Frete \n 222 - Maria da Pamonha \n 333 - Zé da Farmacia \n 444 - Voto Nulo \n");
        fflush(stdin);
        scanf("%d", &op);

        system("clear");
        switch (op)
        {
        case 111: 
            printf("Voto Computado! \n Você votou no Vereador Jão do Frete \n");
            cont111++;
            break;

        case 222:
            printf("Voto Computado! \n Você votou na Vereadora Maria da Pamanha \n");
            cont222++;
            break;

        case 333:
             printf("Voto Computado! \n Você votou no Vereador Zé da Farmacia \n");
            cont333++;
            break;   

        case 444: 
             printf("Voto Computado! \n Você votou Nulo \n");
            cont444++;
            break;

        default:
            printf("Opção Inválida! Tente Novamente :) \n");
            break;
        }
        system("clear");
         printf("Digite a número referente ao Prefeito desejado: \n 11 - Dr. Zureta \n 22 - Senhor Gomes \n 44 - Voto Nulo \n");
        fflush(stdin);
        scanf("%d", &op);

        system("clear");
        switch (op)
        {
        case 11: 
            printf("Voto Computado! \n Você votou no Presidente Dr. Zureta \n");
            cont11++;
            break;

        case 22:
            printf("Voto Computado! \n Você votou no Presidente Senhor Gomes \n");
            cont22++;
            break;

        case 44:
             printf("Voto Computado! \n Você votou Nulo \n");
            cont44++;
            break;  
        
        default:
             printf("Opção Inválida! Tente Novamente :) \n");
            break;
        }
       system("clear");
       goto inicio;

    }

    while (op == 2){

        system("clear");


        printf("------------------------------- \n");
        printf("Votos Apurados dos Candidatos a Vereador:\n");
        printf("Vereador João do Frete - %d \n", cont111);
        printf("Vereadora Maria da Pamanha - %d \n", cont222);
        printf("Vereador Zé da Farmacia - %d \n", cont333);
        printf("Votos Nulos - %d \n", cont444);

        printf("------------------------------- \n");
        printf("Votos Apurados dos Candidatos a Prefeito:\n");
        printf("Prefeito Dr. Zureta - %d \n", cont11);
        printf("Prefeito Senhor Gomes - %d \n", cont22);
        printf("Votos Nulos - %d \n", cont44);
        printf("------------------------------- \n");
     
     goto inicio;
        
    }

    while (op == 3){ 

     system("clear");
     goto fim;

    } 
    
    fim: 
      printf("Programa finalizado! Obrigado pela Contribuição :)");

   return 0;
}