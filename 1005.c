#include <stdio.h>
int main()
{
	float a, b, avg;
	scanf("%f%f",&a,&b);
	avg = ((a*3.5)+(b*7.5))/(3.5+7.5);
	printf("MEDIA = %.5f\n",avg);
	return 0;
}
