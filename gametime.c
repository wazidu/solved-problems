#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d  %d",&a, &b);

    if(b<a || a==b)
    {
        printf("O JOGO DUROU %d HORA(S)\n",(b+24-a));
    }
    else
        printf("O JOGO DUROU %d HORA(S)\n",(b-a));

    return 0;

}
