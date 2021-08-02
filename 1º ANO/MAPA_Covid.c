#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

    FILE *arqp;
    int idade, sexo, op, op2, cont=0;
    char cpf[11], nome[50];

    inicio:

   setlocale(LC_ALL,"Portuguese"); 

   printf("Escolha a opção desejada: \n 1 - Cadastra-se \n 2 - Sair \n");
   scanf("%d", &op);

   while (op == 1){
      
    printf("\n -------------- DADOS CADASTRAIS -------------- \n");

    printf("Digite o seu CPF: \n");
    scanf(" \n ", &cpf);
    fflush(stdin);

    printf("Digite seu Nome Completo: \n");
    scanf(" %f \n", &nome);
    fflush(stdin);

    printf("Digite seu Sexo: \n");
    scanf("%f \n",&sexo);
    fflush(stdin);
  
    printf("Digite sua Idade: \n ");
    scanf(" \n", &idade);
    fflush(stdin);

    printf("\n DADOS CADASTRADOS COM SUCESSO! \n");
    

    printf("\n -------------- TRIAGEM -------------- \n");

    printf("Responda SIM(1) ou NÃO(2) para as perguntas a seguir, para que ao final do cadastro seja informado para qual ala você deve se dirigir\n"); 
    
    printf("Está com febre? \n");
    scanf("%d", &op2);
    switch(op2){
      case 1:
        cont = cont + 5;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
    }
   
    printf("Está com dor de cabeça?\n");
    scanf("%d",&op2);
    switch (op2){
      case 1:
        cont = cont +1;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
      }

    printf("Está com secreção nasal ou espirros?\n");
    scanf("%d",&op2);
    switch (op2){
      case 1:
        cont = cont +1;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
      }
      
    printf("Está com dor/irritação de garganta?\n");
    scanf("%d", &op2);
    switch (op2){
      case 1:
        cont = cont +1;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
      }
    

    printf("Está com tosse seca?\n");
    scanf("%d",&op2);
    switch(op2){
      case 1:
        cont = cont + 3;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
    }
  
    printf("Está com dificuldade respiratória?\n");
    scanf("%d",&op2);
    switch(op2){
      case 1:
        cont = cont + 10;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
    }

    printf("Está com dores no corpo?\n");
    scanf("%d",&op2);
    switch(op2){
      case 1:
        cont = cont + 1;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
    }

    printf("Está com diarréia?\n");
    scanf("%d",&op2);
    switch(op2){
      case 1:
        cont = cont + 1;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
    }

    printf("Esteve em contato, nos últimos 14 dias, com um caso diagnosticado com COVID-19? \n");
    scanf("%d",&op2);
    switch(op2){
      case 1:
        cont = cont + 10;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
    }

    printf("Esteve em locais com grande aglomeração atualmente? \n");
    scanf("%d",&op2);
    switch(op2){
      case 1:
        cont = cont + 3;
        break;
      case 2:
        cont = cont + 0;
        break;
      default:
        printf("Resposta Inválida por favor digitar novamente!");
        break;
    }

    system("clear");

    if((cont > 0 && cont <= 9)){
      printf("A contagem de seus pontos é %d, portanto está com BAIXO RISCO para COVID-19, por favor dirija-se ao setor VERDE, Obrigado!\n", cont); 
    }
    else if ((cont => 10 && cont <= 19)){
        printf("A contagem de seus pontos é %d, portanto está com MÉDIO RISCO para COVID-19, por favor dirija-se ao setor AMARELO, Obrigado!\n", cont);
    }
    else if ((cont > 20)){
        printf("A contagem de seus pontos é %d, portanto está com ALTO RISCO para COVID-19, por favor dirija-se ao setor VERMELHO, Obrigado!\n", cont);
    }

    arqp = fopen("pacientes.txt", "p");
    fprintf("-------------- PACIENTE -------------- \n", arqp);
    fprintf(arqp, "CPF: \n", cpf);
    fprintf(arqp, "NOME: %f \n", nome);
    fprintf(arqp, "IDADE: %f \n", idade);
    fprintf(arqp,"SEXO: %f \n", sexo); 
    fprintf(arqp,"RESULTADO: %d pontos \n", cont);  
    fclose(arqp);
    system("clear");
    goto inicio;
  
  }
  while (op == 2){
    system("clear");
    goto fim;
  }
  fim:
    printf("Programa Finalizado!");

  return (0);
}