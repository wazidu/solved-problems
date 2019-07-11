#include<bits/stdc++.h>
using namespace std;
long long int a[100000],b,c[100000],d[100000];
int main()
{
    long long int n,i,j,k,l;
cin>>n;



    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
cout<<"1"<<endl;
 for(j=0;j<n-1;j++)
    {
        cin>>b;
    }
    cout<<"2"<<endl;
     for(j=0,k=0;j<n-2;j++)
    {
        cin>>c[j];
        int p=0;
        for(i=0;i<n;i++)
        {
            if(c[j]==a[i])
            {
                p=-1;

            }
        }
        if(p==0)
        {
            cout<<c[j]<<endl;
            d[k]=c[j];
            k++;
        }
    }
cout<<"3"<<endl;
//sort(d,d+k);
for(i=0;i<k;i++)
    cout<<d[i]<<endl;

   // main();

}
