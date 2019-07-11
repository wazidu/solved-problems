#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,n,x,c=0;

    cin>>n>>x;

    for(i=1;i<=n;i++)

    {
        if(x%i==0 && x/i<=n)
            c++;
    }
    cout<<c<<endl;
   // main();
    return 0;


}
