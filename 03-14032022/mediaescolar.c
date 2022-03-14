
/* programa para calcular o resuldado 
da situação do alUno se esta aprovado ou reprovado.
vamos levar em consideração a nota do aluno e compara-la 
a media de aprovação da escola.
caso a nota do aluno seja maior ou igual A 7, Entao o aluno 
eatara aprovado, caso o contrario estara reprovado */
/* Incluir o cabeçalho de entrada e saidade dados padrão: 
std(standard padrao) io
(in i> input/ output) */

#include <stdio.h>
//Definir uma constante.sempre em letras maiusculas
#define MEDIAESCOLA 7.0
int main(){

// declaração da variavel nota aluno com o tipo de float

float notadoaluno;

printf("Digite a nota do aluno e tecle Enter\n");
scanf("%f",&notadoaluno);
// desvio de fluxo con if .. else
if(notadoaluno >= MEDIAESCOLA){
    printf("O aluno está aprovado");
}
else{
    printf("O aluno esta reprovado");
}
return 0;
}
 