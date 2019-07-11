#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,t,c=0,d=0,l1;
    string s1,s2,s3;

    cin>>t;

    while(t--)
    {
        cin>>s1>>s2;
        l=s1.size();l1=s2.size();

        for(i=0;i<min(l,l1);i++)
        {
            cout<<s1[i]<<s2[i];
        }
        if(l>l1)
        {
            for(j=i;j<l;j++)
                cout<<s1[j];
        }
        else
        {
             for(j=i;j<l1;j++)
                cout<<s2[j];
        }
        cout<<endl;
    }
    main();
    return 0;
}
