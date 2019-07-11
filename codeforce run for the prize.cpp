#include<bits/stdc++.h>
using namespace std;
long long int a[1000005];
int main()
{

    long long int  i,j,k,n,l,m,p=0,q=0;
 cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>a[i];

        }```````````````````````````````````````````
        sort(a,a+n);
        for(i=0; i<n; i++)
        {
            if(a[i]<=500000)
            {
                p=a[i]-1;

            }
            else
            {
                break;
            }
        }
        for(i=n-1; i>=0; i--)
        {
            if(a[i]<=500000)
            {

                break;

            }
            else
            {
                q=1000000-a[i];
            }
        }
        cout<<(max(p,q));

//main();
return 0;

    }


