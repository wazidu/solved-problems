#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100005];
    int i,j,k,l,m,n;
    while(gets(a))
    {
        l=strlen(a);
        a[l++]=' ';
        a[l]='\0';

        j=0;
        for(i=0;i<l;i++)
        {
            if(a[i]==' ')
            {
                k=(i-1);
                for(m=k;m>=j;m--)
                    cout<<a[m];

                if(i!=(l-1))
                cout<<" ";
                j=i+1;
            }
        }
        cout<<endl;
    }
    return 0;
}
