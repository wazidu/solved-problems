#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long  int t,n,i,j,k,l,m,c=0,p,q,a[100000];

    cin>>n>>t;

    for(i=1;i<n;i++)
    {
        cin>>a[i];

    }
    for(i=1;i<t;)
    {
        i=i+a[i];
    }
    if(i==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
 //main();
}
