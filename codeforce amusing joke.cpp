#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,a[10000]={0},b[10000]={0};
    string s1,s2,s3,s4;
    //memset(a,0,10000);
    //memset(b,0,1000);
    cin>>s1>>s2>>s4;
    s3=s1+s2;
   sort(s3.begin(),s3.end());
   sort(s4.begin(),s4.end());
/*if(s3.size()!=s4.size())
    cout<<"NO"<<endl;
else*/
{
    for(i=0;i<s3.size();i++)
    {
        a[s3[i]]++;
    }

  for(i=0;i<s4.size();i++)
    {
        b[s4[i]]++;
    }

    for(i=0;i<10000;i++)
    {
        if(a[i]!=b[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

}
return 0;
}
