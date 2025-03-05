#include <stdio.h>

    int main(){

        int numero = 1, i = 1, j, k;

        do {printf("Movimento da Rainha: \n Esquerda \n");
            i++;} 
        while (i <= 8);

        for (int i = 0; i < 5; i++)
        {printf("Movimento do Bispo: \n Cima, Direita \n");}
        
        while (numero <= 5)
        { printf("Movimento da Torre: \n Direita \n");
         numero++;}

         while (j <= 2) j++;
         { for (k = 1; k <= 2; k++)
             printf("Movimento do Cavalo: \n Baixo \n");}
             
         printf("Movimento do Cavalo: \n Esquerda \n");


        return 0;
    }