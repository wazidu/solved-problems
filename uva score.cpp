#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,l,c=0,sum=0;
    //char a[100];
    string a;

    cin>>t;

    while(t--)
    {
        cin>>a;
        l=a.size();

        for(i=0;i<l;i++)
        {
            if(a[i]=='O')
            {
                c++;
            }
            else
                c=0;
            sum=sum+c;
        }
        cout<<sum<<endl;
        c=0;sum=0;
    }
    return 0;
}
