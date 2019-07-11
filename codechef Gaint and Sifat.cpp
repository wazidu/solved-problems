#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,l,m,n,q=0,r,s;

void p_search(char *pt,char *t)
{
    m=strlen(pt);
    n=strlen(t);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(t[i+j]!=pt[j])
                break;
        }

        if(j==m)
           {
               q++;
              // cout<<"Pattern found at index "<<i<<endl;
           }

    }


}
int main()
{

    char t[1000000],pt[100000],s3[100000];

cin>>k;
cin.ignore();
for(l=1;l<=k;l++)
{
    q=0;s=0;
    gets(s3);
    gets(pt);

    for(r=0;r<strlen(s3);r++)
    {
        if(s3[r]!=' ')
        {
            t[s]=s3[r];
            s++;
        }
    }

    p_search(pt,t);

        cout<<"Case "<<l<<": "<<q<<endl;
}
   // main();
    return 0;
}

