/*programa para calcular a situação 
do aluno. neste programa teremos
as seguintes saidas ;
Aprovado,quando nota maior ou igual a 7
Reprovado, quando nota menor ou igual a 4
recuperação, quando nota entre maior que 4
e menor que 7
*/
#include <stdio.h>
#define MEDAPROV 7.0
#define MEDREPOV 4.0

int main(){
float na;
printf("digite a nota etecle ENTER\n");
scanf("%f",&na);

if(na>= MEDAPROV){
printf("o aluno esta aprovado");
}
else if(na<= MEDREPOV){
printf("o aluno está reprovado");
}
else{
printf("o aluno está em recuperação");
}
return 0;
}


