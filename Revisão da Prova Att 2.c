/*– Elabore um programa em C que leia dois vetores de números inteiros com 6 posições cada um. Preencha
os vetores com valores digitados do teclado. Percorra os dois vetores e compare os valores das suas
respectivas casa e diga quantos valores iguais existem.
Exemplo: Comparar valor da casa 0 de um vetor com o valor da casa 0 do outro vetor, valor da casa 1 com
valor da casa 1 e assim sucessivamente.*/

#include<stdio.h>
main()
{
	int i,x[6],z[6],y=0;
	
	for(i=0; i<6; i++)
	{
		printf("Digite um Valor Vetor 1 : \n");
		scanf("%d",&x[i]);
		
	}
	for(i=0; i<6; i++)
	{
		printf("Digite um Valor Vetor 2 : \n");
		scanf("%d",&z[i]);
	}
	for(i=0; i<6; i++)
	{
		if(x[i]==z[i])
		{
			y=y+1;	
		}
		else 
		{
			y=y;
		}
	}
	printf("Numeros Iguais : %d",y);
}
