#include<stdio.h>
#include<stdlib.h>//programa que sume
int resultado;
int suma(int n1, int n2)
{
	int res;
	res=n1+n2;
	resultado=n1+n2;
	return res;
}
int main()
{
	int res;
	res=suma(2,3);
	printf("EL RESULTADO DE LA SUMA ES:\n");
	printf("%d\n",resultado);
	system("PAUSE");
}
