/**
 Implemente um algoritimo que traga o maior divisor de uma fração usando um struct;
*/
#include <stdio.h>

typedef struct fraction {
    int numerador;
    int denominador;
};


int maior_divisor(int vl1, int vl2){
    int temp;
     
    while(vl1 > 0){
        if(vl1 < vl2){
            temp = vl1;
            vl1 = vl2;
            vl2 = temp;
        }
        vl1 = vl1 - vl2;
    }

    return vl2;
}

main(){
    struct fraction fracao;
    while(scanf("%d %d", &fracao.numerador, &fracao.denominador) != EOF){
        if(fracao.numerador > 0 && fracao.denominador > 0){
         printf("%d %d %d \n", fracao.numerador, fracao.denominador, maior_divisor(fracao.numerador, fracao.denominador));
        }
    }
}