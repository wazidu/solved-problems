#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,k,l,m,n;

    cin>>l;

    while(l--)
    {
        cin>>n;

        if(__builtin_popcount(n-1)& 1)
            cout<<"Louise"<<endl;
        else
            cout<<"Richard"<<endl;
    }


}
