#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j=0,k,l,c=0,d=0;

    while(cin>>n && n!=0)
    {
        j++;c=0;
        while(n--)
        {
            cin>>i;
            if(i!=0)
                c++;
            else
                c--;
        }
        cout<<"Case "<<j<<": "<<c<<endl;
    }

    return 0;
}
