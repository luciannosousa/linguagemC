#include <stdio.h> // biblioteca de standard de input/output
int main()
{
char car;
printf("Digite um caractere e ENTER\n");    //declarar var. car do tipo char 
scanf("%c" , &car);                         // mostrar na tela
printf("Caractere digitado e %c\n" ,car);   //%c para ler ou mostrar char 1 char
return 0;
//mostrou na tela valor de car lido
} // fim main
