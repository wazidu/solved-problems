#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100000];
    long long int t,n,c=0;

    while(cin>>n)
    {
        c=0;
        if(n==0)
            return 0;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                c++;

                if(c==n)
                    cout<<"0"<<endl;
            }



            else if(a[i]!=0 )
                {
            cout<<a[i];
            if(i<n-1)
                cout<<" ";
            }
        }
        cout<<endl;

    }
    return 0;
}
