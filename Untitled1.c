#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Programa em C que lê o preço da gasolina e do etanol e compara qual dos dois compensa mais.

int Calculo(float vGas,float vEta);

int main()
{
	
	printf("---------- EcoCAR ---------- \n");
	
	float precoGasolina, precoEtanol;
	
	printf("Qual o valor da gasolina? \n");
	scanf("%f", &precoGasolina);
	
	printf("Qual o valor do Etanol? \n");
	scanf("%f", &precoEtanol);
	
	int resultado = Calculo(precoGasolina, precoEtanol);
	
	if(resultado == 0)
	{
		printf("Compensa abastecer com Gasolina. \n");
	}
	else if(resultado == 1)
	{
		printf("Compensa abastecer com Etanol. \n");
	}
	else
	{
		printf("São o mesmo valor, então não há diferença. \n");
	}
	
	system("pause");
	
	
	return 0;
}

int Calculo(float vGas,float vEta)
{
	//Preço Gasolina * 0.7 = Preço máximo do alcool
	
	if((vGas * 0.70) < vEta)
	{
		// Compensa mais abastecer com Gasolina
		
		return 0;
	}
	else if((vGas * 0.70) > vEta)
	{
		//Compensa mais abastecer com Etanol
		
		return 1; 
	}
	else
	{
		//Valores equivalentes
		return 2;
	}
	
	
}