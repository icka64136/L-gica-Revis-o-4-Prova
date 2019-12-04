/*Elabore um programa que leia um vetor de 50 números inteiros e mostre a soma de todos os números que
possuem índices pares.*/
#include<stdio.h>
main()
{
	int i,x[5],z[5],y=0;
	
	for(i=0; i<5; i++)
	{
		printf("Digite um Valor : \n");
		scanf("%d",&x[i]);
	}
	for(i=0; i<5; i++)
	{
		if(i%2==0)
		{
			y=y+x[i];
		}
		else 
		{
			y=y;
		}
	}
	printf("Soma dos Numeros Pares : %d",y);
}
