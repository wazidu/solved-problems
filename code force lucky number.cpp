#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    int n,i,j,k;

    cin>>n;

    if((n%4==0) || (n%7==0) || (n%47==0)||(n%74==0)||(n%477==0))
    {
        cout<<"YES"<<endl;
    }
else
    cout<<"NO"<<endl;

return 0;
}*/

int main()
{
    long long int i,j,k=0,l,m,n,four=0,seven=0;

    char a[100];
    char s1='4',s2='7';

    gets(a);

    l=strlen(a);

    for(i=0; i<l; i++)
    {
        if(a[i]==s1 || a[i]==s2)
            {

             k++;

             if(a[i]==s1)
                four++;
             else
                seven++;



            }


    }
    //cout<<l;
    if(k==l && four>0 && seven>0)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

        return 0;
}

