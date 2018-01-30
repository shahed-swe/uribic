#include <stdio.h>
int main()
{
    double a,b,c,d,e,media;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    media = (a * 2 + b * 3 + c * 4 + d * 1) / 10;
    printf("Media: %.1f\n", media);
    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (media >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1f\n", e);
        if (e + media / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (e + media) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}
