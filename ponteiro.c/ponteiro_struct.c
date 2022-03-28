/*programa para cadrastrar cliente com
oa seguintes dados: nome,idade,email*/

#include<stdio.h>
#include<stdlib.h>

void main (){

    struct cliente {
    char nome [30];
    char email[100];
    int idade;
    };

    struct cliente novocliente, *pNovocliente;
    pNovocliente= &novocliente;
    
    printf("entra com o nome do cliente:\n");
    scanf("%s",&pnovocliente->nome);

    printf("Entre com o email do cliente\n");
    scanf("%s",&pnovocliente->email);

    printf("entre com a idade do cliente\n");
    scanf("%",&pnovocliente->idade);


    printf("o nome do cliente e %s\n",pnovocliente->nome);



    }
