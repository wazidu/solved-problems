#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j,k,l,m,c=0,d=0,a[50];

    cin>>m;

    for(i=0;i<m;i++)
    {
        cin>>a[i];
        c=c+a[i];
    }
    l=c%4;
    k=c/4;
    if(l==0)
    {
        cout<<k<<endl;
    }
    else
    {
        cout<<k+1<<endl;
    }
    return 0;
}
