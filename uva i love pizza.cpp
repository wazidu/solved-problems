#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,k, l,m=0,a=0,r=0,g=0,t=0,i=0,count=0,p;
   // char c[10000];
   string c;
    cin>>k;
    for(p=0;p<k;p++)
    {
        cin>>c;
        l=c.size();

        for(j=0;j<l;j++)
        {
            if(c[j]=='M')
                m++;
            else if(c[j]=='A')
                a++;
            else if(c[j]=='R')
                r++;
            else if(c[j]=='G')
                g++;
            else if(c[j]=='T')
                t++;
            else if(c[j]=='I')
                i++;

        }


        while(m>=1 && a>=3 && r>=2 && g>=1 && i>=1 && t>=1)
        {
            count++;
            m=m-1;a=a-3;r=r-2; g=g-1;i=i-1;t=t-1;
        }

        cout<<count<<endl;
        m=0;a=0;r=0;g=0;i=0;t=0,count=0;
    }
    return 0;
}
