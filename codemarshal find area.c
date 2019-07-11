#include <stdio.h>
#include <math.h>

int main()
{
    int t,n,i;
    float j;

    scanf("%d",&t);


    for(i=1;i<=t;i++)
    {
          scanf("%d",&n);

          j=.5*(2*n*n-(0.5*(3.14158*n*n)));
 printf("%.2f\n",j);
    }


    return 0;
}
