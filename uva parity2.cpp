#include <stdio.h>
int main()
{
    long long int a,b, i, j, lenth, num_d, parity=0;
    int binary[1000];

    while(scanf("%lld", &num_d)==1)
    {
        parity=0;
        if(num_d==0) break;
        for(i=0, lenth=1; i<100 ; i++)
        {
            binary[i]=num_d%2;
            if(binary[i]==1)
                parity+=1;
            num_d=(num_d/2);
            if(num_d==0) break;
            else lenth++;
        }
        printf("The parity of ");
        for(j=lenth-1; j>=0; j--)
        {
            printf("%d", binary[j]);
        }
        printf(" is %lld (mod 2).\n", parity);
    }
}
