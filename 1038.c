#include <stdio.h>
int main()
{
	int x, y;
	double value;
	scanf("%d%d",&x,&y);
	if(x == 1)
	{
		value = 4.00 * y;
	}
	else if(x == 2)
	{
		value = 4.50 * y;
	}
	else if(x == 3)
	{
		value = 5.00 * y;
	}
	else if(x == 4)
	{
		value = 2.00 * y;
	}
	else if(x == 5)
	{
		value = 1.50 * y;
	}
	printf("Total: R$ %.2lf\n", value);
	return 0;
}
