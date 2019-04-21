#include <stdio.h> 
#include <stdlib.h>

int main (){
	float numero1, numero2, soma, diferenca, produto, divisao;
	int opcao;
	
	printf("Escolha a opcaoo:  \n");
	printf("1 - Soma de 2 numeros.   \n");
	printf("2 - Diferenca entre 2 numeros. \n");
	printf("3 - Produto entre 2 numeros. \n");
	printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero). \n");
	printf("\n");
	
	printf("Digite a opcao: \n");
	scanf("%d", &opcao);
	if(opcao >0 && opcao <=4){
		
	} else{
		printf("Opcao nao existe \n");
		system("pause");
		return 0;
	}
	
	printf("Digite o primeiro numero: \n");
	scanf("%f", &numero1); 
	
	printf("Digite o segundo numero: \n");
	scanf("%f", &numero2);
	
	
	if(opcao == 1){	
		soma = numero1 + numero2;
		printf("A soma da operacao e : %.2f \n", soma);
	} else if(opcao == 2){
		if (numero1 > numero2){
			   	diferenca = numero1 - numero2;
				printf(" A diferenca e: %.2f \n", diferenca);
			} else {
				diferenca = numero2 - numero1;
				printf(" A diferenca e: %.2f \n", diferenca);
			}
	} if (opcao == 3){
		produto = numero1 * numero2;
		printf("Produto e: %.2f \n", produto);
	}else if(opcao == 4){
		divisao = numero1 / numero2;
		if(numero2 == 0){
			printf("O denominador nao pode ser zero \n");
		}else{
		printf("A divisao e: %.2f \n", divisao);
		}
	}	   	
	system("pause");
	return 0;	
}