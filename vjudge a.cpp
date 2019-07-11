#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,c=0;

    cin>>n>>m>>k;

    for(i=0;i<m+1;i++)
    {
        cin>>l;

        if(__builtin_popcount(l)<=k)
            c++;

    }

cout<<c-1<<endl;
}
