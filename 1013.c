#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c, ment;
	scanf("%d%d%d",&a,&b,&c);
	ment = (a + b + abs(a - b))/2;
	ment = (ment + c + abs(ment - c))/2;
	printf("%d eh o maior\n",ment);
	return 0;
}
