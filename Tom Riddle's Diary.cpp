#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    long long int i,j,k,l,n,m,c=0;

    string s1[101],s2,s3;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>s1[i];
        if(i==0)
        {
            cout<<"NO"<<endl;

        }
        else{
            for(j=i-1;j>=0;j--)
            {
                if(s1[i]==s1[j] )
                    c=1;
            }
        if(c==1)
            cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;

        }
        c=0;
    }
//main();
  return 0;

}
