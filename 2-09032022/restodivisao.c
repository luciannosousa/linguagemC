#include <stdio.h> // biblioteca standard de input/output
int main()
{
int n1,n2,dividir,resto;
printf("o aplicativo efetuara o caculo da divisao e mostrara o resto da divisao\n");
printf("digite o primeiro numero;\n");
scanf("%d",&n1);
printf("digite o segundo numero\n");
scanf("%d",&n2);
dividir=n1/n2;
printf("o resultado da divisao e %d\n\n",dividir);
resto=n1%n2;
printf("o resto eh:%d\n\n",resto);
return 0;
}