#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,c,m1=0,c1=0,a[100],n;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>m>>c;

        if(m>c)
            m1++;
        else if(c>m)
            c1++;
    }

    if(m1>c1)
        cout<<"Mishka"<<endl;
    else if(c1>m1)
        cout<<"Chris"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;

    return 0;
}
