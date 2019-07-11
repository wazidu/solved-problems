#include <stdio.h>
int main()
{
    int i,j,x,y,c;
    c=1;
    scanf("%i %i",&x,&y);

    for(i=1;i<=y;i++)
    {
        for(j=1;j<=x;j++)
            printf("%i ",c);
            printf("\n");
        c++;
    }
    c++;
    return 0;
}
