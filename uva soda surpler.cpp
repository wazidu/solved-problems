#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t, e,f,c,n,mod,val,d=0,sum=0;

    cin>>t;
    while(t--)
    {
        cin>>e>>f>>c;

        n=e+f;

        while(n>=c)
        {
            mod=n%c;
            val=n/c;
            sum=sum+val;
            n=val+mod;

        }
        //if(n==(c-1))
            //cout<<sum+1<<endl;
       // else
            cout<<sum<<endl;
        mod=0;val=0;sum=0;n=0;
    }





    return 0;




}
