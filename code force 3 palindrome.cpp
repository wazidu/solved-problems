#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,j;

    cin>>n;

    for(int i=1;i<=n;i++)
    {
        j=i%4;
        if(j==0 || j==1)
            {
            cout<<"a";
        }
        else if(j==2 || j==3)
            {
            cout<<"b";
        }
    }

    cout<<endl;
}
