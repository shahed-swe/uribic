#include <stdio.h>
int main()
{
	double a, b, c, pi,tring,circ,trapiz,sqare,rect;
	pi = 3.14159;
	scanf("%lf%lf%lf",&a,&b,&c);
	tring = .5 * a * c;
	circ = pi*c*c;
	trapiz = .5*(a+b)*c;
	sqare = b*b;
	rect = a*b;
	printf("TRIANGULO: %.3lf\n",tring);
	printf("CIRCULO: %.3lf\n",circ);
	printf("TRAPEZIO: %.3lf\n",trapiz);
	printf("QUADRADO: %.3lf\n",sqare);
	printf("RETANGULO: %.3lf\n",rect);
	return 0;
}
