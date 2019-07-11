/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l=0;
    char a[1000];
    cin>>k;

    for(i=0;i<k;i++)
    {
        cin>>a[i];

        if((a[i]>= 'a' && a[i]<='z') || (a[i]>= 'A' && a[i]<='Z'))
           l++;
    }

    if(l>=26)
        cout<<"YES";
    else
        cout<<"NO";
}*/


#include <iostream>
using namespace std;

int main()
{
    int n,c=0,q[26]= {0};
    char x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        x=tolower(x);
        if(q[x-'a']==0)
            c++;
        q[x-'a']++;

    }
    if(c==26)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
