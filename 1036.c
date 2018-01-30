#include <stdio.h>
#include <math.h>
int main()
{
	double a, b, c, d, x1, x2, r1, r2;
	scanf("%lf%lf%lf",&a,&b,&c);
	d = (b * b) - (4 * a * c);
	x1 = (-b + (sqrt(d))) / (2 * a);
	x2 = (-b - (sqrt(d))) / (2 * a);
	if (a!=0 && d > 0)
    {
	printf("R1 = %.5lf\n",x1);
	printf("R2 = %.5lf\n",x2);
    }
    else printf("Impossivel calcular\n");
	return 0;
}
