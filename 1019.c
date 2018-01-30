#include <stdio.h>
int main()
{
	int a,b,c,n;
	scanf("%d",&n);
	a = n/3600;
	b = n%3600/60;
	c = n%60;
	printf("%d:%d:%d\n",a,b,c);
	return 0;
}
