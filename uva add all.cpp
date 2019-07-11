#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,k,n,a[100000],sum=0;

    while(scanf("%d",&n) && n!=0)
    {
        sum=0;

        for(i=0;i<n;i++)
           scanf("%d",&a[i]);
sort(a,a+n);
        for(j=n-1;j>0;j--)
        {
            for(k=j;k>=0;k--)
                sum=sum+a[k];
        }

       printf("%d\n",sum);
    }


  return 0;


}
