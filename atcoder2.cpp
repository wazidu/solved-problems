#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,a,b;

    cin>>a>>b;
    k=b;
    j=0;
    while(k!=0)
    {
        j++;
        k=k/10;
    }
   // cout<<j;

    k=1;
    for(i=0;i<j;i++)
    {
        k*=10;
    }
   // cout<<k;
    a=a*k+b;
    //cout<<a;
    double kk=sqrt(a);
    if(kk==(long long )kk)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;

}

