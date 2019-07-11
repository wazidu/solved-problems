#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,k,max1=0,p,q;

    cin>>m>>n;

    for(i=m;i<=n;i++)
    {
        for(j=m;j<=n;j++)
        {
            k=i^j;
            if(k>max1)
                max1=k;
            //cout<<k<<" ";
        }
    }
//cout<<endl;
    cout<<max1<<endl;


}
