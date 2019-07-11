#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=1,j,k,l,m=0,n,s=0;

    cin>>n;

    while(1)
    {
        if(s>=n)
            break;
        s=s+i*(i+1)/2;
        i++;

    }
if(n==1)
    cout<<"1"<<endl;
else
    cout<<i-2<<endl;
   // main();
    return 0;
}
