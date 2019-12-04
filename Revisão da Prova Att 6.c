/*Utilizando Funções, elabore um programa que leia 3 valores . Crie as funções:
- somar os 3 valores
- calcular o quadrado dos números
- calcular o cubos dos números
- verificar se é par ou impar
- verificar se é positivo ou negativo.*/



soma(int x, int y, int z)
{
	printf("Soma : %d \n",x+y+z);
}
quad(int x, int y, int z)
{
	printf("Quadrado : %d = %d \n" ,x,x*x);
	printf("Quadrado : %d = %d \n",y,y*y);
	printf("Quadrado : %d = %d \n",z,z*z); 
}
cub(int x, int y, int z)
{
	printf("Cubo : %d = %d \n" ,x,x*x*x);
	printf("Cubo : %d = %d \n",y,y*y*y);
	printf("Cubo : %d = %d \n",z,z*z*z);	
}
parimpar(int x, int y, int z)
{
	int cont1,cont2,cont3;
	if(x%2==0 && y%2==0 && z%2==0)
	{
		
		printf("Par \n");
		
	}
	else
	{
		printf("impar \n");
	}
}
main()
{
	int a,b,c;
	
	printf("Digite O PRIMEIRO VALOR : \n");
	scanf("%d",&a);
	printf("Digite O SEGUNDO VALOR : \n");
	scanf("%d",&b);
	printf("Digite O TERCEIRO VALOR : \n");
	scanf("%d",&c);
	
	soma(a,b,c);
	quad(a,b,c);
	cub(a,b,c);
	parimpar(a,b,c);
}
