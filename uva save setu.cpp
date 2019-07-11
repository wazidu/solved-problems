#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,c=0,sum=0;

    string s1,s2;

    cin>>t;

    while(t--)
    {
        cin>>s1;
        if(s1=="report")
            cout<<sum<<endl;
        else if(s1=="donate")
        {
            cin>>j;
            sum=sum+j;
        }
    }
    return 0;
}
