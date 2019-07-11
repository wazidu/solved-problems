#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{

    long long int i,t,n,j,k,l,m,a[100],sum=0;

    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n;
i=0;
        while(k!=0)
        {
            a[i]=k%10;

            k=k/10;
            i++;
        }

        for(j=0;j<i;j++)
        {
            sum=sum+pow(a[i],i);
        }
cout<<sum<<endl<<n<<endl;
        if(sum==n)
        {
            cout<<"Armstrong"<<endl;
        }
        else
            cout<<"Not Armstrong"<<endl;

        sum=0;i=0;
    }
    return 0;

}
