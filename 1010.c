#include <stdio.h>
int main()
{
	float pro1,pro2,total; 
	int cod1,cod2,uni1,uni2;
	scanf("%d%d%f",&cod1,&uni1,&pro1);
	scanf("%d%d%f",&cod2,&uni2,&pro2);
	total = pro1*uni1+pro2*uni2;
	printf("VALOR A PAGAR: R$ %.2f\n",total);
	return 0;
}
