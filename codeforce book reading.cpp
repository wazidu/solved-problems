#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k=0,l,n,tsum=0,day=0,t;

    cin>>n>>t;

    for(i=0;i<n;i++)
    {
        cin>>l;
        //if(k!=1)
        //{
            tsum=tsum+86400-l;
        if(tsum>=t & k!=1)
        {
            day=i;
            k=1;
        }
        //}


    }
    cout<<day+1<<endl;
   // main();

    return 0;
}
