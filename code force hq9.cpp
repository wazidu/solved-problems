#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, l, c=0,d=0,a[100];
    char p, q[100];
    gets(q);

    l=strlen(q);

    for(i=0;i<l;i++)
    {
        if((q[i]=='H') || (q[i]=='Q') || (q[i]=='9')  )
        {
           c++;
        }

    }

    if(c>=1)
    {
        cout<<"YES"<<endl;

    }
    else
        cout<<"NO"<<endl;


    return 0;

}
