#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,l,m;

    cin>>n>>k;

    if(n==k || k==0)
        cout<<"0 0"<<endl;
    else
    {
        if(k>=(n/2))
        cout<<"1 "<<n-k<<endl;
        else
            cout<<"1 "<<k+1<<endl;
    }

    return 0;

}
