// programa  para exibir salario e cargo de acordo com a opção do usuario
#include <stdio.h>
int main()
{
    int opcao = 0;

    // comando para limpar atela
    system("clear"); // clear screen - limpar tela.
    printf("##############################################");
printf("\n#\t programa para exibir salario\t\t\t#\n");
printf("###############################################\n");
printf("\nescolha um dos cargos abaixo digitando o numero\n");
printf("\t1-Diretor\n");
printf("\t2-Gerente\n");
printf("\t3-Analista\n");
printf("\t4-Assistente\n");
printf("\t5-Auxiliar\n");
printf("----------------------------------------------\n");
scanf("%d",&opcao);
switch(opcao){

    case 1:
printf("o salario do diretor e R$ 15.000.00");
break;

  case 2:
printf("o salario do gerente e R$ 12.000.00");
break;

case 3:
printf("o salario do analista e R$ 8.000.00");
break;

case 4:
printf("o salario do assistente e R$ .5000.00");
break;

case 5:
printf("o salario do auxiliar e R$ .3000.00");
break;
printf("nao a salario para esse cargo\n");
break;

}

return 0;

}