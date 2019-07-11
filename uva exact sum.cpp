#include<bits/stdc++.h>
//long long int i,j,k,l,a[10001],b[10001],c=0,d=0,sum=0,p,n;
using namespace std;
/*int main()
{
    while(cin>>n)
    {
        c=0; d=1000000;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>p;

        for(i=0;i<n;i++)
        {
            for(j=0;j<n ;j++)
            {
                if((a[i]+a[j])==p && i!=j)
                {
                    if(a[i]>a[j])
                        c=a[i]-a[j];
                    else
                        c=a[j]-a[i];
                    if(c<d)
                    {k=a[i];l=a[j];
                    }
                    //break;
                    d=c;
                }
            }
            //if(c==1)
                //break;
        }
        cout<<"Peter should buy books whose prices are "<<min(k,l)<<" and "<<max(k,l)<<"."<<endl;

    }

return 0;



}*/

#include<stdio.h>
int main()
{
long n,m,a[100000],d,i,j,b,c;
while(scanf("%ld",&n)==1)
{
d=2000000;
for(i=1;i<=n;i++)
scanf("%ld",&a[i]);
scanf("%ld",&m);
for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        {
        if((a[i]+a[j])==m && i!=j)
            {
            if(a[i]>a[j])
                {
                if((a[i]-a[j])<d)
                    {
                    b=a[j];
                    c=a[i];
                    d=a[i]-a[j];
                    }
                }
            else
                {
                if((a[j]-a[i])<d)
                    {
                    b=a[i];
                    c=a[j];
                    d=a[j]-a[i];
                    }
                }
            }
        }
printf("Peter should buy books whose prices are %ld and %ld.\n\n",b,c);
}
}
