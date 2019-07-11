#include<bits/stdc++.h>
using namespace std;

int prime(long long int n)
{
    if(n<2)
        return 0;
    for(long long int i=2;i<=n/2;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;



}
int rev(long long int n)
{

    int revv=0;
    while(n!=0)
    {
        revv=revv*10+n%10;
        n=n/10;
    }
    return revv;


}

int main()
{
    long long int n,i,j,k;
    ios_base::sync_with_stdio(0),cin.tie(0);
    while(cin>>n)
    {
        cout<<n*2<<endl;

        if(rev(n)==n)
        {
            if(prime(rev(n)))
                break;
        }
    }
    return 0;



}
