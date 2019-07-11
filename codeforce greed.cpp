#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,i,j,k=0,l,m,c=0;
vector <long long int> b;
    cin>>m;

    for(i=0;i<m;i++)
    {
        cin>>a;
        k=k+a;
    }

    for(i=0;i<m;i++)
    {
        cin>>j;
        b.push_back(j);
    }
    sort(b.begin(),b.end());
    if((b[m-1]+b[m-2])>=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    //main();

    return 0;
}
