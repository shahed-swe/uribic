#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c)
	{
		if(b<c)
		{
			printf("%d\n%d\n%d\n",a,b,c);
		}
		else printf("%d\n%d\n%d\n",a,b,c);
	}
	else if(b<a && b<c)
	{
		if(a<c)
		{
			printf("%d\n%d\n%d\n",b,a,c);
		}
		else printf("%d\n%d\n%d\n",b,c,a);
	}
	else if(c<b && c<a)
	{
		if(b<a)
		{
			printf("%d\n%d\n%d\n",c,b,a);
		}
		else printf("%d\n%d\n%d\n",c,a,b);
	}
	printf("\n%d\n%d\n%d\n",a,b,c);
	return 0;
}
