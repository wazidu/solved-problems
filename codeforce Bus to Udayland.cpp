#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n;
    string s[1000],s1;

    cin>>n;
    int p=0;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        //cout<<s[i]<<endl;
        s1=s[i];
       if(p==0 && (s1[0]=='O'&& s1[1]=='O'))

       {
           s1[0]='+';
           s1[1]='+';
           s[i]=s1;
           p++;
       }

        else if(p==0 &&(s1[3]=='O'&& s1[4]=='O'))
        {
             s1[3]='+';
           s1[4]='+';
           s[i]=s1;
           p++;
        }
    }
    if(p==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
         for(i=0;i<n;i++)
    {
        cout<<s[i];
        //if(i<n-1)
            cout<<endl;
    }
    }

    //main();
    return 0;

}
