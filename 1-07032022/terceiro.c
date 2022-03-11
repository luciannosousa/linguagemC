//programa p/ calcular area, dado raio
#include <stdio.h> // biblioteca standard de input/output
#define PI 3.14159 // constante PI
// a seguir função main
int main()
{
float raio, area; //duas vars. declaradas 
// mostrar na tela uma mensagem com printf
printf("digite o valor do raio do circulo, e ENTER\n");
// le do teclado com scanf; note o & em & raio
scanf("%f", &raio); // exemplos: 1,23 12.3e-1
// a seguir mostrar na tela o valor do raio lido
// usando 12 colunas, e 2 decimais arredondados
// por ex. 1.576 e, arredondado para 1.58 so' na tela 
printf("raio digitado e' %12.2f\n", raio);
area=PI *raio* raio;
printf("Area do circulo com raio %f e a area e %f \n",raio,area);
return 0;
}//fim main