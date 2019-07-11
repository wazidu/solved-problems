#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[300]={0},i,j,l,k=0;

    char a[10000];

    gets(a);

    l=strlen(a);

    for(i=0;i<l;i++)
    {
        if(a[i]>='a' && a[i]<='z')
          x[a[i]]++;
    }
    for(i=0;i<300;i++)
    {
        if(x[i]!=0)
            k++;
    }


    cout<<k<<endl;


}
