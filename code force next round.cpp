#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,c=0,d=0,a[100];

    cin>>n>>k;

    if((k>=1) && (k>=n) && (n<=50))
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(i=0;i<n;i++){
        if(a[i]>=a[k-1]&& a[i]!=0 )
            c++;
        }
    }

cout<<c<<endl;

return 0;
}
