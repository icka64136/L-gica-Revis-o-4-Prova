/*- Elabore um programa que leia uma matriz 4x4 de números inteiros e verifique quantos números na matriz
são impares.*/
#include<stdio.h>
main()
{
	int j,i,x[2][2],qt=0;
	
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2; j++)
		{
			printf("Digite um Valor %d , %d: \n",i,j);
			scanf("%d",&x[i][j]);
		
		}
	}
		for(i=0; i<2; i++)
		{
			for(j=0; j<2; j++)
			{
				if(x[i][j]%2==1)
				{
					qt++;
				}
				else
				{
					qt=qt;
				}
		
			}
		}
printf("Numeros Impares : %d", qt);
}
