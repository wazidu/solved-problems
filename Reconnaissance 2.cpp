#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a[200],p,q,min1=100000;

    cin>>k;

    for(i=1;i<=k;i++)
    {
        cin>>a[i];
        if(i>1 && abs(a[i]-a[i-1])<min1)
        {
            min1=abs(a[i]-a[i-1]);
            p=i-1; q=i;
        }
    }
    if(abs(a[k]-a[1])<min1)
    {
         min1=abs(a[i]-a[i-1]);
            p=k; q=1;
    }
    cout<<p<<" "<<q<<endl;
    //main();
    return 0;

}
