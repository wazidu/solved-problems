#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,sum,sum2,a[10000];

    while(cin>>m>>n && m!=0 && n!=0)
    {
        sum2=0;i=0;
        sum=n+m;
        //j=1;
        while(1)
        {
            if(sum%10!=0)
            a[i]=sum%10;
            i++; sum=sum/10;
            if (sum==0)
                break;
        }
        for(j=i-1;i>=0;j--)
            cout<<a[j];
        cout<<endl;
    }


    return 0;

}
