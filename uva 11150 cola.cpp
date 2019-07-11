# include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,n1,mod,sum,val;
    while(cin>>n)
    {
        n1=n;
       sum = 0;
        while(n1>=3)
        {
          mod = n1%3;
          val = n1/3;
          sum+=val;
          n1 = val+mod;
        }
        if(n1==2)
        printf("%d\n",n+sum+1);
        else
         printf("%d\n",n+sum);

    }
    return 0;
}

