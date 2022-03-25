/*
programa para calcular cpf usuario.
quando o cpf fot inserido,pegamos os 
9 primeiros digitos e passamos para o 
calculo. É utilizando um numero por vez
do cpf multiplicamos  pelo peso partindo 
de 10 e indo até 2.
Na segunda parte do calculo pegamos os 9
primeiros mais o digito encontrado
e multiplicamos pelo peso a partir de 11,
soma se os valores encontrados e dividimos por 11,
se o resto da divisão for menor que 2, então
o digito sera 0;
caso contrario pegamos o resto da divisão e 
subtraimos por 11,

*/
#include <stdio.h>

int main(){
int peso10=10;
int peso11=11;
int total=0;
int resto =0;
char cpf [11];

system ("clear");
printf("digite o seu cpf sem o digito:\n");
scanf("%s",cpf);
printf("%c",cpf[2]);

for(int i = 0; i <=10 ; i++){
    printf("%c\n",cpf[i]);
}




return 0;

}