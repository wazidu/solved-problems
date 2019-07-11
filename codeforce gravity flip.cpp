#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,a[10000];

  cin>>n;

    for(i=0;i<n;i++)
       cin>>a[i];

    sort(a,a+n);

    for(i=0;i<n;i++)
    {
       cout<<a[i];
        if(i<n-1)
            printf(" ");

    }
   cout<<endl;
    return 0;

}
