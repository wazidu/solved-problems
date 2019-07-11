#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m , i, c=0;
    while(scanf("%d", &n)!=EOF)
    {
        for(i=0; i<5; i++)
        {
            scanf("%d", &m);
            if(m==n)
                c++;
        }
        printf("%d\n", c);
    }
    return 0;
}

