#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,n,m,c=0,d=0,a[100000],max1=-1,min1=9999;

    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
 if(a[i]<=m)
    c++;
    }
    if(n==1 )
    {
        cout<<"1"<<endl;
    }
    else
    cout<<m-c<<endl;
 //main();
}
