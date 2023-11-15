#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, n3, fim;
	
	printf("Vamos calcular a soma de dois numeros \n");
	
	scanf("%i", &n1);
	scanf("%i", &n2);
	
	fim = n1 + n2;
	
	printf("o total da soma e : %i\n", fim );
	printf("vamos subitart um numero de, digite um numero:\n");
	scanf("%i", &n3);
	fim = fim - n3;
	
	printf("o nuemor final vai ser", fim);
	
	system("pause");
	
}
