#include<bits/stdc++.h>
using namespace std;
int a[1000000],b[1000000];
int main()
{


    long long int t,i,j,k,l,m,n,c=0,d=0,sum=0;

    cin>>t;


        for(i=0;i<t;i++)
        {
            cin>>a[i];

            if(a[i]%4==0)
                c++;
            else
                sum=sum+a[i]%4;
        }

if(sum%4==0)
    cout<<c+sum/4<<endl;
else
    cout<<c+sum/4+1<<endl;


}
