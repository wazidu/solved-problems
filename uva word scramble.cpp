#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int l,i,j,b,k;
    char n[1000];
    while(gets(n))
    {
        l=strlen(n);
        b=-1;
        for(i=0; i<l; i++)
        {
            if(n[i]==' ')
                {
                for(j=i-1; j>b; j--)
                    printf("%c",n[j]);
                printf(" ");
                b=i;
            }

        }

       // for(i=l-1; i>b; i--)
           // printf("%c",n[i]);
        printf("\n");
    }
    return 0;
}
