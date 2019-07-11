#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);

    long long int i,j,k,l,m,a[3],c,d,e;

    while(cin>>a[0]>>a[1]>>a[2])
    {
        if(a[0]==0 && a[1]==0 && a[2]==0)
            return 0;

        sort(a,a+3);

        if((a[0]*a[0]+a[1]*a[1])==(a[2]*a[2]))
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;

    }
    return 0;
}
