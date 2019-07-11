#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n,max1=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>k;


        if(k>max1)
            max1=k;
    }
    if((max1-25)>=0)
        cout<<max1-25<<endl;
    else
        cout<<"0"<<endl;
}
