#include<stdio.h>
int main(){
int distancia, tempo, resultado;
printf("entre com a distancia percorrida:");
scanf("%d" ,&distancia);
printf("entre com o trmpo gasto: ");
scanf("%d" ,&tempo);
resultado= distancia /tempo;
printf("\nA velocidade media e %d\n",resultado );
return 0;
}