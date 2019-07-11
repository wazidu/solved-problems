#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,b[10000];

    double x,y,z,a[10000]= {0.00};
    string ch;
    //char ch[1000],c,ch1[1000];

    scanf("%d%ld",&k,&y);

    //gets(ch);
    cin>>ch;

    for(i=0; i<k; i++)
    {
        a[ch[i]]++;

    }
    for(i=0; i<256; i++)
    {
        if(a[i]!=0)
        {
            x=a[i];
            if((x/y)>1.00)
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
