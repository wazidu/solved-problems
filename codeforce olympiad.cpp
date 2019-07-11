#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,j,k,c=0;
int a[601]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;

            a[k]++;
    }
    for(i=1;i<=600;i++)
    {
        if(a[i]!=0)
            c++;
    }
    cout<<c<<endl;
    //main();
    return 0;
}
