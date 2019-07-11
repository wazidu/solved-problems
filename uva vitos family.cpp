#include<bits/stdc++.h>
using namespace std;
/*long long a[100000000],n,t,i;
int main()
{

    ios_base::sync_with_stdio(0),cin.tie(0);

    long long int m,j,k,sum=0;

    cin>>t;

    while(t--)
    {
        cin>>n;
sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];

           // if(i>0)
           // {

           // }

        }
sort(a,a+n);

for(i=1;i<n;i++)
{

    sum=sum+abs(a[i]-a[i-1]);

}


        cout<<sum<<endl;
    }

   return 0;

}*/


int main()
{
    long long int t,a,b,arr[1000]={0},sum;

    scanf("%lld",&t);

    while(t>0)
    {
        sum=0;

         scanf("%lld",&a);

         for(int i=0;i<a;i++)
         {
             scanf("%lld",&arr[i]);
         }

         sort(arr,arr+a);

         if(a%2!=0)
         {
             b=arr[a/2];
         }
         else
         {
             b=arr[a/2];
         }

         for(int i=a/2+1;i<a;i++)
         {
             sum=sum+abs(arr[i]-b);
         }

         for(int i=a/2-1;i>=0;i--)
         {
             sum=sum+abs(b-arr[i]);
         }

         printf("%lld\n",sum);

        t--;
    }

    return 0;

}
