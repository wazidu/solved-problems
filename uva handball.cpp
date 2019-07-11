#include<bits/stdc++.h>
using namespace std;
/*int main()
{
    long long int i,j=0,k,l,m,n,o,p,q,c=0,d=0,a[10000],b[10000];

    while(cin>>m>>n)
    {j=0;c=0;d=0;
        for(k=0;k<m;k++)
        {

            for(i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]>0)
                    c++;

            }
             c=0;
             if(c==n)
                d++;
        }cout<<d<<endl;
        //sort(b,b+m);


    }
}*/

int main()
{
    int p,m,g,i,k,c;
    while(scanf("%d %d",&p,&m)==2)
    {
        c=0;
        while(p--)
        {
            k=0;
            for(i=1;i<=m;i++)
            {
                scanf("%d",&g);
                if(g>0)
                    k++;
            }
            if(k==m)
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
