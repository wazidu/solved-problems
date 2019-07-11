#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,k,l1,l2,m,n,c=0,d=0,left,right;

    string s1,s2,s3;
    cin>>t;

    while(t--)
    {
        m=0;d=0;
        left=0;right=0;
        cin>>s1>>s2;
        l1=s1.size();l2=s2.size();

        for(i=0;i<max(l1,l2);i++)
        {
            d=(s2[i]-s1[i]);
            if(d<0)
                d=d+26;

            m=m+d;
        }

        cout<<m<<endl;

    }
    //main();
    return 0;
}
