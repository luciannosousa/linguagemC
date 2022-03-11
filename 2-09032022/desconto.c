#include<stdio.h>
int main(){
float preco, taxa, desconto, preco_final;
printf("Digite o preço do produto: ");
scanf("%d" ,&preco);
printf("Digite a taxa de desconto: ");
scanf("%d" ,&taxa);
/*O vendedor vai entrar com o valor de taxa e nos vamos dividir esse valor por 100 
para ter o percentual. Sendo assim, qunado o vendedor digitar 5, o programa irá 
calcular 5/100 obtendo 0,05 */
taxa=taxa/100;
desconto= preco * taxa;
preco_final=preco-desconto;
printf("O valor do densconto eh: %f e o valor final é %f",desconto, preco_final);

return 0;
}