#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int i,j,k,l,r,x,y;

    cin>>l>>r>>x>>y>>k;

   for(i=l;i<=r;i++)
   {
       for(j=x;j<=y;j++)
       {
           if(i/j==k)
           {printf("YES\n");

           return 0;
           }
       }
   }
printf("NO\n");

return 0;

}
