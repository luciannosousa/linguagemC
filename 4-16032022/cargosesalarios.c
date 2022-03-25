/*
programa para ler cargos e salarios de colaboradores
*/
#include <stdio.h>
#define diretor 15.000.00
#define gerente 12.000.00
#define analista 8.000.00
#define assistente 4.000.00
#define auxiliar 2.000.00
#define outros "sem salarios"

int main(){
char cargo[15];

printf("digite o nome do cargo e tecle enter\n");
scanf("%s",cargo);

if(strcmp(cargo , "diretor")==0){
    printf("o salario do diretor e R$15.000.00");
}
else if(strcmp(cargo,"gerente")==0){
    printf("o salario do gerente e R$12.000.00");
}
else if(strcmp(cargo,"analista")==0){
    printf("o salario do analista e R$8.000.00\n\n");
}
else if(strcmp(cargo,"assistente")==0){
    printf("o salario do assistente e R$ 4.000.00");
}
else if (strcmp(cargo, "auxiliar")==0){
    printf("o salario do auxiliar e R$ 2.000.00");
}
else if(cargo=="outros"){
    printf("nao a salario");
}
return 0;

}