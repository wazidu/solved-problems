#include<bits/stdc++.h>
using namespace std;
//long long int a[100000];
int main()
{
    long long int n,i,j=0,k,l,c=0,max1=-1;

    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>k;

        if(i==0 )
            c++;
        else
        {
            if(l<=k)
            {
                c++;
                //cout<<c<<endl;
            }
            else
            {
              if(c>max1)
                max1=c;

                c=1;
               // j++;
            }
        }
        l=k;
    }
if(c>max1)
    max1=c;
        cout<<max1<<endl;

    }


