#include<bits/stdc++.h>
using namespace std;

long long int t,i,j,k,l,m,n,o,p,max1=0,q,r,s,c=0,d=0,sum=0,a[10000],b[10000],g;

int gcd(int p,int q)
{
    while(p!=q)
    {
        if(p>q)
            p=p-q;
        else
            q=q-p;
    }
    return p;
}

int main()
{

    cin>>t;

    while(t--)
    {
        for(i=0;i<5 ;i++)
        {
            cin>>a[i];

            if(i>0)
            {
                for(j=i; j>=0;j--)
                {
                    p=a[i];q=a[j];
                    g=gcd(p,q);
                    if(g>max1)
                        max1=g;

                }

            }
        }

        cout<<max1<<endl;



    }







}
