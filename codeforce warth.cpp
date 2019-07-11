#include<bits/stdc++.h>
using namespace std;
long long int a[10000000];
int main()
{
    long long int n,i,j,k,l,m=0;
   // vector <long long int> a;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a[i];

        if(i>1)
        {
            for(j=i-1;j>0;j--)
            {
                if(j<i && j>=(i-a[i]))
                    a[i]=-1;
            }
        }

    }
              for(i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
            if(a[i]!=-1)
                m++;
        }
        cout<<m<<endl;

        main();
        return 0;
}
