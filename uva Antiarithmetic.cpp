#include<bits/stdc++.h>
using namespace std;
 int a[1000000],b[1000000];
int main()
{long  long int t,n,i,j,k,l,m,c=0,d=0,sum=0;
    //ios_base::sync_with_stdio(0),cin.tie(0);

char p;
    while(cin>>n && n!=0 )
    {
        cin>>p;
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0 && i!=(n-1))
                c=0;
            else if(i>0 && a[i]>a[i-1])
                c++;

        }
        if(c>2)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }

cout<<endl;
    return 0;


}
