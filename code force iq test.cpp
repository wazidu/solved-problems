#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,n,a[100],c=0,d=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];

        if(a[i]%2==0)
        {
            c++;
        }
        else
            d++;
    }
    if(c>d)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]%2!=0)
            {
                cout<<j+1<<endl;
            }
        }
    }
    else if(d>c)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]%2==0)
            {
                cout<<j+1<<endl;
            }
        }
    }

    return 0;
}
