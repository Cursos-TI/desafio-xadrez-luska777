#include <stdio.h>

    int main(){

        int numero = 1, i = 1;

        do {printf("Movimento da Rainha: \n Esquerda \n");
            i++;} 
        while (i <= 8);

        for (int i = 0; i < 5; i++)
        {printf("Movimento da peça: \n Cima, Direita \n");}
        
        while (numero <= 5)
        { printf("Movimento da Torre: \n Direita \n");
         numero++;}

            

        return 0;
    }