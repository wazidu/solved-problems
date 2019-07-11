
#include<bits/stdc++.h>
using namespace std;
long long int a[100000];
int main()
{
    long long int n,i,j,k,l,s=0;
cin>>n;

for(i=0;i<3;i++)
{
    for(j=n;j>=1;j--){
        cin>>k;
        s=s+k;
    }
    n--;
    a[i]=s; s=0;
}
sort(a,a+3);
cout<<a[2]-a[1]<<endl<<a[1]-a[0]<<endl;
//main();
}
