#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i,j,k,happy=0,poor=0;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>p>>q;
        if(p<q)
        {
            happy++;
        }
        else
        {
            poor++;
        }
    }

    if(happy!=0)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
        cout<<"Poor Alex"<<endl;


    return 0;
}
