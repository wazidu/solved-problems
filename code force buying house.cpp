#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j=0,n,m,k,a1,f;

    cin>>n>>m>>k;

    for(i=1; i<=n; i++)
    {
        cin>>a1;

        if(a1<=k && a1>0)
        {
            f=min(f,abs(i-m)*10);


        }
  }


    cout<<f<<endl;
    return 0;



}
