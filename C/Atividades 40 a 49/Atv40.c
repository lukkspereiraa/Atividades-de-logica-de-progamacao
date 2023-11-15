#include <stdio.h>

int main()
{
   char nome[80];
   int quantidade;
   float valor, total, totalAhPagar, desconto;
   
   printf("Digite o nome do produto \n");
   scanf("%s", nome);
   
	printf("Digite a quantidade \n");
   scanf("%i", &quantidade);
   
	printf("Digite o valor do produto \n");
   scanf("%f", &valor);
   
   total = quantidade * valor;
   
   if(quantidade <= 5){
      desconto = 2.0/100 ;
   }else if(quantidade > 5 && quantidade<= 10){
       desconto = 3.0/100;
   }else {
      desconto = 5.0/100;
   }
   
   totalAhPagar = total - desconto;
   
   printf("o valor que voce vai pagar sobre o produto %s tem o total de %f, e %f de desconto", nome, totalAhPagar, desconto);
   
   

    return 0;
}
