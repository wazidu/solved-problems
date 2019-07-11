#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i,j,k,l,m,n,t,a1[10000],a2[10000],count=0;
    //char b[6],c[6];
    string s1,s2,b,c;

    cin>>t;


    while(t--)
    {
       // gets(b);
        //gets(c);
        cin>>b>>c;

        for(i=0;i<6;i++)
        {
            a1[i]=b[i];
            a2[i]=c[i];
        }
        sort(a1,a1+6);sort(a2,a2+6);
        count=0;
        for(i=0;i<6;i++)
        {
            if(a1[i]!=a2[i])
            {
                count++;
                break;
            }
        }

        if(count==0)
            cout<<"Equal"<<endl;
        else
            cout<<"Not Equal"<<endl;
    }




}
