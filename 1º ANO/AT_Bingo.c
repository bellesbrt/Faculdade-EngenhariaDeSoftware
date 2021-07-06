#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
 
   int a, b, c, d, op, n, x, cont=1, ncartelas, cartela [10];
   inicio:

    printf("\n \t \t Escolha a opção desejada: \n 1 - Gerar Cartelas para Bingo \t 2 - Encerrar o Sistema \n");
    scanf("%d", &op);

    while (op == 1){
       system ("clear");
       printf("Digite a quantidade de cartelas desejadas:\n");
       scanf("%i", &ncartelas);

       srand (time(NULL));

       
        for(a = 0 ; a < ncartelas ; a++){

           for ( b = 0; b < 10; b++){
               n = (rand() % 99);

               for (c = 0; c <= b - 1; c++){
                   if(n == cartela[c]){
                       x = 1;
                    break;
                   }
               }
               if (x == 1){
                   x = 0;
                   b = b - 1;
               }
               else{
                   cartela[b] = n;
               }
         
        }
          for (b = 0; b < 10; b++){
            for (n = b + 1; n < 10; n++){
                if(cartela[b] > cartela[n]){
                    x = cartela[b];
                    cartela[b] = cartela[n];
                    cartela[n] = x;
                }
            }
            
          } 
    
        
        printf("%iº Cartela:", cont++);

        for(d = 0; d < 10; d++){
             printf("\t %i", cartela[d]);
         }
        printf ("\n \n");
         
        }
       
    goto inicio;

    }     
 while (op == 2){
        system ("clear");
        goto fim;  
    }

   fim: 

    printf("Obrigado por participar do Bingo!");
}
