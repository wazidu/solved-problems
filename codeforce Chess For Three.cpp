#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,sum=0;
    cin>>k;
    while(k--)
    {
        cin>>j;
        sum=sum+j;
    }
    if(sum%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

   // main();
    return 0;
}
