#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j=0;

    cin>>n>>k;

    for(i=1;i<=k;i++)
    {
        if(n%10==0)
            n=n/10;
        else
            n=n-1;
    }
    cout<<n<<endl;

    //main();
    return 0;
}
