#include<stdio.h>
#include<stdlib.h>//programa que reste
int resultado;
int resta(int n1, int n2)
{
	int res;
	res=n1-n2;
	resultado=n1-n2;
	return res;
}
int main()
{
	int res;
	printf("DAME LOS VALORES\n");
	res=resta(5,2);
	printf("EL RESULTADO DE LA SUMA ES:\n");
	printf("%d\n",resultado);
	system("PAUSE");
}
