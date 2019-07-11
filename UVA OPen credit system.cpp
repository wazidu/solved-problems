#include<bits/stdc++.h>
long long int a[10000005];
using namespace std;
int main()
{

    long long int t, i,j,k,l,m,n,c=0,d=0;

//cout<<k;
    cin>>t;
    while(t--)
    {
        long long int maxd=-300000;
        long long int max=-300000;
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
             if(i>0)
            {
               if(a[i-1]>max)
                    max=a[i-1];

               if((max-a[i])>maxd)
               maxd=max-a[i];

            }

        }

        cout<<maxd<<endl;


    }


    return 0;


}
