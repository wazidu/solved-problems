#include<bits/stdc++.h>
using namespace std;
long long int a[200000000];
int main()
{
    long long int i,j,k,l,m,w,t,c=0,d=0,sum=0;

    cin>>t;

    while(t--)
    {
        cin>>m>>w;

        for(i=0;i<m;i++)
        {
            cin>>a[i];


        }
        sort(a,a+m);

        for(i=0, sum=0;i<m;i++)
        {
            if((sum=sum+a[i])<=w)
                c++;
            else
                break;
        }

        cout<<c<<endl;
        c=0;
    }
    return 0;
}
