#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    long long int i,j,k,l,m;

    char a[100000],b[100000];

    while(gets(a))
    {
        memset(b,0,100000);
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='B' || a[i]=='F' || a[i]=='P' || a[i]=='V')
                b[i]='1';
            else if(a[i]=='C' || a[i]=='G' || a[i]=='J' || a[i]=='K' || a[i]=='Q' || a[i]=='S' || a[i]=='X' || a[i]=='Z')
                b[i]='1';
            else if(a[i]=='D' || a[i]=='T' )
                b[i]='3';
            else if(a[i]=='L' )
                b[i]='4';
            else if(a[i]=='M' || a[i]=='N' )
                b[i]='5';
            else if(a[i]=='R' )
                b[i]='6';
            else
                b[i]='#';
        }
        for(i=0;i<strlen(b),b[i]!='#';i++)
            {cout<<b[i];


            }

        cout<<endl;
    }


    return 0;


}*/


#include<stdio.h>
#include<string.h>
int main()
{
int i,l;
char s[100];
while(gets(s))
{
l=strlen(s);
for(i=0;i<l;i++)
    {
    if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V')
        {
        if(s[i-1]!='B' && s[i-1]!='F' && s[i-1]!='P' && s[i-1]!='V')
            printf("1");
        }
    else if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z')
        {
        if(s[i-1]!='C' && s[i-1]!='G' && s[i-1]!='J' && s[i-1]!='K' && s[i-1]!='Q' && s[i-1]!='S' && s[i-1]!='X' && s[i-1]!='Z')
            printf("2");
        }
    else if(s[i]=='D' || s[i]=='T')
        {
        if(s[i-1]!='D' && s[i-1]!='T')
            printf("3");
        }
    else if(s[i]=='L')
        {
        if(s[i-1]!='L')
            printf("4");
        }
    else if(s[i]=='M' || s[i]=='N')
        {
        if(s[i-1]!='M' && s[i-1]!='N')
            printf("5");
        }
    else if(s[i]=='R')
        {
        if(s[i-1]!='R')
            printf("6");
        }
    }

printf("\n");
}
}
