#include <stdio.h> 
#include <stdlib.h>


int main (){
	float diaria = 30.00;
	int dias;
	float imposto = 0.08;
	float total, totalsemimposto, salario;
	
	printf("Digite a quantidade de dias trabalhados para o calculo ser efetuado: \n");
	scanf("%d", &dias);
	
	total = dias * diaria;
	totalsemimposto =  total * imposto;
	printf("\n");
	
	printf("Valor do imposto a ser retido: \n");
	printf("%.2f \n", totalsemimposto);
	salario = total - totalsemimposto;

	printf("\n");
	printf("O valor a ser pago ao funcionário sera de: \n");
	printf("R$ %.2f \n", salario);
		
	system("pause");
	return 0;
}