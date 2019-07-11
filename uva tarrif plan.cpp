#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,l,m,n,a[2000],mile=0,juice=0,c=0;

    cin>>t;

    while(t--)
    {
        c++;
        cin>>n;

        while(n--)
        {
            cin>>k;

                mile=mile+(k+30)/30;

                juice=juice+(k+60)/60;

        }
        mile=mile*10;
        juice=juice*15;

        if(mile<juice)
        {
            cout<<"Case "<<c<<": Mile "<<mile<<endl;
        }
        else if(mile>juice)
        {
            cout<<"Case "<<c<<": Juice "<<juice<<endl;
        }
        else if(mile==juice)
            cout<<"Case "<<c<<": Mile Juice "<<mile<<endl;
        mile=0;juice=0;
    }

    return 0;



}
