/*- Elabore um programa que leia um vetor de 30 números inteiros. Depois imprima na tela o maior número
que foi armazenado nesse vetor e a sua posição no vetor.*/
#include<stdio.h>
main()
{
	int i,x[5],maior=0,pos=0;
	
	for(i=0; i<5; i++)
	{
		printf("Digite um Valor : \n");
		scanf("%d",&x[i]);
	}
	for(i=0; i<5; i++)
	{
		if(x[i]>maior)
		{
			maior=x[i];
			pos=i;
		}
		else
		{
			maior=maior;
			pos=pos;
		}
	}
	printf("Maior : %d , Posicao : %d",maior,pos);
}
