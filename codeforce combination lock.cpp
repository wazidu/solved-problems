#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,c=0,d=0,e,f;

    char s1[1001],s2[1001];
    cin>>n;
    scanf("%s%s",s1,s2);

    for(i=0;i<n;i++)
    {
        c=c+min(abs(s1[i]-s2[i]), 10-abs(s1[i]-s2[i]));
        //cout<<c<<endl;
    }
    cout<<c<<endl;
   // main();
    return 0;
}
