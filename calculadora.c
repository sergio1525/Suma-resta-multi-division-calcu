#include<stdio.h>
#include<stdlib.h>//calculadora
int res;
int n1;
int n2;
int main()
{
	int suma(int n1,int n2);//SUMA
{
	res=(int)n1+n2;
	return res;
}
	int resta(int n1,int n2);//RESTA
{
 	res=(int)n1-n2;
	return res;
}
	int multiplicacion(int n1,int n2);//MULTIPLICACION
{
 	res=(int)n1*n2;
	return res;
}
	int division(int n1,int n2);//DIVISION
{
 	res=(int)n1/n2;
	return res;
}

{
	printf("EL PRIMER NUMERO VALE:\n");
    scanf("%d",&n1);
    printf("EL SEGUNDO NUMERO VALE:\n");
    scanf("%d",&n2);
    
   printf("LOS VALORES DE OBTENIDOS SON:\n");
   printf("EL RESULTADO DE LA SUMA ES: %d ", res);
   printf("EL RESULTADO DE LA RESTA ES: %d ", res);
   printf("EL RESULTADO DE LA MULTIPLICACION ES: %d ", res);
   printf("EL RESULTADO DE LA DIVISION ES: %d ", res);
   system("PAUSE");
}
}
    
    
