#include<bits/stdc++.h>
#include<stdio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int i,j,k,l,c=0;
    char a[100],d='x++', e='++x',f='x--',g='--x';

    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        gets(a);

        if((a==d) || (a==e) )
        {
            c++;
        }
        else
            c--;
    }
    cout<<c<<endl;
}
