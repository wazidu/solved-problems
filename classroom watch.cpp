#include<bits/stdc++.h>
using namespace std;
long long int a[10000000];
int main()
{
    long long int i,j=0,k,l,m,n,s=0,sum=0;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        s=0;
        k=i;
        while(k!=0)
        {
            s=s+k%10;
            k=k/10;
        }
        if((i+s)==n)
        {
            a[j]=i;
            j++;
        }
    }
    if(j==0)
        cout<<"0"<<endl;
    else
    {
        sort(a,a+j);
        cout<<j<<endl;

        for(i=0;i<j;i++)
            cout<<a[i]<<endl;
    }
    //main();
}
