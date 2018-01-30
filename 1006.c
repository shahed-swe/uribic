#include <stdio.h>
int main()
{
	float a, b, c, avg;
	scanf("%f%f%f",&a,&b,&c);
	avg = ((a*2)+(b*3)+(c*5))/(2+3+5);
	printf("MEDIA = %.1f",avg);
	return 0;
}
