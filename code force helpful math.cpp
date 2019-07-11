#include<bits/stdc++.h>
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int i,j,k,l,m,c=0,e=0,a[100],x[100],y;
    char b[100],f[100];
    int d[100];

    gets(b);
    l=strlen(b);

    for(i=0;i<l;i++)
    {
        if(b[i]!='+')
        {

            d[c]=b[i];
            c++;
        }
    }

   sort(d,d+c);

    for(k=0;k<c;k++)
    {
        printf("%c",d[k]);
        if(k!=c-1)
  printf("+");

}
cout<<endl;
return 0;
}
