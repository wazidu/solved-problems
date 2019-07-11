#include<bits/stdc++.h>
using namespace std;
long long int a[2000000];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int n,i,j,k;
    while(cin>>n)
    {
        if(n==0)
            return 0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        for(i=0;i<n;i++)
        {
            cout<<a[i];
            if(i<(n-1))
                cout<<" ";
        }
        cout<<endl;
    }



    return 0;

}
