#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    printf("%d\n", a);
    printf("%d nota(s) de R$ 100,00\n", a/100);
    b = (a%100);
    printf("%d nota(s) de R$ 50,00\n", b/50);
    b = (b%50);
    printf("%d nota(s) de R$ 20,00\n", b/20);
    b = (b%20);
    printf("%d nota(s) de R$ 10,00\n", b/10);
    b = (b%10);
    printf("%d nota(s) de R$ 5,00\n", b/5);
    b = (b%5);
    printf("%d nota(s) de R$ 2,00\n", b/2);
    b = (b%2);
    printf("%d nota(s) de R$ 1,00\n", b/1);
    return 0;
}
