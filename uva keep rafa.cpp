#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,t,n,l,m,c=0,count=0,result;
    char ch;

    cin>>t;

    while(t--)
    {
        c++; count=0;
        cin>>n;
        result=-1;
        for(i=1;i<=n;i++)
        {
            cin>>ch;

            if(ch!='W')
            {
                count++;

                if(count==3 && result==-1)
                    result=i;
            }
            else
                count=0;

        }
        if(result==-1)
            cout<<"Case "<<c<<": Yay! Mighty Rafa persists!"<<endl;
        else
            cout<<"Case "<<c<<": "<<result<<endl;
    }
}
