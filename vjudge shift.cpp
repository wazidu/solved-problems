#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,arr[100002],i,t=0,b=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        if(i>0 && arr[i]<arr[i-1])
        {
            t++;
            b=i;
        }
    }
    if(t==0)
        cout<<"0"<<endl;
    else
    {
        if(t==1 && arr[n-1]<=arr[0])
            cout<<n-b<<endl;
        else
             cout<<-1<<endl;
    }
}
