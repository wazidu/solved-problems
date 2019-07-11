#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int i,j,k,l,a,b,m,n,c=0,d=0,suma=0,sumb=0;


cin>>n>>a>>b;
k=n;
while(k--)
{
    cin>>j;

    suma=suma+j;
}
while(n--)
{
    cin>>i;

    sumb=sumb+i;
}
if((a+suma)>(b+sumb))
    cout<<"1"<<endl;
else if((a+suma)<(b+sumb))
    cout<<"2"<<endl;
else
    cout<<"0"<<endl;







return 0;
}
