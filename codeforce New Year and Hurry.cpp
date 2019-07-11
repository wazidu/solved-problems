#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j,mintsum=0,sum=0;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        sum=sum+i*5;
        if((sum+k)>240)
            break;
    }
    cout<<i-1<<endl;
    //main();
    return 0;
}
