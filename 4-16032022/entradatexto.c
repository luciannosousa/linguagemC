/*
programa pede ao ususario que digite
o seu nome. ao fazer  será alocado
na variavel nome
*/
#include <stdio.h>

int main(){

char nome[30];

printf("digite o seu nome e tecle enter:\n");
scanf("%s",nome);
printf("%s\n",nome);

return 0;

}