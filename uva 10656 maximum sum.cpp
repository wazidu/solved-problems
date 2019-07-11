#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,l,m,c=0,d=0,a[1000];

    while(cin>>n)
    {
        if(n==0)
            return 0;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

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
