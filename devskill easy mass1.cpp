#include<bits/stdc++.h>
using namespace std;
long long int a[100000000];
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);

    long long int t,i,j,k=0,n,l,m,c=0,d=0,sum=0;

    char b[10000];
    string s1,s2;
cin>>t;

while(t--)
{
    k++;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            sum=sum+(a[i] | a[j]);

        }
    }

    cout<<"Case "<<k<<": "<<sum<<endl;
    sum=0;
}

    return 0;



}
