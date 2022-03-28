/*
programa para trabalhar com funções.
vamos usar funções com retorno,
sem retorno, com argumentos(parametros),
sem argumentos,
*/

#include <stdio.h>
#include <stdlib.h>

void separadorHt(){
    printf("\n");
    for(int i=0 ;i <=50; i++){
     printf("#"); 
    }
    printf("\n");
}
void separadorlinha(){
    printf("\n");
    for(int i=0 ;i <=50; i++){
        printf("_");
    }
    printf("\n");
}
void pularlinha(int qtdvezes){
    for(int i=1 ; i<= qtdvezes; i++){
    printf("\n");
    }
}

void comparar(int v1,int v2){
    if(v1>v2){
        printf("o primeiro numero e maior que o segundo");
    }
    else if( v1==v2){
        printf("os numeros sao iguais");
    }
    else{
        printf("o segundo numero e maior que o primeiro numero");
    }
    
} 





    void main(){
        int n1,n2;
        system("clear");//limpar a tela do terminal
        //chamando a função separadorHT
    
separadorHt();
pularlinha(5);
printf("\n\t\tprograma que exibe uma mensagem\n");
pularlinha(10);
//chamando a função separadorlinha
separadorlinha();

pularlinha(2);
printf("Digite um numero:\n");
scanf("%d",&n1);
printf("digite outro numero:\n");
scanf("%d",&n2);

pularlinha(1);


comparar(n1,n2);

pularlinha(2);




    }

    