#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,c=0,d=0,a[100],b[100],x,s;

    cin>>s;

    for(i=0;i<2*s;i++)
    {
        cin>>x;

        c=c+x;

    }
    cout<<c/(2*s)<<endl;

    return 0;

}
