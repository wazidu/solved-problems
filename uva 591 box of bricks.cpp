#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j=0,k=0,a[1000],sum=0,a1;

    while(cin>>n)
    {
        if(n==0)
            return 0;
        j++;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        a1=sum/n;

        for(i=0;i<n;i++)
        {
            if(a[i]>a1)
            {
                k=k+a[i]-a1;
            }
        }

        cout<<"Set "<<"#"<<j<<endl<<"The minimum number of moves is "<<k<<"."<<endl<<endl;

        k=0;a1=0;sum=0;
    }
return 0;
}
