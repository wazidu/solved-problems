#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    char s1[1000];

    while(gets(s1))
    {
        for(int i=0;i<(strlen(s1));i++)
        {
            if(s1[i]=='A'|| s1[i]=='B' || s1[i]=='C')
            {
                s1[i]='2';
            }
            else if(s1[i]=='D'|| s1[i]=='E' || s1[i]=='F')
            {
                s1[i]='3';
            }
            else if(s1[i]=='G'|| s1[i]=='H' || s1[i]=='I')
            {
                s1[i]='4';
            }
            else if(s1[i]=='J'|| s1[i]=='K' || s1[i]=='L')
            {
                s1[i]='5';
            }
            else if(s1[i]=='M'|| s1[i]=='N' || s1[i]=='O')
            {
                s1[i]='6';
            }
            else if(s1[i]=='P'|| s1[i]=='Q' || s1[i]=='R'|| s1[i]=='S')
            {
                s1[i]='7';
            }
            else if(s1[i]=='T'|| s1[i]=='U' || s1[i]=='V')
            {
                s1[i]='8';
            }
            else if(s1[i]=='W'|| s1[i]=='X' || s1[i]=='Y'|| s1[i]=='Z')
            {
                s1[i]='9';
            }
        }

        cout<<s1<<endl;
    }

    return 0;
}
