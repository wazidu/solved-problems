#include<bits/stdc++.h>
using namespace std;
long long int i,j,k,l,m,n,q=0;

void p_search(char *pt,char *t)
{
    m=strlen(pt);
    n=strlen(t);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(t[i+j]!=pt[j])
                break;
        }

        if(j==m)
           {
               q++;
              // cout<<q<<endl;
           }

    }


}
int main()
{

    char t[10000],pt1[]="Danil", pt2[]="Olya",pt3[]="Slava",pt4[]="Ann" ,pt5[]="Nikita",s3[100000];

    gets(t);
    p_search(pt1,t);
    p_search(pt2,t);
    p_search(pt3,t);
    p_search(pt4,t);
    p_search(pt5,t);
    if(q==1)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
q=0;
    //main();
    return 0;
}

