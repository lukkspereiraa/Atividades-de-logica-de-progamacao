#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, cociente, resto;
	
	printf("Vamos calcular o quocinete e o restos dos dois numeros que voce informar \n");
	
	scanf("%i", &n1);
	scanf("%i", &n2);
	
	cociente = n1/n2;
	
	resto = n1%n2;
	
	printf("o qociente e o resto sao respequitivamente : %d, %d ", cociente, resto);
	system("pause");
	
}
