#include <stdio.h>

int main(){
	float n1, n2, n3, n4, total;
	
	printf("Digite as 4 numeros para calcular o seu produto \n");

	scanf("%f", &n1);
	scanf("%f", &n2);
	scanf("%f", &n3);
	scanf("%f", &n4);
	
	total = n1*n2*n3*n4;
	
	printf("Sua produto e %.2f", total);
	

}
