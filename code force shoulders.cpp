#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a,b,n,c=0;

    cin>>a>>b>>n;

    for(i=1;i<=n;i++)

        c=c+a*i;




    if(b>=c)
    {
        cout<<"0"<<endl;
    }
    else
        cout<<c-b<<endl;

    return 0;
}
