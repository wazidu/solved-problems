#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,k,l,a,b,c,d,rated=0,notrated=0,maybe=0;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a>>b;

        if(a!=b)
        {
            rated++;
        }
        else
        {
            if(a<=c && b<=d)
            {
                maybe++;
            }
            else if(a>=c && b>=d){
                notrated++;
            }
        }
c=a;d=b;
    }
    //cout<<notrated<<endl;

    if(rated>0)
        cout<<"rated"<<endl;
    else if(maybe==(n-1))
                cout<<"maybe"<<endl;
    else if(notrated>0)
        cout<<"unrated"<<endl;

    return 0;
}
