#include <stdio.h> // biblioteca standard de input/output
#include<stdlib.h>
#include<math.h>
int main()
{

int n1, n2, soma, subtrair, dividir, multiplicar;


printf("o aplicativo efetuara as quatros operacoes matematicas.\n");
printf("digite o primeiro numero\n");
scanf("%d",&n1);
printf("digite o segundo numero\n");
scanf("%d",&n2);
soma= n1+n2;
subtrair=n1-n2;
dividir=n1*n2;
multiplicar=n1/n2;

printf("o resultado da soma eh %d \n:", soma);
printf("o resultado da subtracao e %d\n",subtrair);
printf("o resultado da divisao e %d",dividir);
printf("o resultado da multiplicacao e %d", multiplicar);

// subtrair=n1-n2;
// dividir=n1*n2;
// multiplicar=n1/n2;

return 0;

}