/*Elabore um programa que possua uma matriz de dimens�es 4x4 e guarde nela n�meros inteiros.
O programa dever� mostrar a soma, a quantidade e a m�dia dos n�meros que estejam nas posi��es onde os
seus �ndices sejam iguais.*/
#include<stdio.h>
main()
{
	int j,i,x[2][2];
	float m=0,s=0,qt=0;
	
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
				if(i==j)
				{
					s=s+x[i][j];
					qt=qt+1;
					m=(s/qt);
				}
				else
				{
					s=s;
					qt=qt;
					m=m;
				}
			
			}
		}
	
	
	printf("Soma : %.0f, Quantidade : %.0f, Media : %.1f ",s,qt,m);
}
