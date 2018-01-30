#include<stdio.h>
int main()
{
	char emp;
	double sal,sol,tol;
	scanf("%s %lf %lf",&emp,&sal,&sol);
	tol=sal+(sol*15)/100;
	printf("TOTAL = R$ %.2f\n",tol);
	return 0;
}
