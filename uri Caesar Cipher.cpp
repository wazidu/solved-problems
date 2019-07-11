#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,t,c=0,d=0;
    string s1,s2;
    cin>>t;

    while(t--)
    {
        cin>>s1>>n;

        for(i=0;i<s1.size();i++)
        {
            k=s1[i];
            l=k-n;
            if(l<65)
            {
                m=s1[i]-65;
                s1[i]=90-n+m+1;
            }
            else
                s1[i]=s1[i]-n;
        }
        cout<<s1<<endl;
    }
   main();
   return 0;

}
