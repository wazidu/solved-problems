#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,c=0,d=0;

    //string s1,s2;
    char s1[1000],b,ch;

    while(gets(s1))
    {
        c=0; int d=1;
for(i=0;i<strlen(s1);i++)
        {
            if( (s1[i-1]>='A' && s1[i-1]<='Z')||(s1[i-1]>='a' && s1[i-1]<='z'))
         {
             if(d)
             c++;
             d=0;


         }
         else
            d=1;

        //ch=s1[i-1];
        }
        cout<<c<<endl;
    }




}
