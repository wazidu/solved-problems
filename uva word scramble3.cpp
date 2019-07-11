#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,l,m,n,c=0,d=0;
    char a[10000];

    while(gets(a))
    {
        l=strlen(a);
        d=-1;

        for(i=0;i<l;i++)
        {
            if(a[i]==' ')
            {
                for(j=i-1;j>d;j--)
                    cout<<a[j];
                    cout<<" ";
                d=i;
            }
        }

        for(j=l-1;j>d;j--)
            cout<<a[j];
        cout<<endl;





    }

    return 0;



}
