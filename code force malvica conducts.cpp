#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,m,c=0,d=0,a[10000];


    cin>>t;

    while(t--)
    {
        cin>>n>>m;

        if(n==1)
        {
            cout<<"0"<<endl;
        }
        else if(n==2)
        {
            cout<<m<<endl;
        }
        else{

                m=(m-1)*2;

        n=n-1;

        cout<<n+m<<endl;


        }






    }


    return 0;
}
