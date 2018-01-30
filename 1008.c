#include <stdio.h>
int main()
{
	int a,b;
	float c, sal;
	scanf("%d%d",&a,&b);
	scanf("%f",&c);
	sal = b * c;
	printf("NUMBER0 = %d\n",a);
	printf("SALARY = %.2f\n",sal);
	return 0;
}
