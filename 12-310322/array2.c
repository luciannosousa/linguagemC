
/*
programa que realiza a soma usando array
*/

#include<stdio.h>
#include<stdlib.h>

#include "calculos.h"

void main(){
    int v[10]={1,23,52,4,0,1,2,5,8,10};
    soma(v,10);
    maiorvalor(v,10);
    menorvalor(v,10);
    ordenar(v,10);
    
}