#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,c=0,m,n;

    cin>>k;

    for(i=0;i<k;i++)
    {
        cin>>m>>n;
        if(m<n)
        {
            c++;
        }
    }
    cout<<c<<endl;

    return 0;
}
