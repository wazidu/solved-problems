#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,j,k=0,l,m,p=0,q=0,a[100000],b[100000];

    while(1)
    {
        p=0;q=0;
        k++;
        cin>>n;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            for(j=i;j>=0;j--)
        {
            b[p]=a[i]+a[j];
            if(p>0)
            {
                for(l=0;l<p;l++)
                    if(b[p]==b[l])
                {

                    q=1;
                  //  break;
                }

            }
        }
        if(q==1)
        cout<<"Case #"<<k<<" It is not a B2-Sequence."<<endl<<endl;
        else
        cout<<"Case #"<<k<<" It is a B2-Sequence."<<endl<<endl;
    }
    return 0;
}
