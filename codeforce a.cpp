#include<bits/stdc++.h>
using namespace std;
long long int a[10000000],n,i,j,sum=0;
int main()
{
    cin>>n;
    long long int p=n;
    while(n--)
    {
        cin>>j;
        sum=sum+j;
    }

    if(sum%2==0 || sum==0)
        cout<<"Second"<<endl;
    else
        cout<<"First"<<endl;




}
