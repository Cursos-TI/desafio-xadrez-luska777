#include <stdio.h>

    void movbispo (int bispo){
        if (bispo > 0){
            printf("Movimento do bispo:\n Direita, cima \n");
            movbispo(bispo - 1);
        }}

    void movtorre (int torre){
         if (torre > 0){
            printf("Movimento do torre:\n Direita \n");
            movtorre(torre - 1);
        }}
    
    void movrainha (int rainha){
        if (rainha > 0){
        printf("Movimento do rainha:\n Esquerda \n");
        movrainha(rainha - 1);
        }}


int main(){

    int j,k;

    movbispo(5);
    movtorre(5);
    movrainha(8);

 while (j <= 2) j++;
     { for (k = 1; k <= 2; k++)
     printf("Movimento do Cavalo: \n Cima \n");}
     printf("Movimento do Cavalo: \n Direita \n");

}