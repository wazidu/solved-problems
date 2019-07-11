#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[200]={0},b[100],c,t,i,l;

    char s[10000],c[100];

    cin>>t;
    cin.ignore();

    while(t--)
    {
        gets(s);
        l=strlen(s);

        for(i=0;i<l;i++)
        {
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                a[s[i]]++;
            }
        }
        //sort(a,a+200);
                //cout<<a[199];
int k=0;

        for(int i=0;i<200;i++)
        {
            if(a[i]!=0)
            {
                b[k]=i;
                c[k]=
            }
        }


    }



}

