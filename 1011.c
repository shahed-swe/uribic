#include <stdio.h>
int main()
{
	int r;
	float pi, vol;
	pi = 3.14159;
	scanf("%d",&r);
	vol = (4/3.0*pi*r*r*r);
	printf("VOLUME = %.3f\n",vol);
	return 0;
}
