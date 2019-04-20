#include <stdio.h> 
#include <stdlib.h>


int main (){
	//Exercicio 2:  dividir a importancia de R$ 780.000,00 em três ganhadores com porcentagens diferentes
	float premiacao = 7800000.00;
	float primeiro, segundo, terceiro;
	
	printf("O valor do premio e de R$ %.2f mil que sera dividido em tres ganhadores \n", premiacao);
	
	printf("\n");
	printf("O primeiro ganhador ficara com 46 porcento do montante, ficando com: \n");
	primeiro = premiacao * 0.46;
	printf("R$ %.2f  \n", primeiro);
	
	printf("\n");
	printf("O segundo ganhador ficara com 32 porcento do montante, ficando com: \n");
	segundo = premiacao * 0.32;
	printf("R$ %.2f \n", segundo);
	
	printf("\n");
	printf("O terceiro ganhador ficara com o restante do montante, ficando com: \n");
	terceiro = premiacao - primeiro - segundo;
	printf("R$ %.2f \n", terceiro);
	
	system("pause");
	return 0;
}