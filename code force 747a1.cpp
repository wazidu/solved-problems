#include<bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,c=0,a[100];
    cin>>m;

    l=sqrt(m);

    for( i=l;i>=1;i--){
        if(m%i==0)
        {
            a[l]=i;
            cout<<i<<' '<<m/i<<endl;
            break;

        }



    }


return 0;

    }
