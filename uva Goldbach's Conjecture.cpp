#include<bits/stdc++.h>
using namespace std;
long long int t,i,j,k,l,m,n,a[1000001],b[1000001];
int prime(long long int n)
{
   for(i=2;i<=n;i++)
   {
       a[i]=i;
   }
   for(i=2;i*i<=n;i++)
    for(j=i+1;j<=n;j++)
   {
       if(a[j]%i==0)
        a[j]=-1;
   }
   for(i=2;a[i]!=-1;i++)
   {
       if((a[i]+n-a[i])==n)
       {
           k=1;
           cout<<n<<" = "<<a[i]<<" + "<<n-a[i]<<endl;
       }

   }
   if(k==0)
    cout<<"Goldbach's conjecture is wrong."<<endl;
}

int main()
{
    while(cin>>n && n!=0)
    {
        k=0;
        prime(n);
    }

}
