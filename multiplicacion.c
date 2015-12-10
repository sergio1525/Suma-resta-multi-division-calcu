#include<stdio.h>
#include<stdlib.h>//programa que multiplique
int resultado;
int multiplicacion(int n1, int n2)
{
	int res;
	res=n1*n2;
	resultado=n1*n2;
	return res;
}
int main()
{
	int res;
	res=multiplicacion(7,5);
	printf("EL RESULTADO DE LA MULTIPLICACION ES:\n");
	printf("%d\n",resultado);
	system("PAUSE");
}
