/**

Crivo de erastosthenes, é um algoritmo para encontrar os valores dos números primos até um valor limite:

1º passo: escreva uma tabela de 1 até o valor limite;
2º passo: Sabemos, pelas regras de divisibilidade, que qualquer número par é divisível por 2, então não risque o nº 2 que é primo e risque na sua tabela todos os múltiplos de 2 (4,6,8,…);
3º passo: Lembrando que qualquer nº é divisível por 3 se a soma de seus algarismos também o for, portanto, sem riscar o nº 3 que é primo, na sua tabela, risque portanto todos os nºs múltiplos de 3;
4º passo: Sabendo que todo nº é divisível por 5 se terminar em 0 ou 5, sem riscar o nº 5 que é primo, risque na sua tabela todos os múltiplos de 5;
5º passo: Agora, sem riscar o nº7 que é primo, risque todos os nºs que fazem parte da tabuada do 7 na sua tabela. Lembre-se que a tabuada é infinita, ou seja, não termina no 7×10=70, mas continua, infinitamente: 7×11=77; 7×12=84, …;
6º passo: Não se esqueça que um número primo, por definição, só é divisível por ele mesmo e pelo número 1 e portanto tem dois e somente dois divisores naturais.
7º passo: Por fim, escreva os números que você não riscou na sua tabela e serão estes, então, os números primos naturais de 0 até 100.

*/


#define N 100
#include <stdio.h>

main(){
    int i,j, a[N+1];
    for(a[1]=0, i =2; i <= N; i++){
        a[i] = 1;
    }
    for(i=2; i <= N/2; i++){
        for(j = 2; j <= N/i; j++){
            a[i*j] = 0;
            printf("i: %d  j: %d -> %d \n", i,j, i*j);
        }
    }
    for(i = 1; i<=N; i++){
        if(a[i]) printf("%4d",i);
    }
    printf("\n");
}