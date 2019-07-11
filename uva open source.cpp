#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int i=0,j,k,l,c=0,d=0;

    char a[10000],b[10000],c1[10000];
    string s1,s2;

    while(gets(a))
    {
        if(a[0]=='1')
        {
             for(j=0;j<strlen(b);j++)
                cout<<b[j];
               cout<<" "<<c<<endl;
              // strcpy(b,a);
           // return 0;
        }
        if(a[0]=='0') return 0;
       if(a[0]>='A' && a[0]<='Z')
       {
           if(i==0){
           strcpy(b,a);
           }
           if(i>0)
           {
               for(j=0;j<strlen(b);j++)
                cout<<b[j];
               cout<<" "<<c<<endl;
               strcpy(b,a);
               c=0;
           }
       }
        else if(a[0]>='a' && a[0]<='z' )
        {
            if(strlen(a)!=1 && a[0]!='x')
               c++;
        }
      i++;

    }

 return 0;

}
