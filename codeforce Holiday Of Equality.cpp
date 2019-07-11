#include<bits/stdc++.h>
using namespace std;
long long int a[1000000];
int main()
{
    long long int n,i,j,k,mx=0,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
            mx=a[i];
    s=s+a[i];
    }
    /*for(i=0;i<n;i++)
    {
        s=s+
    }*/
    cout<<n*mx-s<<endl;
    main();
    return 0;

}
