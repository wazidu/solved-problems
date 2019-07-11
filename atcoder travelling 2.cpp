#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n;
    cin>>n;
    m=0;
    while(n--)
    {
        cin>>i>>j>>k;
        l=j+k;

        if(l<=i)
        {
            if((l%2==1&&i%2==0)||(l%2==0&&i%2==1))
            {
                m=1;
            }

        }
        else
            m=1;
    }
    if(m==1)
        cout<<"No"<<endl;
    else
        cout<<"Yes"<<endl;
}
