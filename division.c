#include<stdio.h>
#include<stdlib.h>//programa que divida
int resultado;
int division(int n1, int n2)
{
	int res;
	res=n1/n2;
	resultado=n1/n2;
	return res;
}
int main()
{
	int res;
	res=division(100,5);
	printf("EL RESULTADO DE LA DIVISION ES:\n");
	printf("%d\n",resultado);
	system("PAUSE");
}
