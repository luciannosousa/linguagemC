/*Programa para calcular o desconto de
um funcionario.onde o salário sendo
maior que 5000, terá um desconto de 5%.
caso contrario não haverá desconto 
*/
#include <stdio.h>
#define LIMITE 5000.00

int main(){
float salariofuncionario;
printf("digite o salario do funcionario e tecle enter\n");
scanf("%f",&salariofuncionario);
if(salariofuncionario> LIMITE){
printf("o desconto sera de %f\n",(salariofuncionario*0.05));
printf("o valor final e %f\n",salariofuncionario-(salariofuncionario*0.05));
}
else{
printf("não há desconto");
}
return 0;
}

