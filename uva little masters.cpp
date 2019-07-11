#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0),cin.tie(0);
    long long int t;
     double i,j,k,l,m,n;

    cin>>t;
    while(t--)
    {
        cin>>i>>j>>k;
        l=k-sqrt(i*i+j*j);
        m=k+sqrt(i*i+j*j);


        printf("%.2lf %.2lf\n",l,m);
    }
}
