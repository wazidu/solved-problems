#include<bits/stdc++.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j,k,l,a[100],c=0,d=0;
    char b[10],e[10],ch;
  //  char f[26];

cin>>b;

    l=strlen(b);
    strcpy(e,b);
    /*
    for(i=0;i<l;i++)
    {
        e[i]=b[i];
    }
    */

    while(1==1)
        {

    ch=e[l-1];
    e[0]=ch;

    for(i=1;i<=l-2;i++)
    {
        e[i]=b[i];
    }
    k=strcmp(e,b);

    if(k!=0){

        c++;
    }
    else{
       break;
    }
    }
cout<<c<<endl;

return 0;
}
