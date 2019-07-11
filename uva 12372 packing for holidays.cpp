#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,l,w,h,i=0,j,k;

    cin>>t;

    while(t--)
    {
        cin>>l>>w>>h;

        i++;

        if(l<=20 && w<=20 && h<=20 )
            cout<<"Case "<<i<<": good"<<endl;
        else
             cout<<"Case "<<i<<": bad"<<endl;
    }

    return 0;
}
